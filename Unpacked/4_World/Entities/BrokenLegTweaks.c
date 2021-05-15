modded class BrokenLegsMdfr
{
	override void Tick(float delta_time)
	{
		if ( !m_IsActive && m_ShouldBeActive )
		{
			float willLegBreak = Math.RandomFloatInclusive(0.0, 1.0);
			Print("OnTick");
			Print(willLegBreak);
			if (willLegBreak <= LegBreakCfg.chanceOfLegBreak){
				Activate();
			} else {
				m_ShouldBeActive = 0;
			}
		}
		
		if ( m_IsActive )
		{
			if ( DeactivateCondition(m_Player) )
			{
				if ( !IsLocked() ) 
				{
					Deactivate();
				}
			}
			else
			{
				m_ActivatedTime += m_AccumulatedTimeActive;
				OnTick(m_Player, delta_time);
			}
			m_AccumulatedTimeActive = 0;
		}
	}
}