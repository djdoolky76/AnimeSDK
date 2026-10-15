#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByIsTargetAbleToAction; }
namespace RPG::GameCore { class TaskContext; }

#define DIKBIKBPDJH_CTOR_OFFSET UNITYSDK_OFFSET(0xF209480)
#define DIKBIKBPDJH_EVALUATE_OFFSET UNITYSDK_OFFSET(0xF2094B0)

inline static constexpr unsigned int DIKBIKBPDJH_TypeDefinitionIndex = 54689;

	class DIKBIKBPDJH
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByIsTargetAbleToAction* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByIsTargetAbleToAction*))((::PBYTE)hIl2Cpp + DIKBIKBPDJH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DIKBIKBPDJH_EVALUATE_OFFSET))(this);
		}

	};
