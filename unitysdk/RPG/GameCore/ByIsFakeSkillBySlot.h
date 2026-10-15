#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ControlSkillType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByIsFakeSkillBySlot; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYISFAKESKILLBYSLOT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4E66C0)
#define RPG_GAMECORE_BYISFAKESKILLBYSLOT_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D4E6930)
#define RPG_GAMECORE_BYISFAKESKILLBYSLOT_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D4E68D0)
#define RPG_GAMECORE_BYISFAKESKILLBYSLOT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D4E6700)
#define RPG_GAMECORE_BYISFAKESKILLBYSLOT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D4E6660)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsFakeSkillBySlot_TypeDefinitionIndex = 23007;

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
