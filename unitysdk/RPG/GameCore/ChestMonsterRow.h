#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChestMonsterType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChestMonsterRow; }

#define RPG_GAMECORE_CHESTMONSTERROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5959D0)
#define RPG_GAMECORE_CHESTMONSTERROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D595740)

namespace RPG::GameCore
{
	class ChestMonsterRow : public ::System::Object
	{
	public:
		::RPG::GameCore::ChestMonsterType MonsterType; // 0x10
		::System::UInt32 EventID; // 0x14
		::System::UInt32 ID; // 0x18
		::System::UInt32 FloorID; // 0x1C
		::System::UInt32 ConfigID; // 0x20
		::System::UInt32 GroupID; // 0x24
		::System::UInt32 MainMissionID; // 0x28
		::System::UInt32 PlaneID; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHESTMONSTERROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChestMonsterRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChestMonsterRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHESTMONSTERROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
