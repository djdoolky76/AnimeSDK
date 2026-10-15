#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TimeRelayFlameSetSpecialFinalLevel; }

#define ONEFPBGKMEO_CTOR_OFFSET UNITYSDK_OFFSET(0xBF4FFF0)
#define ONEFPBGKMEO_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBF50020)

	class ONEFPBGKMEO
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TimeRelayFlameSetSpecialFinalLevel* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TimeRelayFlameSetSpecialFinalLevel*))((::PBYTE)hIl2Cpp + ONEFPBGKMEO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONEFPBGKMEO_ONTASKBEGIN_OFFSET))(this);
		}

	};
