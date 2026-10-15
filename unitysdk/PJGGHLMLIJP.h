#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerAfterImageEffect; }

#define PJGGHLMLIJP_CTOR_OFFSET UNITYSDK_OFFSET(0xC285FD0)
#define PJGGHLMLIJP_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC286000)

	class PJGGHLMLIJP
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerAfterImageEffect* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerAfterImageEffect*))((::PBYTE)hIl2Cpp + PJGGHLMLIJP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJGGHLMLIJP_ONTASKBEGIN_OFFSET))(this);
		}

	};
