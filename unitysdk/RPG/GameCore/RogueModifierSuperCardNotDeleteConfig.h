#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueModifierSuperCardNotDeleteConfig; }

#define RPG_GAMECORE_ROGUEMODIFIERSUPERCARDNOTDELETECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA1A940)
#define RPG_GAMECORE_ROGUEMODIFIERSUPERCARDNOTDELETECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA1A950)
#define RPG_GAMECORE_ROGUEMODIFIERSUPERCARDNOTDELETECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA1A900)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierSuperCardNotDeleteConfig_TypeDefinitionIndex = 17837;

	class RogueModifierSuperCardNotDeleteConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERSUPERCARDNOTDELETECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierSuperCardNotDeleteConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierSuperCardNotDeleteConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERSUPERCARDNOTDELETECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierSuperCardNotDeleteConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierSuperCardNotDeleteConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERSUPERCARDNOTDELETECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
