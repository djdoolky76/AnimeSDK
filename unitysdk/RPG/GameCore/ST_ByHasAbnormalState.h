#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdventureCharacterUnitState.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ST_ByHasAbnormalState; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_ST_BYHASABNORMALSTATE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA76DB0)
#define RPG_GAMECORE_ST_BYHASABNORMALSTATE_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DA76F80)
#define RPG_GAMECORE_ST_BYHASABNORMALSTATE_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DA76F50)
#define RPG_GAMECORE_ST_BYHASABNORMALSTATE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA76DC0)
#define RPG_GAMECORE_ST_BYHASABNORMALSTATE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA76D80)

namespace RPG::GameCore
{
	class ST_ByHasAbnormalState : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::AdventureCharacterUnitState>* States; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYHASABNORMALSTATE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ST_ByHasAbnormalState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ST_ByHasAbnormalState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYHASABNORMALSTATE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ST_ByHasAbnormalState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ST_ByHasAbnormalState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYHASABNORMALSTATE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ByHasAbnormalState* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ByHasAbnormalState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYHASABNORMALSTATE_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ByHasAbnormalState* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ByHasAbnormalState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYHASABNORMALSTATE_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
