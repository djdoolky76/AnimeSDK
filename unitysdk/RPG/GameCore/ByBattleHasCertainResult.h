#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByBattleHasCertainResult; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYBATTLEHASCERTAINRESULT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D459C90)
#define RPG_GAMECORE_BYBATTLEHASCERTAINRESULT_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D459E10)
#define RPG_GAMECORE_BYBATTLEHASCERTAINRESULT_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D459DE0)
#define RPG_GAMECORE_BYBATTLEHASCERTAINRESULT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D459CA0)
#define RPG_GAMECORE_BYBATTLEHASCERTAINRESULT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D459C60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByBattleHasCertainResult_TypeDefinitionIndex = 22574;

	class ByBattleHasCertainResult : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYBATTLEHASCERTAINRESULT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByBattleHasCertainResult* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByBattleHasCertainResult*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYBATTLEHASCERTAINRESULT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByBattleHasCertainResult* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByBattleHasCertainResult*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYBATTLEHASCERTAINRESULT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByBattleHasCertainResult* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByBattleHasCertainResult*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYBATTLEHASCERTAINRESULT_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByBattleHasCertainResult* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByBattleHasCertainResult*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYBATTLEHASCERTAINRESULT_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
