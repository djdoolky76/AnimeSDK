#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterMotionFlag.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdventureByInMotionState; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_ADVENTUREBYINMOTIONSTATE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D38C460)
#define RPG_GAMECORE_ADVENTUREBYINMOTIONSTATE_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D38C620)
#define RPG_GAMECORE_ADVENTUREBYINMOTIONSTATE_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D38C5F0)
#define RPG_GAMECORE_ADVENTUREBYINMOTIONSTATE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D38C470)
#define RPG_GAMECORE_ADVENTUREBYINMOTIONSTATE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D38C430)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureByInMotionState_TypeDefinitionIndex = 20224;

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
