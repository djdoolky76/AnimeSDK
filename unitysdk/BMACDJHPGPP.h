#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerPamActionPhaseSettle; }

#define BMACDJHPGPP_CTOR_OFFSET UNITYSDK_OFFSET(0xBA85660)
#define BMACDJHPGPP_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBA85670)
#define BMACDJHPGPP_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBA856B0)
#define BMACDJHPGPP_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBA85750)
#define BMACDJHPGPP_TICK_OFFSET UNITYSDK_OFFSET(0xBA857A0)

	class BMACDJHPGPP : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::TriggerPamActionPhaseSettle* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerPamActionPhaseSettle* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerPamActionPhaseSettle*))((::PBYTE)hIl2Cpp + BMACDJHPGPP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMACDJHPGPP_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMACDJHPGPP_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMACDJHPGPP_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BMACDJHPGPP_TICK_OFFSET))(this, a1);
		}

	};
