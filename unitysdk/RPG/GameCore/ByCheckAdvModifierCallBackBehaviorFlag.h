#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdventureModifierBehaviorFlag.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByCheckAdvModifierCallBackBehaviorFlag; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCHECKADVMODIFIERCALLBACKBEHAVIORFLAG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D45E110)
#define RPG_GAMECORE_BYCHECKADVMODIFIERCALLBACKBEHAVIORFLAG_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D45E2D0)
#define RPG_GAMECORE_BYCHECKADVMODIFIERCALLBACKBEHAVIORFLAG_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D45E2A0)
#define RPG_GAMECORE_BYCHECKADVMODIFIERCALLBACKBEHAVIORFLAG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D45E120)
#define RPG_GAMECORE_BYCHECKADVMODIFIERCALLBACKBEHAVIORFLAG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D45E0E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCheckAdvModifierCallBackBehaviorFlag_TypeDefinitionIndex = 21817;

	class ByCheckAdvModifierCallBackBehaviorFlag : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::AdventureModifierBehaviorFlag Flag; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKADVMODIFIERCALLBACKBEHAVIORFLAG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCheckAdvModifierCallBackBehaviorFlag* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCheckAdvModifierCallBackBehaviorFlag*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKADVMODIFIERCALLBACKBEHAVIORFLAG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCheckAdvModifierCallBackBehaviorFlag* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCheckAdvModifierCallBackBehaviorFlag*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKADVMODIFIERCALLBACKBEHAVIORFLAG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckAdvModifierCallBackBehaviorFlag* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckAdvModifierCallBackBehaviorFlag*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKADVMODIFIERCALLBACKBEHAVIORFLAG_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckAdvModifierCallBackBehaviorFlag* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckAdvModifierCallBackBehaviorFlag*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKADVMODIFIERCALLBACKBEHAVIORFLAG_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
