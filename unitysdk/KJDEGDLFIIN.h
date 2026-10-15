#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AdventureSkillTriggerAbility; }
namespace RPG::GameCore { class TaskContext; }

#define KJDEGDLFIIN_CTOR_OFFSET UNITYSDK_OFFSET(0xB43AFF0)
#define KJDEGDLFIIN_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB43B020)

inline static constexpr unsigned int KJDEGDLFIIN_TypeDefinitionIndex = 57914;

	class KJDEGDLFIIN
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdventureSkillTriggerAbility* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdventureSkillTriggerAbility*))((::PBYTE)hIl2Cpp + KJDEGDLFIIN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJDEGDLFIIN_ONTASKBEGIN_OFFSET))(this);
		}

	};
