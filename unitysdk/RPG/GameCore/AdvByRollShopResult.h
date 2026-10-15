#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
#include "unitysdk/RPG/GameCore/RollShopGroupType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdvByRollShopResult; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_ADVBYROLLSHOPRESULT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3983C0)
#define RPG_GAMECORE_ADVBYROLLSHOPRESULT_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D398600)
#define RPG_GAMECORE_ADVBYROLLSHOPRESULT_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D3985D0)
#define RPG_GAMECORE_ADVBYROLLSHOPRESULT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D3983D0)
#define RPG_GAMECORE_ADVBYROLLSHOPRESULT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D398390)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvByRollShopResult_TypeDefinitionIndex = 20574;

	class AdvByRollShopResult : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::RollShopGroupType TargetResult; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYROLLSHOPRESULT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvByRollShopResult* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvByRollShopResult*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYROLLSHOPRESULT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvByRollShopResult* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvByRollShopResult*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYROLLSHOPRESULT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByRollShopResult* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByRollShopResult*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYROLLSHOPRESULT_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByRollShopResult* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByRollShopResult*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYROLLSHOPRESULT_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
