#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByHaveSkillPointEntity; }
namespace RPG::GameCore { class TaskContext; }

#define JJOKIFHKGIJ_CTOR_OFFSET UNITYSDK_OFFSET(0xB209C80)
#define JJOKIFHKGIJ_EVALUATE_OFFSET UNITYSDK_OFFSET(0xB209CB0)

inline static constexpr unsigned int JJOKIFHKGIJ_TypeDefinitionIndex = 54629;

	class JJOKIFHKGIJ
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByHaveSkillPointEntity* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByHaveSkillPointEntity*))((::PBYTE)hIl2Cpp + JJOKIFHKGIJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JJOKIFHKGIJ_EVALUATE_OFFSET))(this);
		}

	};
