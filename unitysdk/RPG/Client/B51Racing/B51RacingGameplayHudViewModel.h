#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYHUDVIEWMODEL_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA54190)

namespace RPG::Client::B51Racing
{
	inline static constexpr unsigned int B51RacingGameplayHudViewModel_TypeDefinitionIndex = 84819;

	class B51RacingGameplayHudViewModel : public ::System::Object
	{
	public:
		::System::Single BestLapTime; // 0x10
		::System::Single CurrentTime; // 0x14
		::System::Int32 TotalLap; // 0x18
		::System::Int32 PlayerRank; // 0x1C
		::System::Boolean HasBestLapTime; // 0x20
		::System::Boolean IsAttackOnCooldown; // 0x21
		::System::Byte _padding0[0x2];
		::System::Single Speed; // 0x24
		::System::Single MaxSpeed; // 0x28
		::System::Single AttackEnergyPercent; // 0x2C
		::System::Single AttackCooldownRemainSeconds; // 0x30
		::System::Int32 CurrentLap; // 0x34
		::System::Int32 BulletUsableCount; // 0x38
		::System::Single AttackCooldownProgress; // 0x3C
		::System::Int32 BulletMaxUsableCount; // 0x40
		::System::Single BoostCurrentChargeValue; // 0x44
		::System::Single UltimateChargePercent; // 0x48
		::System::UInt32 BoostChargeLevel; // 0x4C
		::System::Single UltimateDisplayPercent; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYHUDVIEWMODEL_CTOR_OFFSET))(this);
		}

	};
}
