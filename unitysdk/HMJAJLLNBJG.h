#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchContextDialogueTalkTrigger; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HMJAJLLNBJG_CTOR_OFFSET UNITYSDK_OFFSET(0x15D83620)
#define HMJAJLLNBJG_EVALUATE_OFFSET UNITYSDK_OFFSET(0x15D83690)

	class HMJAJLLNBJG
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TargetFetchContextDialogueTalkTrigger* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchContextDialogueTalkTrigger*))((::PBYTE)hIl2Cpp + HMJAJLLNBJG_CTOR_OFFSET))(this, a1);
		}

		::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + HMJAJLLNBJG_EVALUATE_OFFSET))(this, a1, a2);
		}

	};
