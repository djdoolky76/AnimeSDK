#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ControlSkillType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByIsFakeSkillBySlot; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYISFAKESKILLBYSLOT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D514130)
#define RPG_GAMECORE_BYISFAKESKILLBYSLOT_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D5143A0)
#define RPG_GAMECORE_BYISFAKESKILLBYSLOT_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D514340)
#define RPG_GAMECORE_BYISFAKESKILLBYSLOT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D514170)
#define RPG_GAMECORE_BYISFAKESKILLBYSLOT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5140D0)

namespace RPG::GameCore
{
	class ByIsFakeSkillBySlot : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::ControlSkillType ControlSkillType; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISFAKESKILLBYSLOT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByIsFakeSkillBySlot* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByIsFakeSkillBySlot*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISFAKESKILLBYSLOT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByIsFakeSkillBySlot* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByIsFakeSkillBySlot*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISFAKESKILLBYSLOT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsFakeSkillBySlot* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsFakeSkillBySlot*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISFAKESKILLBYSLOT_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsFakeSkillBySlot* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsFakeSkillBySlot*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISFAKESKILLBYSLOT_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
