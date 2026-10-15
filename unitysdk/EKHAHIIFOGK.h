#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AdventureByPlayerCurrentSkillType; }
namespace RPG::GameCore { class TaskContext; }

#define EKHAHIIFOGK_CTOR_OFFSET UNITYSDK_OFFSET(0x154F9D60)
#define EKHAHIIFOGK_EVALUATE_OFFSET UNITYSDK_OFFSET(0x154F9D90)

inline static constexpr unsigned int EKHAHIIFOGK_TypeDefinitionIndex = 54474;

	class EKHAHIIFOGK
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdventureByPlayerCurrentSkillType* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdventureByPlayerCurrentSkillType*))((::PBYTE)hIl2Cpp + EKHAHIIFOGK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EKHAHIIFOGK_EVALUATE_OFFSET))(this);
		}

	};
