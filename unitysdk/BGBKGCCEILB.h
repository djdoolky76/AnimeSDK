#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class AdventureMonsterTriggerMove; }
namespace RPG::GameCore { class TaskContext; }

#define BGBKGCCEILB_CTOR_OFFSET UNITYSDK_OFFSET(0xB176650)
#define BGBKGCCEILB_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB176660)
#define BGBKGCCEILB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB1766A0)
#define BGBKGCCEILB_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB176A20)
#define BGBKGCCEILB_TICK_OFFSET UNITYSDK_OFFSET(0xB176B10)

	class BGBKGCCEILB : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::AdventureMonsterTriggerMove* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdventureMonsterTriggerMove* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdventureMonsterTriggerMove*))((::PBYTE)hIl2Cpp + BGBKGCCEILB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGBKGCCEILB_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGBKGCCEILB_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGBKGCCEILB_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BGBKGCCEILB_TICK_OFFSET))(this, a1);
		}

	};
