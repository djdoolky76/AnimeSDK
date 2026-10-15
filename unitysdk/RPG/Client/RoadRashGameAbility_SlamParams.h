#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::Client { class RoadRashGameAbilityValueModifer; }
namespace RPG::Client { class RoadRashGameAbility_SlamParams; }
namespace System { class String; }

#define RPG_CLIENT_ROADRASHGAMEABILITY_SLAMPARAMS_CTOR_OFFSET UNITYSDK_OFFSET(0x1D32E0F0)
#define RPG_CLIENT_ROADRASHGAMEABILITY_SLAMPARAMS_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D32DA40)

namespace RPG::Client
{
	class RoadRashGameAbility_SlamParams : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* MoveSpeedCurveName; // 0x10
		::System::String* MoveSpeedBlendCurveName; // 0x18
		::RPG::GameCore::FixPoint MoveSpeed; // 0x20
		::RPG::GameCore::FixPoint MoveDuration; // 0x28
		::System::String* MoveOffsetRotateCurveName; // 0x30
		::RPG::GameCore::FixPoint MoveOffsetDuration; // 0x38
		::RPG::GameCore::FixPoint MoveSpeedProtectDuration; // 0x40
		::RPG::GameCore::FixPoint ImpactUltimateEnergy; // 0x48
		::Il2CppArray<::RPG::Client::RoadRashGameAbilityValueModifer*>* ImpactSpeedModifier; // 0x50
		::Il2CppArray<::RPG::Client::RoadRashGameAbilityValueModifer*>* EnhanceImpactSpeedModifier; // 0x58
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASHGAMEABILITY_SLAMPARAMS_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::Client::RoadRashGameAbility_SlamParams* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::Client::RoadRashGameAbility_SlamParams*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASHGAMEABILITY_SLAMPARAMS_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
