#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByComparePropFastDeliverCheckSimplifiedMode; }
namespace RPG::GameCore { class TaskContext; }

#define NEDGGLGEIHJ_CTOR_OFFSET UNITYSDK_OFFSET(0xBB529E0)
#define NEDGGLGEIHJ_EVALUATE_OFFSET UNITYSDK_OFFSET(0xBB52A10)

inline static constexpr unsigned int NEDGGLGEIHJ_TypeDefinitionIndex = 52586;

	class NEDGGLGEIHJ
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByComparePropFastDeliverCheckSimplifiedMode* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByComparePropFastDeliverCheckSimplifiedMode*))((::PBYTE)hIl2Cpp + NEDGGLGEIHJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEDGGLGEIHJ_EVALUATE_OFFSET))(this);
		}

	};
