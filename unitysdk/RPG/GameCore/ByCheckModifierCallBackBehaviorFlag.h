#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ModifierBehaviorFlag.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByCheckModifierCallBackBehaviorFlag; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCHECKMODIFIERCALLBACKBEHAVIORFLAG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4645E0)
#define RPG_GAMECORE_BYCHECKMODIFIERCALLBACKBEHAVIORFLAG_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D464850)
#define RPG_GAMECORE_BYCHECKMODIFIERCALLBACKBEHAVIORFLAG_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D4647F0)
#define RPG_GAMECORE_BYCHECKMODIFIERCALLBACKBEHAVIORFLAG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D464620)
#define RPG_GAMECORE_BYCHECKMODIFIERCALLBACKBEHAVIORFLAG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D464580)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCheckModifierCallBackBehaviorFlag_TypeDefinitionIndex = 23496;

	class ByCheckModifierCallBackBehaviorFlag : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::ModifierBehaviorFlag Flag; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKMODIFIERCALLBACKBEHAVIORFLAG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCheckModifierCallBackBehaviorFlag* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCheckModifierCallBackBehaviorFlag*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKMODIFIERCALLBACKBEHAVIORFLAG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCheckModifierCallBackBehaviorFlag* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCheckModifierCallBackBehaviorFlag*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKMODIFIERCALLBACKBEHAVIORFLAG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckModifierCallBackBehaviorFlag* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckModifierCallBackBehaviorFlag*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKMODIFIERCALLBACKBEHAVIORFLAG_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckModifierCallBackBehaviorFlag* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckModifierCallBackBehaviorFlag*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKMODIFIERCALLBACKBEHAVIORFLAG_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
