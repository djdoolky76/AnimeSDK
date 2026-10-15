#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class SetTimeRewindEntityActive; }
namespace RPG::GameCore { class TaskContext; }

#define BCMENJJGJND_CTOR_OFFSET UNITYSDK_OFFSET(0x162E3F30)
#define BCMENJJGJND_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x162E3F60)

	class BCMENJJGJND
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetTimeRewindEntityActive* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetTimeRewindEntityActive*))((::PBYTE)hIl2Cpp + BCMENJJGJND_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCMENJJGJND_ONTASKBEGIN_OFFSET))(this);
		}

	};
