#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByCompareDamageCustomName; }
namespace RPG::GameCore { class TaskContext; }

#define LCAFHCNNGJL_CTOR_OFFSET UNITYSDK_OFFSET(0x1B2AE0E0)
#define LCAFHCNNGJL_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1B2AE110)

inline static constexpr unsigned int LCAFHCNNGJL_TypeDefinitionIndex = 56053;

	class LCAFHCNNGJL
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareDamageCustomName* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareDamageCustomName*))((::PBYTE)hIl2Cpp + LCAFHCNNGJL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LCAFHCNNGJL_EVALUATE_OFFSET))(this);
		}

	};
