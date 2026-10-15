#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class AddFinishMissionData_ResultValue; }
namespace RPG::GameCore { class TaskContext; }

#define DBBCADPPHKD_CTOR_OFFSET UNITYSDK_OFFSET(0xDFD5D80)
#define DBBCADPPHKD_DISPOSE_OFFSET UNITYSDK_OFFSET(0xDFD5D90)
#define DBBCADPPHKD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xDFD5DD0)
#define DBBCADPPHKD_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xDFD5E80)
#define DBBCADPPHKD_TICK_OFFSET UNITYSDK_OFFSET(0xDFD5ED0)

	class DBBCADPPHKD : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::AddFinishMissionData_ResultValue* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AddFinishMissionData_ResultValue* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AddFinishMissionData_ResultValue*))((::PBYTE)hIl2Cpp + DBBCADPPHKD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBBCADPPHKD_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBBCADPPHKD_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBBCADPPHKD_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DBBCADPPHKD_TICK_OFFSET))(this, a1);
		}

	};
