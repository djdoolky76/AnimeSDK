#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueModifierUseMiracleByEnterCellTypeConfig; }

#define RPG_GAMECORE_ROGUEMODIFIERUSEMIRACLEBYENTERCELLTYPECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA1AC40)
#define RPG_GAMECORE_ROGUEMODIFIERUSEMIRACLEBYENTERCELLTYPECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA1AC50)
#define RPG_GAMECORE_ROGUEMODIFIERUSEMIRACLEBYENTERCELLTYPECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA1AC00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierUseMiracleByEnterCellTypeConfig_TypeDefinitionIndex = 17936;

	class RogueModifierUseMiracleByEnterCellTypeConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERUSEMIRACLEBYENTERCELLTYPECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierUseMiracleByEnterCellTypeConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierUseMiracleByEnterCellTypeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERUSEMIRACLEBYENTERCELLTYPECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierUseMiracleByEnterCellTypeConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierUseMiracleByEnterCellTypeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERUSEMIRACLEBYENTERCELLTYPECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
