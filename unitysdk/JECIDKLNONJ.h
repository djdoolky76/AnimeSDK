#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class LockVersusBar; }
namespace RPG::GameCore { class TaskContext; }

#define JECIDKLNONJ_CTOR_OFFSET UNITYSDK_OFFSET(0x16619720)
#define JECIDKLNONJ_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16619750)

	class JECIDKLNONJ
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::LockVersusBar* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::LockVersusBar*))((::PBYTE)hIl2Cpp + JECIDKLNONJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JECIDKLNONJ_ONTASKBEGIN_OFFSET))(this);
		}

	};
