#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class PlayMazeButtonEffect; }
namespace RPG::GameCore { class TaskContext; }

#define LPALDMPADBF_CTOR_OFFSET UNITYSDK_OFFSET(0xB815E70)
#define LPALDMPADBF_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB815E80)
#define LPALDMPADBF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB815EC0)
#define LPALDMPADBF_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB815F20)
#define LPALDMPADBF_TICK_OFFSET UNITYSDK_OFFSET(0xB815F70)

	class LPALDMPADBF : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::PlayMazeButtonEffect* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PlayMazeButtonEffect* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PlayMazeButtonEffect*))((::PBYTE)hIl2Cpp + LPALDMPADBF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPALDMPADBF_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPALDMPADBF_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPALDMPADBF_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LPALDMPADBF_TICK_OFFSET))(this, a1);
		}

	};
