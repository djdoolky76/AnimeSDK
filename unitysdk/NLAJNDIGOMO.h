#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OGEFLHNGAEH.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class UniversalHotFixPredicateB; }

#define NLAJNDIGOMO_CTOR_OFFSET UNITYSDK_OFFSET(0xBC60300)
#define NLAJNDIGOMO_EVALUATE_OFFSET UNITYSDK_OFFSET(0xBC60380)

inline static constexpr unsigned int NLAJNDIGOMO_TypeDefinitionIndex = 55791;

	class NLAJNDIGOMO : public ::OGEFLHNGAEH
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::UniversalHotFixPredicateB* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::UniversalHotFixPredicateB*))((::PBYTE)hIl2Cpp + NLAJNDIGOMO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NLAJNDIGOMO_EVALUATE_OFFSET))(this);
		}

	};
