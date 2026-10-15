#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameModeState.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByInTurnBasedGameModeState; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYINTURNBASEDGAMEMODESTATE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4D7B60)
#define RPG_GAMECORE_BYINTURNBASEDGAMEMODESTATE_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D4D7D20)
#define RPG_GAMECORE_BYINTURNBASEDGAMEMODESTATE_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D4D7CF0)
#define RPG_GAMECORE_BYINTURNBASEDGAMEMODESTATE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D4D7B70)
#define RPG_GAMECORE_BYINTURNBASEDGAMEMODESTATE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D4D7B30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByInTurnBasedGameModeState_TypeDefinitionIndex = 23547;

	class ByInTurnBasedGameModeState : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::GameModeState State; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYINTURNBASEDGAMEMODESTATE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByInTurnBasedGameModeState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByInTurnBasedGameModeState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYINTURNBASEDGAMEMODESTATE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByInTurnBasedGameModeState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByInTurnBasedGameModeState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYINTURNBASEDGAMEMODESTATE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByInTurnBasedGameModeState* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByInTurnBasedGameModeState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYINTURNBASEDGAMEMODESTATE_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByInTurnBasedGameModeState* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByInTurnBasedGameModeState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYINTURNBASEDGAMEMODESTATE_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
