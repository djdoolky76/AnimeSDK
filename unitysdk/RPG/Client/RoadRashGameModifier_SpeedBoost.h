#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseLittleGameAbilityTaskConfig.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class FCOEMCEDLNL;
namespace RPG::Client { class RoadRashGameAbilityValueModifer; }
namespace RPG::Client { class RoadRashGameModifier_SpeedBoost; }
namespace System { class String; }

#define RPG_CLIENT_ROADRASHGAMEMODIFIER_SPEEDBOOST_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3057B0)
#define RPG_CLIENT_ROADRASHGAMEMODIFIER_SPEEDBOOST_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D3057C0)
#define RPG_CLIENT_ROADRASHGAMEMODIFIER_SPEEDBOOST_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D305770)

namespace RPG::Client
{
	inline static constexpr unsigned int RoadRashGameModifier_SpeedBoost_TypeDefinitionIndex = 10310;

	class RoadRashGameModifier_SpeedBoost : public ::RPG::GameCore::BaseLittleGameAbilityTaskConfig
	{
	public:
		::RPG::GameCore::FixPoint Duration; // 0x18
		::Il2CppArray<::RPG::Client::RoadRashGameAbilityValueModifer*>* MaxSpeedModifiers; // 0x20
		::System::Boolean SyncCurrentSpeedToMax; // 0x28
		::System::Boolean UseReleaseChargeSpeedEffect; // 0x29
		::System::Boolean FireReleaseChargeEffect; // 0x2A
		::System::Byte _padding0[0x5];
		::RPG::GameCore::FixPoint FOV; // 0x30
		::System::String* FOVBlendInCurveName; // 0x38
		::RPG::GameCore::FixPoint FOVBlendInTime; // 0x40
		::System::String* FOVBlendOutCurveName; // 0x48
		::RPG::GameCore::FixPoint FOVBlendOutTime; // 0x50
		::RPG::GameCore::FixPoint BlurRadius; // 0x58
		::RPG::GameCore::FixPoint BlurStart; // 0x60
		::RPG::GameCore::FixPoint BlurFeather; // 0x68
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASHGAMEMODIFIER_SPEEDBOOST_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::Client::RoadRashGameModifier_SpeedBoost* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::Client::RoadRashGameModifier_SpeedBoost*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASHGAMEMODIFIER_SPEEDBOOST_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::Client::RoadRashGameModifier_SpeedBoost* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::Client::RoadRashGameModifier_SpeedBoost*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASHGAMEMODIFIER_SPEEDBOOST_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
