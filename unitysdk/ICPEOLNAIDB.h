#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ShowChallegeStoryWavePanel; }
namespace RPG::GameCore { class TaskContext; }

#define ICPEOLNAIDB_CTOR_OFFSET UNITYSDK_OFFSET(0x15E62E00)
#define ICPEOLNAIDB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15E62E30)

	class ICPEOLNAIDB
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowChallegeStoryWavePanel* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowChallegeStoryWavePanel*))((::PBYTE)hIl2Cpp + ICPEOLNAIDB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICPEOLNAIDB_ONTASKBEGIN_OFFSET))(this);
		}

	};
