#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByIsFirstInsertAbilityInQueue; }
namespace RPG::GameCore { class TaskContext; }

#define BHDEDDBPKFO_CTOR_OFFSET UNITYSDK_OFFSET(0xB474630)
#define BHDEDDBPKFO_EVALUATE_OFFSET UNITYSDK_OFFSET(0xB474660)

	class BHDEDDBPKFO
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByIsFirstInsertAbilityInQueue* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByIsFirstInsertAbilityInQueue*))((::PBYTE)hIl2Cpp + BHDEDDBPKFO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BHDEDDBPKFO_EVALUATE_OFFSET))(this);
		}

	};
