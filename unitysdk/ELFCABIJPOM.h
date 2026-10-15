#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerCommonActiveSkillAbility; }

#define ELFCABIJPOM_CTOR_OFFSET UNITYSDK_OFFSET(0x1551EED0)
#define ELFCABIJPOM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1551EF00)

	class ELFCABIJPOM
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerCommonActiveSkillAbility* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerCommonActiveSkillAbility*))((::PBYTE)hIl2Cpp + ELFCABIJPOM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELFCABIJPOM_ONTASKBEGIN_OFFSET))(this);
		}

	};
