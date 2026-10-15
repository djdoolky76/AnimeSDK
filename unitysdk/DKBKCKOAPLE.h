#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByCompareAliveEnemyNumber; }
namespace RPG::GameCore { class TaskContext; }

#define DKBKCKOAPLE_CTOR_OFFSET UNITYSDK_OFFSET(0xF254C00)
#define DKBKCKOAPLE_EVALUATE_OFFSET UNITYSDK_OFFSET(0xF254C30)

	class DKBKCKOAPLE
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareAliveEnemyNumber* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareAliveEnemyNumber*))((::PBYTE)hIl2Cpp + DKBKCKOAPLE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DKBKCKOAPLE_EVALUATE_OFFSET))(this);
		}

	};
