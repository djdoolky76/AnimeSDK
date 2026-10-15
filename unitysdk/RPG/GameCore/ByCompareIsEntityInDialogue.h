#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByCompareIsEntityInDialogue; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPAREISENTITYINDIALOGUE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D48A1E0)
#define RPG_GAMECORE_BYCOMPAREISENTITYINDIALOGUE_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D48A3A0)
#define RPG_GAMECORE_BYCOMPAREISENTITYINDIALOGUE_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D48A370)
#define RPG_GAMECORE_BYCOMPAREISENTITYINDIALOGUE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D48A1F0)
#define RPG_GAMECORE_BYCOMPAREISENTITYINDIALOGUE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D48A1B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareIsEntityInDialogue_TypeDefinitionIndex = 20882;

	class ByCompareIsEntityInDialogue : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetEntity; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREISENTITYINDIALOGUE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareIsEntityInDialogue* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareIsEntityInDialogue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREISENTITYINDIALOGUE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareIsEntityInDialogue* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareIsEntityInDialogue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREISENTITYINDIALOGUE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareIsEntityInDialogue* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareIsEntityInDialogue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREISENTITYINDIALOGUE_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareIsEntityInDialogue* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareIsEntityInDialogue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREISENTITYINDIALOGUE_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
