#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CycleQuestRow; }

#define RPG_GAMECORE_CYCLEQUESTROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5BF240)
#define RPG_GAMECORE_CYCLEQUESTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D5BE420)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CycleQuestRow_TypeDefinitionIndex = 14574;

	class CycleQuestRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* WeekDayList; // 0x10
		::Il2CppArray<::System::UInt32>* QuestList; // 0x18
		::System::UInt32 FinishedTimes; // 0x20
		::System::UInt32 ScheduleDataID; // 0x24
		::System::UInt32 MinLevel; // 0x28
		::System::UInt32 Cycledays; // 0x2C
		::System::UInt32 ActivityModuleID; // 0x30
		::System::UInt32 MaxLevel; // 0x34
		::System::Boolean IsNonPeriodic; // 0x38
		::System::Byte _padding0[0x3];
		::System::UInt32 CycleID; // 0x3C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CYCLEQUESTROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::CycleQuestRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CycleQuestRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CYCLEQUESTROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
