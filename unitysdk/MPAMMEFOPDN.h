#pragma once
#include "unitysdk/unitysdk.h"
class CDMPEOENGEK;
namespace RPG::GameCore { class TaskContext; }

#define MPAMMEFOPDN_CTOR_OFFSET UNITYSDK_OFFSET(0xBA37D80)
#define MPAMMEFOPDN_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBA37DB0)

	class MPAMMEFOPDN
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::CDMPEOENGEK* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::CDMPEOENGEK*))((::PBYTE)hIl2Cpp + MPAMMEFOPDN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPAMMEFOPDN_ONTASKBEGIN_OFFSET))(this);
		}

	};
