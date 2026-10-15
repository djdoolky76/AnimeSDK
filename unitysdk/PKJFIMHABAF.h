#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class BindTimeRewindParent; }
namespace RPG::GameCore { class TaskContext; }

#define PKJFIMHABAF_CTOR_OFFSET UNITYSDK_OFFSET(0xC2C16F0)
#define PKJFIMHABAF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC2C1720)

	class PKJFIMHABAF
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::BindTimeRewindParent* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::BindTimeRewindParent*))((::PBYTE)hIl2Cpp + PKJFIMHABAF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKJFIMHABAF_ONTASKBEGIN_OFFSET))(this);
		}

	};
