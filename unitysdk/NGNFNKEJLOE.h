#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class FinishFirstPerformance; }
namespace RPG::GameCore { class TaskContext; }

#define NGNFNKEJLOE_CTOR_OFFSET UNITYSDK_OFFSET(0xBBB1000)
#define NGNFNKEJLOE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBBB1010)
#define NGNFNKEJLOE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBBB1050)
#define NGNFNKEJLOE_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBBB1100)
#define NGNFNKEJLOE_TICK_OFFSET UNITYSDK_OFFSET(0xBBB1150)

	class NGNFNKEJLOE : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::FinishFirstPerformance* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::FinishFirstPerformance* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::FinishFirstPerformance*))((::PBYTE)hIl2Cpp + NGNFNKEJLOE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGNFNKEJLOE_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGNFNKEJLOE_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGNFNKEJLOE_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NGNFNKEJLOE_TICK_OFFSET))(this, a1);
		}

	};
