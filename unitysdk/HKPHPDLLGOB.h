#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class BuildTimelineEntityState; }
namespace RPG::GameCore { class TaskContext; }

#define HKPHPDLLGOB_CTOR_OFFSET UNITYSDK_OFFSET(0x15D515B0)
#define HKPHPDLLGOB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15D515E0)

	class HKPHPDLLGOB
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::BuildTimelineEntityState* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::BuildTimelineEntityState*))((::PBYTE)hIl2Cpp + HKPHPDLLGOB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKPHPDLLGOB_ONTASKBEGIN_OFFSET))(this);
		}

	};
