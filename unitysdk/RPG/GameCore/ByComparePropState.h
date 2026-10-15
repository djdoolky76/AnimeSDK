#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
#include "unitysdk/RPG/GameCore/PropState.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByComparePropState; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPAREPROPSTATE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4CB960)
#define RPG_GAMECORE_BYCOMPAREPROPSTATE_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D4CBB70)
#define RPG_GAMECORE_BYCOMPAREPROPSTATE_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D4CBB40)
#define RPG_GAMECORE_BYCOMPAREPROPSTATE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D4CB970)
#define RPG_GAMECORE_BYCOMPAREPROPSTATE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D4CB930)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByComparePropState_TypeDefinitionIndex = 20318;

	class ByComparePropState : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::PropState State; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREPROPSTATE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByComparePropState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByComparePropState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREPROPSTATE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByComparePropState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByComparePropState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREPROPSTATE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByComparePropState* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByComparePropState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREPROPSTATE_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByComparePropState* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByComparePropState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREPROPSTATE_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
