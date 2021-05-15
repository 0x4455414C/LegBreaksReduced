class CfgPatches
{
	class LegBreaksReduced
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data"
		};
	};
};
class CfgMods
{
	class LegBreaksReduced
	{
		dir="LegBreaksReduced";
		picture="";
		action="";
		hideName=1;
		hidePicture=1;
		name="LegBreaksReduced";
		credits="DUAL";
		author="DUAL";
		authorID="0";
		version="1.0";
		extra=0;
		type="mod";
		dependencies[]=
		{
			"Game"
		};
		class defs
		{
			class worldScriptModule
			{
				value="";
				files[]=
				{
					"LegBreaksReduced\4_World"
				};
			};
		};
	};
};
