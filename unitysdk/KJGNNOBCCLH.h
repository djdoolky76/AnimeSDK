#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByIsTriggerBattleAttacker; }
namespace RPG::GameCore { class TaskContext; }

#define KJGNNOBCCLH_CTOR_OFFSET UNITYSDK_OFFSET(0xB449E80)
#define KJGNNOBCCLH_EVALUATE_OFFSET UNITYSDK_OFFSET(0xB449EB0)

	class KJGNNOBCCLH
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByIsTriggerBattleAttacker* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByIsTriggerBattleAttacker*))((::PBYTE)hIl2Cpp + KJGNNOBCCLH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KJGNNOBCCLH_EVALUATE_OFFSET))(this);
		}

	};
