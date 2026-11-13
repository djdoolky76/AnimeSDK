#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByFromBattleViewModeChange; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYFROMBATTLEVIEWMODECHANGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1CE340D0)
#define RPG_GAMECORE_BYFROMBATTLEVIEWMODECHANGE_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1CE34250)
#define RPG_GAMECORE_BYFROMBATTLEVIEWMODECHANGE_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1CE34220)
#define RPG_GAMECORE_BYFROMBATTLEVIEWMODECHANGE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CE340E0)
#define RPG_GAMECORE_BYFROMBATTLEVIEWMODECHANGE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CE340A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByFromBattleViewModeChange_TypeDefinitionIndex = 22833;

	class ByFromBattleViewModeChange : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYFROMBATTLEVIEWMODECHANGE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByFromBattleViewModeChange* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByFromBattleViewModeChange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYFROMBATTLEVIEWMODECHANGE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByFromBattleViewModeChange* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByFromBattleViewModeChange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYFROMBATTLEVIEWMODECHANGE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByFromBattleViewModeChange* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByFromBattleViewModeChange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYFROMBATTLEVIEWMODECHANGE_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByFromBattleViewModeChange* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByFromBattleViewModeChange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYFROMBATTLEVIEWMODECHANGE_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
