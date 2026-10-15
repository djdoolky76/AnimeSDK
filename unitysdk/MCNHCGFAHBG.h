#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class RtBattleTargetCameraFocusTarget; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MCNHCGFAHBG_CTOR_OFFSET UNITYSDK_OFFSET(0xB8890A0)
#define MCNHCGFAHBG_EVALUATE_OFFSET UNITYSDK_OFFSET(0xB889110)

	class MCNHCGFAHBG
	{
	public:
		::System::Void _ctor(::RPG::GameCore::RtBattleTargetCameraFocusTarget* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RtBattleTargetCameraFocusTarget*))((::PBYTE)hIl2Cpp + MCNHCGFAHBG_CTOR_OFFSET))(this, a1);
		}

		::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + MCNHCGFAHBG_EVALUATE_OFFSET))(this, a1, a2);
		}

	};
