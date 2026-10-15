#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByCompareStageID; }
namespace RPG::GameCore { class TaskContext; }

#define BCMCOLHLAHA_CTOR_OFFSET UNITYSDK_OFFSET(0x162D7420)
#define BCMCOLHLAHA_EVALUATE_OFFSET UNITYSDK_OFFSET(0x162D7450)

inline static constexpr unsigned int BCMCOLHLAHA_TypeDefinitionIndex = 54571;

	class BCMCOLHLAHA
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareStageID* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareStageID*))((::PBYTE)hIl2Cpp + BCMCOLHLAHA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BCMCOLHLAHA_EVALUATE_OFFSET))(this);
		}

	};
