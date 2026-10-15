#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class IdleLiveTeamSlotUpgradeCostRow; }

#define RPG_GAMECORE_IDLELIVETEAMSLOTUPGRADECOSTROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D781430)
#define RPG_GAMECORE_IDLELIVETEAMSLOTUPGRADECOSTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D7812B0)

namespace RPG::GameCore
{
	class IdleLiveTeamSlotUpgradeCostRow : public ::System::Object
	{
	public:
		::System::UInt32 Cost; // 0x10
		::System::UInt32 Level; // 0x14
		::RPG::GameCore::FixPoint LevelAddPower; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVETEAMSLOTUPGRADECOSTROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::IdleLiveTeamSlotUpgradeCostRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::IdleLiveTeamSlotUpgradeCostRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVETEAMSLOTUPGRADECOSTROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
