#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByCheckMechanismBarPhase; }
namespace RPG::GameCore { class TaskContext; }

#define MHLBCEDGIML_CTOR_OFFSET UNITYSDK_OFFSET(0xB9454E0)
#define MHLBCEDGIML_EVALUATE_OFFSET UNITYSDK_OFFSET(0xB945510)

inline static constexpr unsigned int MHLBCEDGIML_TypeDefinitionIndex = 54500;

	class MHLBCEDGIML
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCheckMechanismBarPhase* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCheckMechanismBarPhase*))((::PBYTE)hIl2Cpp + MHLBCEDGIML_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MHLBCEDGIML_EVALUATE_OFFSET))(this);
		}

	};
