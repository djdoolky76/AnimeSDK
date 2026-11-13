#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByBattleHasCertainResult; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYBATTLEHASCERTAINRESULT_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF60760)
#define RPG_GAMECORE_BYBATTLEHASCERTAINRESULT_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DF608E0)
#define RPG_GAMECORE_BYBATTLEHASCERTAINRESULT_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DF608B0)
#define RPG_GAMECORE_BYBATTLEHASCERTAINRESULT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DF60770)
#define RPG_GAMECORE_BYBATTLEHASCERTAINRESULT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DF60730)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByBattleHasCertainResult_TypeDefinitionIndex = 22989;

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
