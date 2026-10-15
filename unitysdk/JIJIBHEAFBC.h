#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByCheckModifierCallBackName; }
namespace RPG::GameCore { class TaskContext; }

#define JIJIBHEAFBC_CTOR_OFFSET UNITYSDK_OFFSET(0xB1F5A80)
#define JIJIBHEAFBC_EVALUATE_OFFSET UNITYSDK_OFFSET(0xB1F5AB0)

inline static constexpr unsigned int JIJIBHEAFBC_TypeDefinitionIndex = 54506;

	class JIJIBHEAFBC
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCheckModifierCallBackName* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCheckModifierCallBackName*))((::PBYTE)hIl2Cpp + JIJIBHEAFBC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JIJIBHEAFBC_EVALUATE_OFFSET))(this);
		}

	};
