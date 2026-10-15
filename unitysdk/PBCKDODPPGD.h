#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class RebuildTimeRewindEntity; }
namespace RPG::GameCore { class TaskContext; }

#define PBCKDODPPGD_CTOR_OFFSET UNITYSDK_OFFSET(0xBFE2980)
#define PBCKDODPPGD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBFE29B0)

	class PBCKDODPPGD
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RebuildTimeRewindEntity* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RebuildTimeRewindEntity*))((::PBYTE)hIl2Cpp + PBCKDODPPGD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBCKDODPPGD_ONTASKBEGIN_OFFSET))(this);
		}

	};
