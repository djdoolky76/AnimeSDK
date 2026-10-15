#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchCurrentInsertAbilityTarget; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ANELKDOGIKJ_CTOR_OFFSET UNITYSDK_OFFSET(0x15595420)
#define ANELKDOGIKJ_DCHBJGFBNLG_OFFSET UNITYSDK_OFFSET(0x15595680)
#define ANELKDOGIKJ_EVALUATE_OFFSET UNITYSDK_OFFSET(0x15595490)

	class ANELKDOGIKJ
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TargetFetchCurrentInsertAbilityTarget* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchCurrentInsertAbilityTarget*))((::PBYTE)hIl2Cpp + ANELKDOGIKJ_CTOR_OFFSET))(this, a1);
		}

		::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + ANELKDOGIKJ_EVALUATE_OFFSET))(this, a1, a2);
		}

		static ::System::Void DCHBJGFBNLG(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + ANELKDOGIKJ_DCHBJGFBNLG_OFFSET))(a1, a2);
		}

	};
