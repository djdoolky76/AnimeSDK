#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AdventureIsTriggerBattleByNpcMonster; }
namespace RPG::GameCore { class TaskContext; }

#define PLCIIFBLACL_CTOR_OFFSET UNITYSDK_OFFSET(0xC2E5310)
#define PLCIIFBLACL_EVALUATE_OFFSET UNITYSDK_OFFSET(0xC2E5340)

inline static constexpr unsigned int PLCIIFBLACL_TypeDefinitionIndex = 57896;

	class PLCIIFBLACL
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdventureIsTriggerBattleByNpcMonster* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdventureIsTriggerBattleByNpcMonster*))((::PBYTE)hIl2Cpp + PLCIIFBLACL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PLCIIFBLACL_EVALUATE_OFFSET))(this);
		}

	};
