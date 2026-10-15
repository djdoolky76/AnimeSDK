#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByIsDirectKillBattle; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYISDIRECTKILLBATTLE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4E27A0)
#define RPG_GAMECORE_BYISDIRECTKILLBATTLE_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D4E2920)
#define RPG_GAMECORE_BYISDIRECTKILLBATTLE_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D4E28F0)
#define RPG_GAMECORE_BYISDIRECTKILLBATTLE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D4E27B0)
#define RPG_GAMECORE_BYISDIRECTKILLBATTLE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D4E2770)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsDirectKillBattle_TypeDefinitionIndex = 23055;

	class ByIsDirectKillBattle : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISDIRECTKILLBATTLE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByIsDirectKillBattle* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByIsDirectKillBattle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISDIRECTKILLBATTLE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByIsDirectKillBattle* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByIsDirectKillBattle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISDIRECTKILLBATTLE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsDirectKillBattle* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsDirectKillBattle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISDIRECTKILLBATTLE_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsDirectKillBattle* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsDirectKillBattle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISDIRECTKILLBATTLE_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
