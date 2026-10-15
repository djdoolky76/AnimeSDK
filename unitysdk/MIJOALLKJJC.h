#pragma once
#include "unitysdk/unitysdk.h"
class PDKPLHGKFOI;
namespace RPG::GameCore { class TaskContext; }

#define MIJOALLKJJC_CTOR_OFFSET UNITYSDK_OFFSET(0xB954B10)
#define MIJOALLKJJC_EVALUATE_OFFSET UNITYSDK_OFFSET(0xB954B40)

inline static constexpr unsigned int MIJOALLKJJC_TypeDefinitionIndex = 54166;

	class MIJOALLKJJC
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::PDKPLHGKFOI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::PDKPLHGKFOI*))((::PBYTE)hIl2Cpp + MIJOALLKJJC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIJOALLKJJC_EVALUATE_OFFSET))(this);
		}

	};
