#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AdventureByMazeSkillUseCheck; }
namespace RPG::GameCore { class TaskContext; }

#define KEBABKAOKNF_CTOR_OFFSET UNITYSDK_OFFSET(0xB368FB0)
#define KEBABKAOKNF_EVALUATE_OFFSET UNITYSDK_OFFSET(0xB368FE0)

inline static constexpr unsigned int KEBABKAOKNF_TypeDefinitionIndex = 54471;

	class KEBABKAOKNF
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdventureByMazeSkillUseCheck* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdventureByMazeSkillUseCheck*))((::PBYTE)hIl2Cpp + KEBABKAOKNF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KEBABKAOKNF_EVALUATE_OFFSET))(this);
		}

	};
