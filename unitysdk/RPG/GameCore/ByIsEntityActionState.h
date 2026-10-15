#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByIsEntityActionState; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYISENTITYACTIONSTATE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D512430)
#define RPG_GAMECORE_BYISENTITYACTIONSTATE_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D5125F0)
#define RPG_GAMECORE_BYISENTITYACTIONSTATE_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D5125C0)
#define RPG_GAMECORE_BYISENTITYACTIONSTATE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D512440)
#define RPG_GAMECORE_BYISENTITYACTIONSTATE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D512400)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsEntityActionState_TypeDefinitionIndex = 23064;

	class ByIsEntityActionState : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISENTITYACTIONSTATE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByIsEntityActionState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByIsEntityActionState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISENTITYACTIONSTATE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByIsEntityActionState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByIsEntityActionState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISENTITYACTIONSTATE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsEntityActionState* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsEntityActionState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISENTITYACTIONSTATE_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsEntityActionState* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsEntityActionState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISENTITYACTIONSTATE_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
