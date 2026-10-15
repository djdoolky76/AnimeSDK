#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class SetTimeRewindAttachPointVisible; }
namespace RPG::GameCore { class TaskContext; }

#define NJFMDCANEDG_CTOR_OFFSET UNITYSDK_OFFSET(0xBC0F8B0)
#define NJFMDCANEDG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBC0F8E0)

	class NJFMDCANEDG
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetTimeRewindAttachPointVisible* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetTimeRewindAttachPointVisible*))((::PBYTE)hIl2Cpp + NJFMDCANEDG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJFMDCANEDG_ONTASKBEGIN_OFFSET))(this);
		}

	};
