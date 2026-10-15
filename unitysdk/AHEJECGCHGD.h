#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitPropPuzzleLoadingFinish; }

#define AHEJECGCHGD_CTOR_OFFSET UNITYSDK_OFFSET(0xEB7DEE0)
#define AHEJECGCHGD_DISPOSE_OFFSET UNITYSDK_OFFSET(0xEB7DFC0)
#define AHEJECGCHGD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xEB7E010)
#define AHEJECGCHGD_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xEB7E060)
#define AHEJECGCHGD_TICK_OFFSET UNITYSDK_OFFSET(0xEB7DEF0)

	class AHEJECGCHGD : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::WaitPropPuzzleLoadingFinish* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitPropPuzzleLoadingFinish* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitPropPuzzleLoadingFinish*))((::PBYTE)hIl2Cpp + AHEJECGCHGD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AHEJECGCHGD_TICK_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHEJECGCHGD_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHEJECGCHGD_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHEJECGCHGD_ONTASKRESET_OFFSET))(this);
		}

	};
