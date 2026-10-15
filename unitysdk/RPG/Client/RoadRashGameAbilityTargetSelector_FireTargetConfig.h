#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseLittleGameAbilityTargetSelectorConfig.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class FCOEMCEDLNL;
namespace RPG::Client { class RoadRashGameAbilityTargetSelector_FireTargetConfig; }
namespace System { class String; }

#define RPG_CLIENT_ROADRASHGAMEABILITYTARGETSELECTOR_FIRETARGETCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D329E30)
#define RPG_CLIENT_ROADRASHGAMEABILITYTARGETSELECTOR_FIRETARGETCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D329E40)
#define RPG_CLIENT_ROADRASHGAMEABILITYTARGETSELECTOR_FIRETARGETCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D329DE0)

namespace RPG::Client
{
	inline static constexpr unsigned int RoadRashGameAbilityTargetSelector_FireTargetConfig_TypeDefinitionIndex = 10291;

	class RoadRashGameAbilityTargetSelector_FireTargetConfig : public ::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig
	{
	public:
		::RPG::GameCore::FixPoint MinRadius; // 0x10
		::RPG::GameCore::FixPoint MaxRadius; // 0x18
		::RPG::GameCore::FixPoint FanAngle; // 0x20
		::System::String* CurrentLevelAttributeName; // 0x28
		::RPG::GameCore::FixPoint MultiTargetMinLevel; // 0x30
		::System::String* Lv3ToggleName; // 0x38
		::RPG::GameCore::FixPoint Lv3MinRadius; // 0x40
		::RPG::GameCore::FixPoint Lv3MaxRadius; // 0x48
		::RPG::GameCore::FixPoint Lv3FanAngle; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASHGAMEABILITYTARGETSELECTOR_FIRETARGETCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::Client::RoadRashGameAbilityTargetSelector_FireTargetConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::Client::RoadRashGameAbilityTargetSelector_FireTargetConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASHGAMEABILITYTARGETSELECTOR_FIRETARGETCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::Client::RoadRashGameAbilityTargetSelector_FireTargetConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::Client::RoadRashGameAbilityTargetSelector_FireTargetConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASHGAMEABILITYTARGETSELECTOR_FIRETARGETCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
