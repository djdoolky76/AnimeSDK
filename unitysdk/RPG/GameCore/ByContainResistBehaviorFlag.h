#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ModifierBehaviorFlag.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByContainResistBehaviorFlag; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCONTAINRESISTBEHAVIORFLAG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4E7BC0)
#define RPG_GAMECORE_BYCONTAINRESISTBEHAVIORFLAG_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D4E7DD0)
#define RPG_GAMECORE_BYCONTAINRESISTBEHAVIORFLAG_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D4E7DA0)
#define RPG_GAMECORE_BYCONTAINRESISTBEHAVIORFLAG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D4E7BD0)
#define RPG_GAMECORE_BYCONTAINRESISTBEHAVIORFLAG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D4E7B90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByContainResistBehaviorFlag_TypeDefinitionIndex = 23647;

	class ByContainResistBehaviorFlag : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::ModifierBehaviorFlag ResistFlag; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCONTAINRESISTBEHAVIORFLAG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByContainResistBehaviorFlag* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByContainResistBehaviorFlag*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCONTAINRESISTBEHAVIORFLAG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByContainResistBehaviorFlag* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByContainResistBehaviorFlag*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCONTAINRESISTBEHAVIORFLAG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByContainResistBehaviorFlag* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByContainResistBehaviorFlag*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCONTAINRESISTBEHAVIORFLAG_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByContainResistBehaviorFlag* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByContainResistBehaviorFlag*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCONTAINRESISTBEHAVIORFLAG_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
