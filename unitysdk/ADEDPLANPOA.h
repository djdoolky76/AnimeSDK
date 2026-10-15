#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchElationTimeAllTargets; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ADEDPLANPOA_CTOR_OFFSET UNITYSDK_OFFSET(0xB135920)
#define ADEDPLANPOA_EVALUATE_OFFSET UNITYSDK_OFFSET(0xB135970)

	class ADEDPLANPOA
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TargetFetchElationTimeAllTargets* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchElationTimeAllTargets*))((::PBYTE)hIl2Cpp + ADEDPLANPOA_CTOR_OFFSET))(this, a1);
		}

		::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + ADEDPLANPOA_EVALUATE_OFFSET))(this, a1, a2);
		}

	};
