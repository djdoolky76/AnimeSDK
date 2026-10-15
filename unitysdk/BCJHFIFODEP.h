#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ST_Side_RecordGuardPosition; }
namespace RPG::GameCore { class TaskContext; }

#define BCJHFIFODEP_CTOR_OFFSET UNITYSDK_OFFSET(0x15EAB7C0)
#define BCJHFIFODEP_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15EAB7F0)
#define BCJHFIFODEP_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15EAB840)

	class BCJHFIFODEP
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Side_RecordGuardPosition* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Side_RecordGuardPosition*))((::PBYTE)hIl2Cpp + BCJHFIFODEP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCJHFIFODEP_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCJHFIFODEP_ONTASKRESET_OFFSET))(this);
		}

	};
