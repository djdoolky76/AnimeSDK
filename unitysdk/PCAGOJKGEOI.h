#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class NotifyOverrideFuncBtnParam; }
namespace RPG::GameCore { class SetFuncBtn; }
namespace RPG::GameCore { class TaskContext; }

#define PCAGOJKGEOI_CTOR_OFFSET UNITYSDK_OFFSET(0xBFF9A60)
#define PCAGOJKGEOI_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBFF9AD0)
#define PCAGOJKGEOI_ODOANILDLFC_OFFSET UNITYSDK_OFFSET(0xBFF9B80)
#define PCAGOJKGEOI_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBFF9B20)
#define PCAGOJKGEOI_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBFF9CA0)
#define PCAGOJKGEOI_TICK_OFFSET UNITYSDK_OFFSET(0xBFF9A70)

	class PCAGOJKGEOI : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::SetFuncBtn* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::NotifyOverrideFuncBtnParam* IBCIAIIMPFM; // 0x20
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetFuncBtn* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetFuncBtn*))((::PBYTE)hIl2Cpp + PCAGOJKGEOI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PCAGOJKGEOI_TICK_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCAGOJKGEOI_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCAGOJKGEOI_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCAGOJKGEOI_ONTASKRESET_OFFSET))(this);
		}

		::RPG::GameCore::NotifyOverrideFuncBtnParam* ODOANILDLFC()
		{
			return ((::RPG::GameCore::NotifyOverrideFuncBtnParam*(*)(::PVOID))((::PBYTE)hIl2Cpp + PCAGOJKGEOI_ODOANILDLFC_OFFSET))(this);
		}

	};
