#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TutorialSetMonopolyToastPauseState; }

#define NAKPOEJOAAD_CTOR_OFFSET UNITYSDK_OFFSET(0xBAA3740)
#define NAKPOEJOAAD_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBAA3820)
#define NAKPOEJOAAD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBAA3750)
#define NAKPOEJOAAD_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBAA37D0)
#define NAKPOEJOAAD_TICK_OFFSET UNITYSDK_OFFSET(0xBAA3890)

	class NAKPOEJOAAD : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::TutorialSetMonopolyToastPauseState* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TutorialSetMonopolyToastPauseState* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TutorialSetMonopolyToastPauseState*))((::PBYTE)hIl2Cpp + NAKPOEJOAAD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAKPOEJOAAD_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAKPOEJOAAD_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAKPOEJOAAD_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NAKPOEJOAAD_TICK_OFFSET))(this, a1);
		}

	};
