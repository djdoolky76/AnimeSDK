#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ListenPropInAnimState; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class TaskConfig; }
namespace System { class String; }

#define RPG_GAMECORE_LISTENPROPINANIMSTATE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7A8170)
#define RPG_GAMECORE_LISTENPROPINANIMSTATE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7A8180)
#define RPG_GAMECORE_LISTENPROPINANIMSTATE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7A8140)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ListenPropInAnimState_TypeDefinitionIndex = 20685;

	class ListenPropInAnimState : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::Il2CppArray<::System::String*>* AnimStates; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnEnter; // 0x28
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnExit; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LISTENPROPINANIMSTATE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ListenPropInAnimState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ListenPropInAnimState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LISTENPROPINANIMSTATE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ListenPropInAnimState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ListenPropInAnimState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LISTENPROPINANIMSTATE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
