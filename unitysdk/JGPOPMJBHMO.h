#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AdventureByIsBattleSkillType; }
namespace RPG::GameCore { class TaskContext; }

#define JGPOPMJBHMO_CTOR_OFFSET UNITYSDK_OFFSET(0xB1A19F0)
#define JGPOPMJBHMO_EVALUATE_OFFSET UNITYSDK_OFFSET(0xB1A1A20)

inline static constexpr unsigned int JGPOPMJBHMO_TypeDefinitionIndex = 54464;

	class JGPOPMJBHMO
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdventureByIsBattleSkillType* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdventureByIsBattleSkillType*))((::PBYTE)hIl2Cpp + JGPOPMJBHMO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JGPOPMJBHMO_EVALUATE_OFFSET))(this);
		}

	};
