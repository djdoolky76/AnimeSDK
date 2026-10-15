#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchBattleEventCaster; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LLGDJOPPPEN_CTOR_OFFSET UNITYSDK_OFFSET(0xB76C580)
#define LLGDJOPPPEN_EVALUATE_OFFSET UNITYSDK_OFFSET(0xB76C5D0)

	class LLGDJOPPPEN
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TargetFetchBattleEventCaster* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchBattleEventCaster*))((::PBYTE)hIl2Cpp + LLGDJOPPPEN_CTOR_OFFSET))(this, a1);
		}

		::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + LLGDJOPPPEN_EVALUATE_OFFSET))(this, a1, a2);
		}

	};
