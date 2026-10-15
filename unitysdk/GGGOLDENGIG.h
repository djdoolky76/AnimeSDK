#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AdvLockSpecialTarget; }
namespace RPG::GameCore { class TaskContext; }

#define GGGOLDENGIG_CTOR_OFFSET UNITYSDK_OFFSET(0x15A04520)
#define GGGOLDENGIG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15A04550)

	class GGGOLDENGIG
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvLockSpecialTarget* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvLockSpecialTarget*))((::PBYTE)hIl2Cpp + GGGOLDENGIG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGGOLDENGIG_ONTASKBEGIN_OFFSET))(this);
		}

	};
