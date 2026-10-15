#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueTournBuildRefMatchHexMiracleRateConfig; }

#define RPG_GAMECORE_ROGUETOURNBUILDREFMATCHHEXMIRACLERATECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA35080)
#define RPG_GAMECORE_ROGUETOURNBUILDREFMATCHHEXMIRACLERATECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA34F50)

namespace RPG::GameCore
{
	class RogueTournBuildRefMatchHexMiracleRateConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 Essential; // 0x10
		::System::UInt32 Optional; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNBUILDREFMATCHHEXMIRACLERATECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueTournBuildRefMatchHexMiracleRateConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueTournBuildRefMatchHexMiracleRateConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNBUILDREFMATCHHEXMIRACLERATECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
