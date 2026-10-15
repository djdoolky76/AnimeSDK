#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchAdvMonsterEx; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ICMHDPGDOAK_CTOR_OFFSET UNITYSDK_OFFSET(0x15E52880)
#define ICMHDPGDOAK_EVALUATE_OFFSET UNITYSDK_OFFSET(0x15E52B40)
#define ICMHDPGDOAK_FBGHGOFHLAA_OFFSET UNITYSDK_OFFSET(0x15E528F0)
#define ICMHDPGDOAK_IBGJBMFBEHK_OFFSET UNITYSDK_OFFSET(0x15E52A40)

	class ICMHDPGDOAK
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TargetFetchAdvMonsterEx* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchAdvMonsterEx*))((::PBYTE)hIl2Cpp + ICMHDPGDOAK_CTOR_OFFSET))(this, a1);
		}

		::System::Void FBGHGOFHLAA(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + ICMHDPGDOAK_FBGHGOFHLAA_OFFSET))(this, a1);
		}

		::System::UInt32 IBGJBMFBEHK(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + ICMHDPGDOAK_IBGJBMFBEHK_OFFSET))(this, a1);
		}

		::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + ICMHDPGDOAK_EVALUATE_OFFSET))(this, a1, a2);
		}

	};
