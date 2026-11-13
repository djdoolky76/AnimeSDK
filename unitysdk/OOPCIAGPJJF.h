#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByHasInsertAbilityPending; }
namespace RPG::GameCore { class TaskContext; }

#define OOPCIAGPJJF_CTOR_OFFSET UNITYSDK_OFFSET(0x196B55D0)
#define OOPCIAGPJJF_EVALUATE_OFFSET UNITYSDK_OFFSET(0x196B5600)

inline static constexpr unsigned int OOPCIAGPJJF_TypeDefinitionIndex = 55780;

	class OOPCIAGPJJF
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByHasInsertAbilityPending* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByHasInsertAbilityPending*))((::PBYTE)hIl2Cpp + OOPCIAGPJJF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OOPCIAGPJJF_EVALUATE_OFFSET))(this);
		}

	};
