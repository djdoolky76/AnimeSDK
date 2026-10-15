#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ControlSkillType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
#include "unitysdk/RPG/GameCore/SkillEffect.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByCompareControlSkillEffect; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPARECONTROLSKILLEFFECT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D474A30)
#define RPG_GAMECORE_BYCOMPARECONTROLSKILLEFFECT_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D474C90)
#define RPG_GAMECORE_BYCOMPARECONTROLSKILLEFFECT_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D474C60)
#define RPG_GAMECORE_BYCOMPARECONTROLSKILLEFFECT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D474A40)
#define RPG_GAMECORE_BYCOMPARECONTROLSKILLEFFECT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D474A00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareControlSkillEffect_TypeDefinitionIndex = 23023;

	class ByCompareControlSkillEffect : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::ControlSkillType ControlSkillType; // 0x28
		::System::Byte _padding0[0x4];
		::Il2CppArray<::RPG::GameCore::SkillEffect>* SkillEffectList; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECONTROLSKILLEFFECT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareControlSkillEffect* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareControlSkillEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECONTROLSKILLEFFECT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareControlSkillEffect* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareControlSkillEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECONTROLSKILLEFFECT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareControlSkillEffect* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareControlSkillEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECONTROLSKILLEFFECT_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareControlSkillEffect* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareControlSkillEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECONTROLSKILLEFFECT_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
