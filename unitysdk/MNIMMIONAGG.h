#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByCompareAbilityProperty; }
namespace RPG::GameCore { class TaskContext; }

#define MNIMMIONAGG_CTOR_OFFSET UNITYSDK_OFFSET(0xBA0CD20)
#define MNIMMIONAGG_EVALUATE_OFFSET UNITYSDK_OFFSET(0xBA0CD50)

inline static constexpr unsigned int MNIMMIONAGG_TypeDefinitionIndex = 54511;

	class MNIMMIONAGG
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareAbilityProperty* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareAbilityProperty*))((::PBYTE)hIl2Cpp + MNIMMIONAGG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MNIMMIONAGG_EVALUATE_OFFSET))(this);
		}

	};
