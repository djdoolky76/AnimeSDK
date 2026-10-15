#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AdventureSetAttackTargetWithoutBattle; }
namespace RPG::GameCore { class TaskContext; }

#define ALCKFOIJACB_CTOR_OFFSET UNITYSDK_OFFSET(0x15562700)
#define ALCKFOIJACB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15562730)

	class ALCKFOIJACB
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdventureSetAttackTargetWithoutBattle* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdventureSetAttackTargetWithoutBattle*))((::PBYTE)hIl2Cpp + ALCKFOIJACB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALCKFOIJACB_ONTASKBEGIN_OFFSET))(this);
		}

	};
