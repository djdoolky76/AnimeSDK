#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchBattleEventEntityList; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EABLPGMPHBM_CTOR_OFFSET UNITYSDK_OFFSET(0x1266FBC0)
#define EABLPGMPHBM_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1266FC10)

	class EABLPGMPHBM
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TargetFetchBattleEventEntityList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchBattleEventEntityList*))((::PBYTE)hIl2Cpp + EABLPGMPHBM_CTOR_OFFSET))(this, a1);
		}

		::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + EABLPGMPHBM_EVALUATE_OFFSET))(this, a1, a2);
		}

	};
