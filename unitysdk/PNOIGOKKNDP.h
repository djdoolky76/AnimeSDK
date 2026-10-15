#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByDamageSourceContainBehaviorFlag; }
namespace RPG::GameCore { class TaskContext; }

#define PNOIGOKKNDP_CTOR_OFFSET UNITYSDK_OFFSET(0xC355730)
#define PNOIGOKKNDP_EVALUATE_OFFSET UNITYSDK_OFFSET(0xC356070)

inline static constexpr unsigned int PNOIGOKKNDP_TypeDefinitionIndex = 54602;

	class PNOIGOKKNDP
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByDamageSourceContainBehaviorFlag* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByDamageSourceContainBehaviorFlag*))((::PBYTE)hIl2Cpp + PNOIGOKKNDP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PNOIGOKKNDP_EVALUATE_OFFSET))(this);
		}

	};
