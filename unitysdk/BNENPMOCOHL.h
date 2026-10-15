#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByHasSecretWeak; }
namespace RPG::GameCore { class TaskContext; }

#define BNENPMOCOHL_CTOR_OFFSET UNITYSDK_OFFSET(0xBDCAEC0)
#define BNENPMOCOHL_EVALUATE_OFFSET UNITYSDK_OFFSET(0xBDCAEF0)

inline static constexpr unsigned int BNENPMOCOHL_TypeDefinitionIndex = 54618;

	class BNENPMOCOHL
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByHasSecretWeak* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByHasSecretWeak*))((::PBYTE)hIl2Cpp + BNENPMOCOHL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BNENPMOCOHL_EVALUATE_OFFSET))(this);
		}

	};
