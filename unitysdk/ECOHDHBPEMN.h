#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchAidAttacker; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ECOHDHBPEMN_CTOR_OFFSET UNITYSDK_OFFSET(0x12D16490)
#define ECOHDHBPEMN_EVALUATE_OFFSET UNITYSDK_OFFSET(0x12D16500)

	class ECOHDHBPEMN
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TargetFetchAidAttacker* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchAidAttacker*))((::PBYTE)hIl2Cpp + ECOHDHBPEMN_CTOR_OFFSET))(this, a1);
		}

		::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + ECOHDHBPEMN_EVALUATE_OFFSET))(this, a1, a2);
		}

	};
