#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByCompareMonsterPhase; }
namespace RPG::GameCore { class TaskContext; }

#define LJEFFJPJAOH_CTOR_OFFSET UNITYSDK_OFFSET(0xB6E1B60)
#define LJEFFJPJAOH_EVALUATE_OFFSET UNITYSDK_OFFSET(0xB6E1B90)

	class LJEFFJPJAOH
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareMonsterPhase* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareMonsterPhase*))((::PBYTE)hIl2Cpp + LJEFFJPJAOH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LJEFFJPJAOH_EVALUATE_OFFSET))(this);
		}

	};
