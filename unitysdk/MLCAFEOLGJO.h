#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchLastZombieEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MLCAFEOLGJO_CTOR_OFFSET UNITYSDK_OFFSET(0xB9A59F0)
#define MLCAFEOLGJO_EVALUATE_OFFSET UNITYSDK_OFFSET(0xB9A5A60)

	class MLCAFEOLGJO
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TargetFetchLastZombieEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchLastZombieEntity*))((::PBYTE)hIl2Cpp + MLCAFEOLGJO_CTOR_OFFSET))(this, a1);
		}

		::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + MLCAFEOLGJO_EVALUATE_OFFSET))(this, a1, a2);
		}

	};
