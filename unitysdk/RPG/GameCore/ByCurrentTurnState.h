#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
#include "unitysdk/RPG/GameCore/TurnState.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByCurrentTurnState; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCURRENTTURNSTATE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4BFAF0)
#define RPG_GAMECORE_BYCURRENTTURNSTATE_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D4BFCC0)
#define RPG_GAMECORE_BYCURRENTTURNSTATE_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D4BFC90)
#define RPG_GAMECORE_BYCURRENTTURNSTATE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D4BFB00)
#define RPG_GAMECORE_BYCURRENTTURNSTATE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D4BFAC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCurrentTurnState_TypeDefinitionIndex = 23542;

	class ByCurrentTurnState : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TurnState>* TurnStates; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCURRENTTURNSTATE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCurrentTurnState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCurrentTurnState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCURRENTTURNSTATE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCurrentTurnState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCurrentTurnState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCURRENTTURNSTATE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCurrentTurnState* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCurrentTurnState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCURRENTTURNSTATE_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCurrentTurnState* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCurrentTurnState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCURRENTTURNSTATE_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
