#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseLittleGameAbilityTaskConfig.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class FCOEMCEDLNL;
namespace RPG::Client { class RoadRashGameAbility_ReleaseCharging; }
namespace RPG::Client { class RoadRashGameAbility_ReleaseCharging_AdditiveSpeedConfig; }
namespace System { class String; }

#define RPG_CLIENT_ROADRASHGAMEABILITY_RELEASECHARGING_CTOR_OFFSET UNITYSDK_OFFSET(0x1D2FE780)
#define RPG_CLIENT_ROADRASHGAMEABILITY_RELEASECHARGING_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D2FE790)
#define RPG_CLIENT_ROADRASHGAMEABILITY_RELEASECHARGING_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D2FE750)

namespace RPG::Client
{
	inline static constexpr unsigned int RoadRashGameAbility_ReleaseCharging_TypeDefinitionIndex = 10286;

	class RoadRashGameAbility_ReleaseCharging : public ::RPG::GameCore::BaseLittleGameAbilityTaskConfig
	{
	public:
		::Il2CppArray<::RPG::Client::RoadRashGameAbility_ReleaseCharging_AdditiveSpeedConfig*>* AdditiveConfigs; // 0x18
		::System::String* FullChargeValueToggleName; // 0x20
		::Il2CppArray<::RPG::Client::RoadRashGameAbility_ReleaseCharging_AdditiveSpeedConfig*>* FullAdditiveConfigs; // 0x28
		::System::String* RotateCurveName; // 0x30
		::System::String* RotateDurationMappingCurveName; // 0x38
		::RPG::GameCore::FixPoint RotateDuration; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASHGAMEABILITY_RELEASECHARGING_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::Client::RoadRashGameAbility_ReleaseCharging* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::Client::RoadRashGameAbility_ReleaseCharging*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASHGAMEABILITY_RELEASECHARGING_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::Client::RoadRashGameAbility_ReleaseCharging* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::Client::RoadRashGameAbility_ReleaseCharging*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASHGAMEABILITY_RELEASECHARGING_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
