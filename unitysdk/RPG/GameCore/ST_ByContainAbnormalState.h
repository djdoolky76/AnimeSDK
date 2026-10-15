#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdventureCharacterUnitState.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ST_ByContainAbnormalState; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_ST_BYCONTAINABNORMALSTATE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA73620)
#define RPG_GAMECORE_ST_BYCONTAINABNORMALSTATE_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DA737F0)
#define RPG_GAMECORE_ST_BYCONTAINABNORMALSTATE_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DA737C0)
#define RPG_GAMECORE_ST_BYCONTAINABNORMALSTATE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA73630)
#define RPG_GAMECORE_ST_BYCONTAINABNORMALSTATE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA735F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_ByContainAbnormalState_TypeDefinitionIndex = 20085;

	class ST_ByContainAbnormalState : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::AdventureCharacterUnitState>* States; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYCONTAINABNORMALSTATE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ST_ByContainAbnormalState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ST_ByContainAbnormalState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYCONTAINABNORMALSTATE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ST_ByContainAbnormalState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ST_ByContainAbnormalState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYCONTAINABNORMALSTATE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ByContainAbnormalState* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ByContainAbnormalState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYCONTAINABNORMALSTATE_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ByContainAbnormalState* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ByContainAbnormalState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYCONTAINABNORMALSTATE_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
