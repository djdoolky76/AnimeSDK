#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class AdventureMonsterTriggerMove; }
namespace RPG::GameCore { class TaskContext; }

#define BGBKGCCEILB_CTOR_OFFSET UNITYSDK_OFFSET(0xB174C50)
#define BGBKGCCEILB_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB174C60)
#define BGBKGCCEILB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB174CA0)
#define BGBKGCCEILB_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB175020)
#define BGBKGCCEILB_TICK_OFFSET UNITYSDK_OFFSET(0xB175110)

inline static constexpr unsigned int BGBKGCCEILB_TypeDefinitionIndex = 57906;

	class BGBKGCCEILB : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::AdventureMonsterTriggerMove* OFKGLJOAMLD; // 0x20
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
