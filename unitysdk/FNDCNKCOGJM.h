#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchAbilityTargetLeader; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FNDCNKCOGJM_CTOR_OFFSET UNITYSDK_OFFSET(0x1586A880)
#define FNDCNKCOGJM_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1586A8F0)

	class FNDCNKCOGJM
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TargetFetchAbilityTargetLeader* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchAbilityTargetLeader*))((::PBYTE)hIl2Cpp + FNDCNKCOGJM_CTOR_OFFSET))(this, a1);
		}

		::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + FNDCNKCOGJM_EVALUATE_OFFSET))(this, a1, a2);
		}

	};
