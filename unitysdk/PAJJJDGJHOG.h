#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchSummonUnit; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PAJJJDGJHOG_CTOR_OFFSET UNITYSDK_OFFSET(0xBFCC540)
#define PAJJJDGJHOG_EVALUATE_OFFSET UNITYSDK_OFFSET(0xBFCC590)

	class PAJJJDGJHOG
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TargetFetchSummonUnit* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchSummonUnit*))((::PBYTE)hIl2Cpp + PAJJJDGJHOG_CTOR_OFFSET))(this, a1);
		}

		::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + PAJJJDGJHOG_EVALUATE_OFFSET))(this, a1, a2);
		}

	};
