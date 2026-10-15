#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ChangeMonsterHeadIcon; }
namespace RPG::GameCore { class TaskContext; }

#define OJBJFOKKEAK_CTOR_OFFSET UNITYSDK_OFFSET(0xBEAA070)
#define OJBJFOKKEAK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBEAA0A0)

	class OJBJFOKKEAK
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ChangeMonsterHeadIcon* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ChangeMonsterHeadIcon*))((::PBYTE)hIl2Cpp + OJBJFOKKEAK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJBJFOKKEAK_ONTASKBEGIN_OFFSET))(this);
		}

	};
