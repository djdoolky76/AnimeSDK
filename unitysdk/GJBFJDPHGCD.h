#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByCompareModifierCustomEvent; }
namespace RPG::GameCore { class TaskContext; }

#define GJBFJDPHGCD_CTOR_OFFSET UNITYSDK_OFFSET(0x15A4DB30)
#define GJBFJDPHGCD_EVALUATE_OFFSET UNITYSDK_OFFSET(0x15A4DB60)

inline static constexpr unsigned int GJBFJDPHGCD_TypeDefinitionIndex = 54886;

	class GJBFJDPHGCD
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareModifierCustomEvent* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareModifierCustomEvent*))((::PBYTE)hIl2Cpp + GJBFJDPHGCD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GJBFJDPHGCD_EVALUATE_OFFSET))(this);
		}

	};
