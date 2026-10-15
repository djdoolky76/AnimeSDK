#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueTournBuildRefMatchConfig; }
namespace RPG::GameCore { class RogueTournBuildRefMatchFormulaRateConfig; }
namespace RPG::GameCore { class RogueTournBuildRefMatchHexMiracleRateConfig; }

#define RPG_GAMECORE_ROGUETOURNBUILDREFMATCHCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA34DC0)
#define RPG_GAMECORE_ROGUETOURNBUILDREFMATCHCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA34C40)

namespace RPG::GameCore
{
	class RogueTournBuildRefMatchConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::RogueTournBuildRefMatchFormulaRateConfig* FormulaRate; // 0x10
		::RPG::GameCore::RogueTournBuildRefMatchHexMiracleRateConfig* HexMiracleRate; // 0x18
		::System::UInt32 AllOwnedTeamRate; // 0x20
		::System::Byte _padding0[0x4];
		::RPG::GameCore::RogueTournBuildRefMatchFormulaRateConfig* SelectingFormulaRate; // 0x28
		::RPG::GameCore::RogueTournBuildRefMatchHexMiracleRateConfig* SelectingHexMiracleRate; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNBUILDREFMATCHCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueTournBuildRefMatchConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueTournBuildRefMatchConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNBUILDREFMATCHCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
