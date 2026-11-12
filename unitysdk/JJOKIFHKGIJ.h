#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByHaveSkillPointEntity; }
namespace RPG::GameCore { class TaskContext; }

#define JJOKIFHKGIJ_CTOR_OFFSET UNITYSDK_OFFSET(0xBA2D2C0)
#define JJOKIFHKGIJ_EVALUATE_OFFSET UNITYSDK_OFFSET(0xBA2D2F0)

inline static constexpr unsigned int JJOKIFHKGIJ_TypeDefinitionIndex = 55795;

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
