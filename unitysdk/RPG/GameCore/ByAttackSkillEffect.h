#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
#include "unitysdk/RPG/GameCore/SkillEffect.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByAttackSkillEffect; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYATTACKSKILLEFFECT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4583E0)
#define RPG_GAMECORE_BYATTACKSKILLEFFECT_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D4585F0)
#define RPG_GAMECORE_BYATTACKSKILLEFFECT_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D4585C0)
#define RPG_GAMECORE_BYATTACKSKILLEFFECT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D4583F0)
#define RPG_GAMECORE_BYATTACKSKILLEFFECT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D4583B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByAttackSkillEffect_TypeDefinitionIndex = 23511;

	class ByAttackSkillEffect : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::Il2CppArray<::RPG::GameCore::SkillEffect>* SkillEffects; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYATTACKSKILLEFFECT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByAttackSkillEffect* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByAttackSkillEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYATTACKSKILLEFFECT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByAttackSkillEffect* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByAttackSkillEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYATTACKSKILLEFFECT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByAttackSkillEffect* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByAttackSkillEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYATTACKSKILLEFFECT_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByAttackSkillEffect* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByAttackSkillEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYATTACKSKILLEFFECT_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
