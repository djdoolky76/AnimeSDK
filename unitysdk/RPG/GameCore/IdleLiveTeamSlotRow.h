#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/ILBattleCharacterLocation.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class IdleLiveTeamSlotRow; }

#define RPG_GAMECORE_IDLELIVETEAMSLOTROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7810B0)
#define RPG_GAMECORE_IDLELIVETEAMSLOTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D780DC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int IdleLiveTeamSlotRow_TypeDefinitionIndex = 11687;

	class IdleLiveTeamSlotRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID UnlockHint; // 0x10
		::RPG::GameCore::ILBattleCharacterLocation Type; // 0x20
		::System::Byte _padding0[0x4];
		::RPG::GameCore::FixPoint SlotPowerFactor; // 0x28
		::System::UInt32 UnlockID; // 0x30
		::System::UInt32 Slot; // 0x34
		::RPG::Client::TextID Name; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVETEAMSLOTROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::IdleLiveTeamSlotRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::IdleLiveTeamSlotRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVETEAMSLOTROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
