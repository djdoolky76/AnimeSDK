#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class RtBattleTargetFetchGridByTag; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PBMOBAAOIJH_CTOR_OFFSET UNITYSDK_OFFSET(0xBFF56E0)
#define PBMOBAAOIJH_EVALUATE_OFFSET UNITYSDK_OFFSET(0xBFF5840)

	class PBMOBAAOIJH
	{
	public:
		::System::Int32 KJCDAHNPFMD; // 0x18
		::System::Void _ctor(::RPG::GameCore::RtBattleTargetFetchGridByTag* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RtBattleTargetFetchGridByTag*))((::PBYTE)hIl2Cpp + PBMOBAAOIJH_CTOR_OFFSET))(this, a1);
		}

		::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + PBMOBAAOIJH_EVALUATE_OFFSET))(this, a1, a2);
		}

	};
