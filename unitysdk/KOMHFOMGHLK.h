#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchSummonMonsters; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KOMHFOMGHLK_CTOR_OFFSET UNITYSDK_OFFSET(0xB5A24B0)
#define KOMHFOMGHLK_EVALUATE_OFFSET UNITYSDK_OFFSET(0xB5A2500)

	class KOMHFOMGHLK
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TargetFetchSummonMonsters* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchSummonMonsters*))((::PBYTE)hIl2Cpp + KOMHFOMGHLK_CTOR_OFFSET))(this, a1);
		}

		::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + KOMHFOMGHLK_EVALUATE_OFFSET))(this, a1, a2);
		}

	};
