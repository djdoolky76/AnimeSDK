#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class ToggleTotalDamageFinishNotify; }

#define EIOOKHOEEDK_CTOR_OFFSET UNITYSDK_OFFSET(0x154D54A0)
#define EIOOKHOEEDK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x154D54D0)

	class EIOOKHOEEDK
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ToggleTotalDamageFinishNotify* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ToggleTotalDamageFinishNotify*))((::PBYTE)hIl2Cpp + EIOOKHOEEDK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIOOKHOEEDK_ONTASKBEGIN_OFFSET))(this);
		}

	};
