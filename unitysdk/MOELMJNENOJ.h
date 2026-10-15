#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class PauseTimeRewindTargetInRange; }
namespace RPG::GameCore { class TaskContext; }

#define MOELMJNENOJ_CTOR_OFFSET UNITYSDK_OFFSET(0xBA298D0)
#define MOELMJNENOJ_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBA29900)

	class MOELMJNENOJ
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PauseTimeRewindTargetInRange* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PauseTimeRewindTargetInRange*))((::PBYTE)hIl2Cpp + MOELMJNENOJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOELMJNENOJ_ONTASKBEGIN_OFFSET))(this);
		}

	};
