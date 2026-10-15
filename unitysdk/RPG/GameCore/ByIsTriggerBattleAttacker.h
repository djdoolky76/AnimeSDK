#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByIsTriggerBattleAttacker; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYISTRIGGERBATTLEATTACKER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5280B0)
#define RPG_GAMECORE_BYISTRIGGERBATTLEATTACKER_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D528270)
#define RPG_GAMECORE_BYISTRIGGERBATTLEATTACKER_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D528240)
#define RPG_GAMECORE_BYISTRIGGERBATTLEATTACKER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5280C0)
#define RPG_GAMECORE_BYISTRIGGERBATTLEATTACKER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D528080)

namespace RPG::GameCore
{
	class ByIsTriggerBattleAttacker : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISTRIGGERBATTLEATTACKER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByIsTriggerBattleAttacker* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByIsTriggerBattleAttacker*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISTRIGGERBATTLEATTACKER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByIsTriggerBattleAttacker* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByIsTriggerBattleAttacker*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISTRIGGERBATTLEATTACKER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsTriggerBattleAttacker* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsTriggerBattleAttacker*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISTRIGGERBATTLEATTACKER_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsTriggerBattleAttacker* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsTriggerBattleAttacker*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISTRIGGERBATTLEATTACKER_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
