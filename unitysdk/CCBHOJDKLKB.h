#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AdvEntitySyncFreeStyleWithSound; }
namespace RPG::GameCore { class TaskContext; }

#define CCBHOJDKLKB_CTOR_OFFSET UNITYSDK_OFFSET(0xC7367B0)
#define CCBHOJDKLKB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC7367E0)

	class CCBHOJDKLKB
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvEntitySyncFreeStyleWithSound* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvEntitySyncFreeStyleWithSound*))((::PBYTE)hIl2Cpp + CCBHOJDKLKB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCBHOJDKLKB_ONTASKBEGIN_OFFSET))(this);
		}

	};
