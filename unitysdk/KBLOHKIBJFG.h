#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class SetUseTemporaryLockTarget; }
namespace RPG::GameCore { class TaskContext; }

#define KBLOHKIBJFG_CTOR_OFFSET UNITYSDK_OFFSET(0xB31EA10)
#define KBLOHKIBJFG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB31EA40)

	class KBLOHKIBJFG
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetUseTemporaryLockTarget* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetUseTemporaryLockTarget*))((::PBYTE)hIl2Cpp + KBLOHKIBJFG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBLOHKIBJFG_ONTASKBEGIN_OFFSET))(this);
		}

	};
