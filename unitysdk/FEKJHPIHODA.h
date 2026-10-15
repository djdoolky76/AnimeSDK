#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByCompareFloorSavedValue; }
namespace RPG::GameCore { class TaskContext; }

#define FEKJHPIHODA_CTOR_OFFSET UNITYSDK_OFFSET(0x15724EB0)
#define FEKJHPIHODA_EVALUATE_OFFSET UNITYSDK_OFFSET(0x15724EE0)

inline static constexpr unsigned int FEKJHPIHODA_TypeDefinitionIndex = 52562;

	class FEKJHPIHODA
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareFloorSavedValue* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareFloorSavedValue*))((::PBYTE)hIl2Cpp + FEKJHPIHODA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FEKJHPIHODA_EVALUATE_OFFSET))(this);
		}

	};
