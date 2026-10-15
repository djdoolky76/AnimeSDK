#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByCompareFiveDimContainerDynamicFloat; }
namespace RPG::GameCore { class TaskContext; }

#define LKNLDILMLHM_CTOR_OFFSET UNITYSDK_OFFSET(0xB75A2E0)
#define LKNLDILMLHM_EVALUATE_OFFSET UNITYSDK_OFFSET(0xB75A310)

inline static constexpr unsigned int LKNLDILMLHM_TypeDefinitionIndex = 52821;

	class LKNLDILMLHM
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareFiveDimContainerDynamicFloat* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareFiveDimContainerDynamicFloat*))((::PBYTE)hIl2Cpp + LKNLDILMLHM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LKNLDILMLHM_EVALUATE_OFFSET))(this);
		}

	};
