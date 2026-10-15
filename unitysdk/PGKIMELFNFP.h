#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerUINotifyWithTarget; }

#define PGKIMELFNFP_CTOR_OFFSET UNITYSDK_OFFSET(0xC223EC0)
#define PGKIMELFNFP_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC223EF0)

	class PGKIMELFNFP
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerUINotifyWithTarget* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerUINotifyWithTarget*))((::PBYTE)hIl2Cpp + PGKIMELFNFP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGKIMELFNFP_ONTASKBEGIN_OFFSET))(this);
		}

	};
