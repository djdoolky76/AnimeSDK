#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseLittleGameAbilityTargetSelectorConfig.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class FCOEMCEDLNL;
namespace RPG::Client { class RoadRashGameAbilityTargetSelector_SlamTargetConfig; }
namespace System { class String; }

#define RPG_CLIENT_ROADRASHGAMEABILITYTARGETSELECTOR_SLAMTARGETCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D2FC830)
#define RPG_CLIENT_ROADRASHGAMEABILITYTARGETSELECTOR_SLAMTARGETCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D2FC840)
#define RPG_CLIENT_ROADRASHGAMEABILITYTARGETSELECTOR_SLAMTARGETCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D2FC7E0)

namespace RPG::Client
{
	inline static constexpr unsigned int RoadRashGameAbilityTargetSelector_SlamTargetConfig_TypeDefinitionIndex = 10295;

	class RoadRashGameAbilityTargetSelector_SlamTargetConfig : public ::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig
	{
	public:
		::RPG::GameCore::FixPoint MinRadius; // 0x10
		::RPG::GameCore::FixPoint MaxRadius; // 0x18
		::RPG::GameCore::FixPoint FanAngle; // 0x20
		::System::String* MinRadiusAdditiveAttributeName; // 0x28
		::System::String* MaxRadiusAdditiveAttributeName; // 0x30
		::System::String* FanAngleAttributeName; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASHGAMEABILITYTARGETSELECTOR_SLAMTARGETCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::Client::RoadRashGameAbilityTargetSelector_SlamTargetConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::Client::RoadRashGameAbilityTargetSelector_SlamTargetConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASHGAMEABILITYTARGETSELECTOR_SLAMTARGETCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::Client::RoadRashGameAbilityTargetSelector_SlamTargetConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::Client::RoadRashGameAbilityTargetSelector_SlamTargetConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASHGAMEABILITYTARGETSELECTOR_SLAMTARGETCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
