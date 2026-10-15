#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchMonsterByID; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NBEIALMIGNF_CTOR_OFFSET UNITYSDK_OFFSET(0xBABE920)
#define NBEIALMIGNF_EVALUATE_OFFSET UNITYSDK_OFFSET(0xBABE970)

	class NBEIALMIGNF
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TargetFetchMonsterByID* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchMonsterByID*))((::PBYTE)hIl2Cpp + NBEIALMIGNF_CTOR_OFFSET))(this, a1);
		}

		::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + NBEIALMIGNF_EVALUATE_OFFSET))(this, a1, a2);
		}

	};
