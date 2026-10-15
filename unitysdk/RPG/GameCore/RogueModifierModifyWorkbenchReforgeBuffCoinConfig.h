#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueModifierModifyWorkbenchReforgeBuffCoinConfig; }

#define RPG_GAMECORE_ROGUEMODIFIERMODIFYWORKBENCHREFORGEBUFFCOINCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA18F80)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYWORKBENCHREFORGEBUFFCOINCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA18F90)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYWORKBENCHREFORGEBUFFCOINCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA18F40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierModifyWorkbenchReforgeBuffCoinConfig_TypeDefinitionIndex = 17881;

	class RogueModifierModifyWorkbenchReforgeBuffCoinConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYWORKBENCHREFORGEBUFFCOINCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierModifyWorkbenchReforgeBuffCoinConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierModifyWorkbenchReforgeBuffCoinConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYWORKBENCHREFORGEBUFFCOINCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierModifyWorkbenchReforgeBuffCoinConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierModifyWorkbenchReforgeBuffCoinConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYWORKBENCHREFORGEBUFFCOINCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
