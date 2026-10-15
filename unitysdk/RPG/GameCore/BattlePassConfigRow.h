#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BattlePassConfigRow; }

#define RPG_GAMECORE_BATTLEPASSCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D461910)
#define RPG_GAMECORE_BATTLEPASSCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D4613F0)

namespace RPG::GameCore
{
	class BattlePassConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* WeekOrder2; // 0x10
		::Il2CppArray<::System::UInt32>* EquipmentShow; // 0x18
		::Il2CppArray<::System::UInt32>* BillboardShow; // 0x20
		::Il2CppArray<::System::UInt32>* VersionQuestList; // 0x28
		::Il2CppArray<::System::UInt32>* WeekChainQuestList; // 0x30
		::Il2CppArray<::System::UInt32>* LevelUpShow; // 0x38
		::Il2CppArray<::System::UInt32>* WeekQuestList; // 0x40
		::Il2CppArray<::System::UInt32>* WeekOrder1; // 0x48
		::System::UInt32 ScheduleDataID; // 0x50
		::System::UInt32 RefreshBeginWeek; // 0x54
		::System::UInt32 Purchase68; // 0x58
		::System::UInt32 NextID; // 0x5C
		::System::UInt32 BattlePassWeekID; // 0x60
		::System::UInt32 GroupID; // 0x64
		::System::UInt32 Purchase128; // 0x68
		::System::UInt32 ID; // 0x6C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEPASSCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::BattlePassConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BattlePassConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEPASSCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
