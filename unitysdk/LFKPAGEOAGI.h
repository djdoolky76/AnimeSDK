#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class SetDynamicStageBattleEvent; }
namespace RPG::GameCore { class TaskContext; }

#define LFKPAGEOAGI_CTOR_OFFSET UNITYSDK_OFFSET(0xB6822B0)
#define LFKPAGEOAGI_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB6822C0)
#define LFKPAGEOAGI_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB682300)
#define LFKPAGEOAGI_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB682920)
#define LFKPAGEOAGI_TICK_OFFSET UNITYSDK_OFFSET(0xB682970)

	class LFKPAGEOAGI : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::SetDynamicStageBattleEvent* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetDynamicStageBattleEvent* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetDynamicStageBattleEvent*))((::PBYTE)hIl2Cpp + LFKPAGEOAGI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFKPAGEOAGI_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFKPAGEOAGI_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFKPAGEOAGI_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LFKPAGEOAGI_TICK_OFFSET))(this, a1);
		}

	};
