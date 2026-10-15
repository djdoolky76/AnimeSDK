#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OGEFLHNGAEH.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class UniversalHotFixPredicateC; }

#define ADIKNDCNGJC_CTOR_OFFSET UNITYSDK_OFFSET(0xB13F8E0)
#define ADIKNDCNGJC_EVALUATE_OFFSET UNITYSDK_OFFSET(0xB13F960)

inline static constexpr unsigned int ADIKNDCNGJC_TypeDefinitionIndex = 55792;

	class ADIKNDCNGJC : public ::OGEFLHNGAEH
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::UniversalHotFixPredicateC* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::UniversalHotFixPredicateC*))((::PBYTE)hIl2Cpp + ADIKNDCNGJC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ADIKNDCNGJC_EVALUATE_OFFSET))(this);
		}

	};
