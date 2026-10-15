#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TimeRewindOverrideMaxRewindTime; }

#define JDEMDIPMHAI_CTOR_OFFSET UNITYSDK_OFFSET(0x165C1960)
#define JDEMDIPMHAI_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x165C1990)

	class JDEMDIPMHAI
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TimeRewindOverrideMaxRewindTime* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TimeRewindOverrideMaxRewindTime*))((::PBYTE)hIl2Cpp + JDEMDIPMHAI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDEMDIPMHAI_ONTASKBEGIN_OFFSET))(this);
		}

	};
