#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AdvByFastDeliverHasMultiRoute; }
namespace RPG::GameCore { class TaskContext; }

#define JNCIENHAIEF_CTOR_OFFSET UNITYSDK_OFFSET(0xB279A40)
#define JNCIENHAIEF_EVALUATE_OFFSET UNITYSDK_OFFSET(0xB279A70)

inline static constexpr unsigned int JNCIENHAIEF_TypeDefinitionIndex = 53114;

	class JNCIENHAIEF
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvByFastDeliverHasMultiRoute* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvByFastDeliverHasMultiRoute*))((::PBYTE)hIl2Cpp + JNCIENHAIEF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JNCIENHAIEF_EVALUATE_OFFSET))(this);
		}

	};
