#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByComparePropAnimState; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_BYCOMPAREPROPANIMSTATE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D49BA20)
#define RPG_GAMECORE_BYCOMPAREPROPANIMSTATE_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D49BC60)
#define RPG_GAMECORE_BYCOMPAREPROPANIMSTATE_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D49BC10)
#define RPG_GAMECORE_BYCOMPAREPROPANIMSTATE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D49BA50)
#define RPG_GAMECORE_BYCOMPAREPROPANIMSTATE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D49B9D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByComparePropAnimState_TypeDefinitionIndex = 21959;

	class ByComparePropAnimState : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::String* State; // 0x20
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREPROPANIMSTATE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByComparePropAnimState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByComparePropAnimState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREPROPANIMSTATE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByComparePropAnimState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByComparePropAnimState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREPROPANIMSTATE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByComparePropAnimState* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByComparePropAnimState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREPROPANIMSTATE_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByComparePropAnimState* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByComparePropAnimState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREPROPANIMSTATE_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
