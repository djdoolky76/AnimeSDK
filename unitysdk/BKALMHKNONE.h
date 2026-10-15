#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class ShowMazeUI; }
namespace RPG::GameCore { class TaskContext; }

#define BKALMHKNONE_CTOR_OFFSET UNITYSDK_OFFSET(0xB7AC480)
#define BKALMHKNONE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB7AC490)
#define BKALMHKNONE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB7AC4D0)
#define BKALMHKNONE_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB7AC770)
#define BKALMHKNONE_TICK_OFFSET UNITYSDK_OFFSET(0xB7AC7C0)

	class BKALMHKNONE : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::ShowMazeUI* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowMazeUI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowMazeUI*))((::PBYTE)hIl2Cpp + BKALMHKNONE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKALMHKNONE_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKALMHKNONE_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKALMHKNONE_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BKALMHKNONE_TICK_OFFSET))(this, a1);
		}

	};
