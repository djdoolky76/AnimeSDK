#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class SetClientGroupProperty; }
namespace RPG::GameCore { class TaskContext; }

#define KPJAKNLNHJB_CTOR_OFFSET UNITYSDK_OFFSET(0xB5C05B0)
#define KPJAKNLNHJB_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB5C05C0)
#define KPJAKNLNHJB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB5C06D0)
#define KPJAKNLNHJB_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB5C0620)
#define KPJAKNLNHJB_TICK_OFFSET UNITYSDK_OFFSET(0xB5C0670)

	class KPJAKNLNHJB : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::SetClientGroupProperty* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetClientGroupProperty* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetClientGroupProperty*))((::PBYTE)hIl2Cpp + KPJAKNLNHJB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPJAKNLNHJB_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KPJAKNLNHJB_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPJAKNLNHJB_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPJAKNLNHJB_ONTASKRESET_OFFSET))(this);
		}

	};
