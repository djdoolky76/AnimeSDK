#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ST_ByForceExitCombat; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_ST_BYFORCEEXITCOMBAT_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA48B90)
#define RPG_GAMECORE_ST_BYFORCEEXITCOMBAT_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DA48D10)
#define RPG_GAMECORE_ST_BYFORCEEXITCOMBAT_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DA48CE0)
#define RPG_GAMECORE_ST_BYFORCEEXITCOMBAT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA48BA0)
#define RPG_GAMECORE_ST_BYFORCEEXITCOMBAT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA48B60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_ByForceExitCombat_TypeDefinitionIndex = 20091;

	class ST_ByForceExitCombat : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYFORCEEXITCOMBAT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ST_ByForceExitCombat* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ST_ByForceExitCombat*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYFORCEEXITCOMBAT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ST_ByForceExitCombat* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ST_ByForceExitCombat*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYFORCEEXITCOMBAT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ByForceExitCombat* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ByForceExitCombat*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYFORCEEXITCOMBAT_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ByForceExitCombat* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ByForceExitCombat*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYFORCEEXITCOMBAT_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
