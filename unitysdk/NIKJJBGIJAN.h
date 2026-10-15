#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByTargetAliveState; }
namespace RPG::GameCore { class TaskContext; }

#define NIKJJBGIJAN_CTOR_OFFSET UNITYSDK_OFFSET(0xBBF79A0)
#define NIKJJBGIJAN_EVALUATE_OFFSET UNITYSDK_OFFSET(0xBBF79D0)

inline static constexpr unsigned int NIKJJBGIJAN_TypeDefinitionIndex = 54909;

	class NIKJJBGIJAN
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByTargetAliveState* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByTargetAliveState*))((::PBYTE)hIl2Cpp + NIKJJBGIJAN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NIKJJBGIJAN_EVALUATE_OFFSET))(this);
		}

	};
