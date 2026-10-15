#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class QueryHoyoTag; }
namespace RPG::GameCore { class TaskContext; }

#define HJGJOLNOKFF_CTOR_OFFSET UNITYSDK_OFFSET(0x15D21920)
#define HJGJOLNOKFF_EVALUATE_OFFSET UNITYSDK_OFFSET(0x15D21950)

	class HJGJOLNOKFF
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::QueryHoyoTag* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::QueryHoyoTag*))((::PBYTE)hIl2Cpp + HJGJOLNOKFF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HJGJOLNOKFF_EVALUATE_OFFSET))(this);
		}

	};
