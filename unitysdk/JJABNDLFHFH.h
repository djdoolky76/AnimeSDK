#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class EndPerformance; }
namespace RPG::GameCore { class TaskContext; }

#define JJABNDLFHFH_CTOR_OFFSET UNITYSDK_OFFSET(0xB200030)
#define JJABNDLFHFH_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB200040)
#define JJABNDLFHFH_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0xB200080)
#define JJABNDLFHFH_ONSKIP_OFFSET UNITYSDK_OFFSET(0xB200220)
#define JJABNDLFHFH_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB200090)
#define JJABNDLFHFH_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB200170)
#define JJABNDLFHFH_TICK_OFFSET UNITYSDK_OFFSET(0xB2001C0)

	class JJABNDLFHFH : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::EndPerformance* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::EndPerformance*))((::PBYTE)hIl2Cpp + JJABNDLFHFH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJABNDLFHFH_DISPOSE_OFFSET))(this);
		}

		::System::Boolean get_ForceSkip()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JJABNDLFHFH_GET_FORCESKIP_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJABNDLFHFH_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJABNDLFHFH_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JJABNDLFHFH_TICK_OFFSET))(this, a1);
		}

		::System::Void OnSkip()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJABNDLFHFH_ONSKIP_OFFSET))(this);
		}

	};
