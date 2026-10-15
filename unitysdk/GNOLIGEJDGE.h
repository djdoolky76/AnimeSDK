#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByContainBehaviorFlag; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TurnBasedAbilityComponent; }

#define GNOLIGEJDGE_CTOR_OFFSET UNITYSDK_OFFSET(0x15B133A0)
#define GNOLIGEJDGE_EVALUATE_OFFSET UNITYSDK_OFFSET(0x15B133D0)
#define GNOLIGEJDGE_IEIOAKEMGCI_OFFSET UNITYSDK_OFFSET(0x15B13540)

inline static constexpr unsigned int GNOLIGEJDGE_TypeDefinitionIndex = 54590;

	class GNOLIGEJDGE
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByContainBehaviorFlag* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByContainBehaviorFlag*))((::PBYTE)hIl2Cpp + GNOLIGEJDGE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GNOLIGEJDGE_EVALUATE_OFFSET))(this);
		}

		::System::Boolean IEIOAKEMGCI(::RPG::GameCore::TurnBasedAbilityComponent* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TurnBasedAbilityComponent*))((::PBYTE)hIl2Cpp + GNOLIGEJDGE_IEIOAKEMGCI_OFFSET))(this, a1);
		}

	};
