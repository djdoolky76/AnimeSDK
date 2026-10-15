#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchTimeRewindStrikeSource; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HOGCFJOAFLK_CTOR_OFFSET UNITYSDK_OFFSET(0x15DB3F50)
#define HOGCFJOAFLK_EVALUATE_OFFSET UNITYSDK_OFFSET(0x15DB3FC0)

	class HOGCFJOAFLK
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TargetFetchTimeRewindStrikeSource* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchTimeRewindStrikeSource*))((::PBYTE)hIl2Cpp + HOGCFJOAFLK_CTOR_OFFSET))(this, a1);
		}

		::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + HOGCFJOAFLK_EVALUATE_OFFSET))(this, a1, a2);
		}

	};
