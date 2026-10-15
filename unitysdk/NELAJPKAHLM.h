#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchProjectileHitPos; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NELAJPKAHLM_CTOR_OFFSET UNITYSDK_OFFSET(0xBB6FB90)
#define NELAJPKAHLM_EVALUATE_OFFSET UNITYSDK_OFFSET(0xBB6FBE0)

	class NELAJPKAHLM
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TargetFetchProjectileHitPos* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchProjectileHitPos*))((::PBYTE)hIl2Cpp + NELAJPKAHLM_CTOR_OFFSET))(this, a1);
		}

		::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + NELAJPKAHLM_EVALUATE_OFFSET))(this, a1, a2);
		}

	};
