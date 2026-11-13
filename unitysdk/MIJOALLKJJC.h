#pragma once
#include "unitysdk/unitysdk.h"
class PDKPLHGKFOI;
namespace RPG::GameCore { class TaskContext; }

#define MIJOALLKJJC_CTOR_OFFSET UNITYSDK_OFFSET(0x1A395130)
#define MIJOALLKJJC_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1A395160)

inline static constexpr unsigned int MIJOALLKJJC_TypeDefinitionIndex = 55330;

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
