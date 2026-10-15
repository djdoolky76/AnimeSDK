#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByCheckTargetHPCanBeDamage; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCHECKTARGETHPCANBEDAMAGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D496460)
#define RPG_GAMECORE_BYCHECKTARGETHPCANBEDAMAGE_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D496620)
#define RPG_GAMECORE_BYCHECKTARGETHPCANBEDAMAGE_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D4965F0)
#define RPG_GAMECORE_BYCHECKTARGETHPCANBEDAMAGE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D496470)
#define RPG_GAMECORE_BYCHECKTARGETHPCANBEDAMAGE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D496430)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCheckTargetHPCanBeDamage_TypeDefinitionIndex = 22547;

	class ByCheckTargetHPCanBeDamage : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKTARGETHPCANBEDAMAGE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCheckTargetHPCanBeDamage* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCheckTargetHPCanBeDamage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKTARGETHPCANBEDAMAGE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCheckTargetHPCanBeDamage* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCheckTargetHPCanBeDamage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKTARGETHPCANBEDAMAGE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckTargetHPCanBeDamage* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckTargetHPCanBeDamage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKTARGETHPCANBEDAMAGE_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckTargetHPCanBeDamage* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckTargetHPCanBeDamage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKTARGETHPCANBEDAMAGE_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
