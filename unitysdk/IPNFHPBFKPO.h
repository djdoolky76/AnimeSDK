#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByHasActiveUnitOnScepter; }
namespace RPG::GameCore { class TaskContext; }

#define IPNFHPBFKPO_CTOR_OFFSET UNITYSDK_OFFSET(0x165175A0)
#define IPNFHPBFKPO_EVALUATE_OFFSET UNITYSDK_OFFSET(0x165175D0)

inline static constexpr unsigned int IPNFHPBFKPO_TypeDefinitionIndex = 54899;

	class IPNFHPBFKPO
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByHasActiveUnitOnScepter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByHasActiveUnitOnScepter*))((::PBYTE)hIl2Cpp + IPNFHPBFKPO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IPNFHPBFKPO_EVALUATE_OFFSET))(this);
		}

	};
