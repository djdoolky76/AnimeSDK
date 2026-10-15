#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerRogueEnterNextRoom; }

#define LGOBKEFEAEH_CTOR_OFFSET UNITYSDK_OFFSET(0xB69D370)
#define LGOBKEFEAEH_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB69D3A0)

	class LGOBKEFEAEH
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerRogueEnterNextRoom* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerRogueEnterNextRoom*))((::PBYTE)hIl2Cpp + LGOBKEFEAEH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGOBKEFEAEH_ONTASKBEGIN_OFFSET))(this);
		}

	};
