#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueModifierModifyQueryOptionConfig; }

#define RPG_GAMECORE_ROGUEMODIFIERMODIFYQUERYOPTIONCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x207A24D0)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYQUERYOPTIONCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x207A24E0)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYQUERYOPTIONCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x207A2490)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierModifyQueryOptionConfig_TypeDefinitionIndex = 18126;

	class RogueModifierModifyQueryOptionConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYQUERYOPTIONCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierModifyQueryOptionConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierModifyQueryOptionConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYQUERYOPTIONCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierModifyQueryOptionConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierModifyQueryOptionConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYQUERYOPTIONCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
