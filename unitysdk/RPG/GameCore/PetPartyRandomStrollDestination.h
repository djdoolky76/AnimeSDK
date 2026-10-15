#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PetPartyNavigateDestination.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PetPartyRandomStrollDestination; }

#define RPG_GAMECORE_PETPARTYRANDOMSTROLLDESTINATION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D90A670)
#define RPG_GAMECORE_PETPARTYRANDOMSTROLLDESTINATION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D90A6A0)
#define RPG_GAMECORE_PETPARTYRANDOMSTROLLDESTINATION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D90AD30)

namespace RPG::GameCore
{
	class PetPartyRandomStrollDestination : public ::RPG::GameCore::PetPartyNavigateDestination
	{
	public:
		::System::Single MinDistance; // 0x10
		::System::Single MaxDistance; // 0x14
		::System::Single MaxDistanceToPlayer; // 0x18
		::System::Single MaxDistanceToFormationSlot; // 0x1C
		::System::Boolean StayAtFinalPositionOnFinish; // 0x20
		::System::Byte _padding0[0x3];
		::System::Single MinTotalDurationSeconds; // 0x24
		::System::Single MaxTotalDurationSeconds; // 0x28
		::System::Single MinSingleStrollDurationSeconds; // 0x2C
		::System::Single MaxSingleStrollDurationSeconds; // 0x30
		::System::Single MinPauseDurationSeconds; // 0x34
		::System::Single MaxPauseDurationSeconds; // 0x38
		::System::Single MoveSpeedRatio; // 0x3C
		::System::Single RetryIntervalSeconds; // 0x40
		::System::Int32 MaxRetryCount; // 0x44
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PETPARTYRANDOMSTROLLDESTINATION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PetPartyRandomStrollDestination* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PetPartyRandomStrollDestination*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PETPARTYRANDOMSTROLLDESTINATION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::PetPartyRandomStrollDestination* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PetPartyRandomStrollDestination*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PETPARTYRANDOMSTROLLDESTINATION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
