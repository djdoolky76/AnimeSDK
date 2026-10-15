#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByCompareChangeValue; }
namespace RPG::GameCore { class TaskContext; }

#define ILHPLJLMMHO_CTOR_OFFSET UNITYSDK_OFFSET(0x164A9900)
#define ILHPLJLMMHO_EVALUATE_OFFSET UNITYSDK_OFFSET(0x164A9930)

inline static constexpr unsigned int ILHPLJLMMHO_TypeDefinitionIndex = 54520;

	class ILHPLJLMMHO
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareChangeValue* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareChangeValue*))((::PBYTE)hIl2Cpp + ILHPLJLMMHO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ILHPLJLMMHO_EVALUATE_OFFSET))(this);
		}

	};
