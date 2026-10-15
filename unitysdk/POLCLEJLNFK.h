#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AdventureByNpcMazeSkillCooldown; }
namespace RPG::GameCore { class TaskContext; }

#define POLCLEJLNFK_CTOR_OFFSET UNITYSDK_OFFSET(0xC370720)
#define POLCLEJLNFK_EVALUATE_OFFSET UNITYSDK_OFFSET(0xC370750)

inline static constexpr unsigned int POLCLEJLNFK_TypeDefinitionIndex = 53125;

	class POLCLEJLNFK
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdventureByNpcMazeSkillCooldown* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdventureByNpcMazeSkillCooldown*))((::PBYTE)hIl2Cpp + POLCLEJLNFK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + POLCLEJLNFK_EVALUATE_OFFSET))(this);
		}

	};
