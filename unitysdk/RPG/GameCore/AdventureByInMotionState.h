#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterMotionFlag.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdventureByInMotionState; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_ADVENTUREBYINMOTIONSTATE_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8EDD70)
#define RPG_GAMECORE_ADVENTUREBYINMOTIONSTATE_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1E8EDF30)
#define RPG_GAMECORE_ADVENTUREBYINMOTIONSTATE_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1E8EDF00)
#define RPG_GAMECORE_ADVENTUREBYINMOTIONSTATE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E8EDD80)
#define RPG_GAMECORE_ADVENTUREBYINMOTIONSTATE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E8EDD40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureByInMotionState_TypeDefinitionIndex = 20559;

	class AdventureByInMotionState : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::CharacterMotionFlag MotionFlag; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYINMOTIONSTATE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdventureByInMotionState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdventureByInMotionState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYINMOTIONSTATE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdventureByInMotionState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdventureByInMotionState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYINMOTIONSTATE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureByInMotionState* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureByInMotionState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYINMOTIONSTATE_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureByInMotionState* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureByInMotionState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYINMOTIONSTATE_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
