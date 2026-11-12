#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueModifierModifyWorkbenchMagicUnitShopConfig; }

#define RPG_GAMECORE_ROGUEMODIFIERMODIFYWORKBENCHMAGICUNITSHOPCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1EC2B020)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYWORKBENCHMAGICUNITSHOPCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1EC2B030)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYWORKBENCHMAGICUNITSHOPCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1EC2AFE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierModifyWorkbenchMagicUnitShopConfig_TypeDefinitionIndex = 18054;

	class RogueModifierModifyWorkbenchMagicUnitShopConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYWORKBENCHMAGICUNITSHOPCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierModifyWorkbenchMagicUnitShopConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierModifyWorkbenchMagicUnitShopConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYWORKBENCHMAGICUNITSHOPCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierModifyWorkbenchMagicUnitShopConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierModifyWorkbenchMagicUnitShopConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYWORKBENCHMAGICUNITSHOPCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
