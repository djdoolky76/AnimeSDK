#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
#include "unitysdk/RPG/GameCore/SkillEffect.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByCompareSelectSkillEffect; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPARESELECTSKILLEFFECT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4A55B0)
#define RPG_GAMECORE_BYCOMPARESELECTSKILLEFFECT_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D4A5780)
#define RPG_GAMECORE_BYCOMPARESELECTSKILLEFFECT_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D4A5750)
#define RPG_GAMECORE_BYCOMPARESELECTSKILLEFFECT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D4A55C0)
#define RPG_GAMECORE_BYCOMPARESELECTSKILLEFFECT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D4A5580)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareSelectSkillEffect_TypeDefinitionIndex = 23021;

	class ByCompareSelectSkillEffect : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::SkillEffect>* SkillEffectList; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESELECTSKILLEFFECT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareSelectSkillEffect* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareSelectSkillEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESELECTSKILLEFFECT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareSelectSkillEffect* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareSelectSkillEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESELECTSKILLEFFECT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareSelectSkillEffect* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareSelectSkillEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESELECTSKILLEFFECT_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareSelectSkillEffect* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareSelectSkillEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESELECTSKILLEFFECT_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
