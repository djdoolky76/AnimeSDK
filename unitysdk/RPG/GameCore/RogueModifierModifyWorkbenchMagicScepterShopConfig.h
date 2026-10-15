#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueModifierModifyWorkbenchMagicScepterShopConfig; }

#define RPG_GAMECORE_ROGUEMODIFIERMODIFYWORKBENCHMAGICSCEPTERSHOPCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9EB620)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYWORKBENCHMAGICSCEPTERSHOPCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9EB630)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYWORKBENCHMAGICSCEPTERSHOPCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9EB5E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierModifyWorkbenchMagicScepterShopConfig_TypeDefinitionIndex = 17884;

	class RogueModifierModifyWorkbenchMagicScepterShopConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYWORKBENCHMAGICSCEPTERSHOPCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierModifyWorkbenchMagicScepterShopConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierModifyWorkbenchMagicScepterShopConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYWORKBENCHMAGICSCEPTERSHOPCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierModifyWorkbenchMagicScepterShopConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierModifyWorkbenchMagicScepterShopConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYWORKBENCHMAGICSCEPTERSHOPCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
