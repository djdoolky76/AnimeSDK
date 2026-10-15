#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchProjectileHitEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FAJECHLNBBA_CTOR_OFFSET UNITYSDK_OFFSET(0x15681580)
#define FAJECHLNBBA_EVALUATE_OFFSET UNITYSDK_OFFSET(0x156815D0)

	class FAJECHLNBBA
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TargetFetchProjectileHitEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchProjectileHitEntity*))((::PBYTE)hIl2Cpp + FAJECHLNBBA_CTOR_OFFSET))(this, a1);
		}

		::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + FAJECHLNBBA_EVALUATE_OFFSET))(this, a1, a2);
		}

	};
