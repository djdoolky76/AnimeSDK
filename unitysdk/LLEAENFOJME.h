#pragma once
#include "unitysdk/unitysdk.h"
class JEBDGFNFEND;
namespace RPG::GameCore { class TaskContext; }

#define LLEAENFOJME_CTOR_OFFSET UNITYSDK_OFFSET(0xB764770)
#define LLEAENFOJME_EVALUATE_OFFSET UNITYSDK_OFFSET(0xB7647A0)

inline static constexpr unsigned int LLEAENFOJME_TypeDefinitionIndex = 53842;

	class LLEAENFOJME
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::JEBDGFNFEND* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::JEBDGFNFEND*))((::PBYTE)hIl2Cpp + LLEAENFOJME_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LLEAENFOJME_EVALUATE_OFFSET))(this);
		}

	};
