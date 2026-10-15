#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchTurnOwnerEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define AJJILPGNFBG_CTOR_OFFSET UNITYSDK_OFFSET(0x12CC1940)
#define AJJILPGNFBG_EVALUATE_OFFSET UNITYSDK_OFFSET(0x12CC1990)

	class AJJILPGNFBG
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TargetFetchTurnOwnerEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchTurnOwnerEntity*))((::PBYTE)hIl2Cpp + AJJILPGNFBG_CTOR_OFFSET))(this, a1);
		}

		::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + AJJILPGNFBG_EVALUATE_OFFSET))(this, a1, a2);
		}

	};
