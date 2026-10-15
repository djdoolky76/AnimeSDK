#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class SetMonsterPhase; }
namespace RPG::GameCore { class TaskContext; }

#define HGGFAILKOAH_CTOR_OFFSET UNITYSDK_OFFSET(0x15C9A110)
#define HGGFAILKOAH_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15C9A140)

	class HGGFAILKOAH
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetMonsterPhase* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetMonsterPhase*))((::PBYTE)hIl2Cpp + HGGFAILKOAH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGGFAILKOAH_ONTASKBEGIN_OFFSET))(this);
		}

	};
