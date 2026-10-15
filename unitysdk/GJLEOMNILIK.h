#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GroupFetchLocalTarget; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GJLEOMNILIK_CTOR_OFFSET UNITYSDK_OFFSET(0x15A6BE40)
#define GJLEOMNILIK_EVALUATE_OFFSET UNITYSDK_OFFSET(0x15A6BE90)

	class GJLEOMNILIK
	{
	public:
		::System::Void _ctor(::RPG::GameCore::GroupFetchLocalTarget* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GroupFetchLocalTarget*))((::PBYTE)hIl2Cpp + GJLEOMNILIK_CTOR_OFFSET))(this, a1);
		}

		::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + GJLEOMNILIK_EVALUATE_OFFSET))(this, a1, a2);
		}

	};
