#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MainMissionScheduleRow; }

#define RPG_GAMECORE_MAINMISSIONSCHEDULEROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7CED00)
#define RPG_GAMECORE_MAINMISSIONSCHEDULEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D7CE670)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MainMissionScheduleRow_TypeDefinitionIndex = 14156;

	class MainMissionScheduleRow : public ::System::Object
	{
	public:
		::System::Boolean HideRemainTime; // 0x10
		::System::Boolean IsNotDelete; // 0x11
		::System::Byte _padding0[0x2];
		::System::UInt32 ActivityModuleID; // 0x14
		::System::UInt32 MainMissionID; // 0x18
		::System::UInt32 ScheduleDataID; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAINMISSIONSCHEDULEROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::MainMissionScheduleRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MainMissionScheduleRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAINMISSIONSCHEDULEROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
