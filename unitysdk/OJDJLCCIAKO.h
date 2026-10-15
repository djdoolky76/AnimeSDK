#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByCheckLastBattleSkillDrop; }
namespace RPG::GameCore { class TaskContext; }

#define OJDJLCCIAKO_CTOR_OFFSET UNITYSDK_OFFSET(0xBEA62E0)
#define OJDJLCCIAKO_EVALUATE_OFFSET UNITYSDK_OFFSET(0xBEA6310)

inline static constexpr unsigned int OJDJLCCIAKO_TypeDefinitionIndex = 53130;

	class OJDJLCCIAKO
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCheckLastBattleSkillDrop* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCheckLastBattleSkillDrop*))((::PBYTE)hIl2Cpp + OJDJLCCIAKO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OJDJLCCIAKO_EVALUATE_OFFSET))(this);
		}

	};
