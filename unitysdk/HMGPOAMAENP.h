#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByCompareGraphDynamicFloat; }
namespace RPG::GameCore { class TaskContext; }

#define HMGPOAMAENP_CTOR_OFFSET UNITYSDK_OFFSET(0x15D818B0)
#define HMGPOAMAENP_EVALUATE_OFFSET UNITYSDK_OFFSET(0x15D818E0)

	class HMGPOAMAENP
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareGraphDynamicFloat* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareGraphDynamicFloat*))((::PBYTE)hIl2Cpp + HMGPOAMAENP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HMGPOAMAENP_EVALUATE_OFFSET))(this);
		}

	};
