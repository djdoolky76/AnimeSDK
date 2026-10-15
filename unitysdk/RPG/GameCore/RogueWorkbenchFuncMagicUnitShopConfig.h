#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueWorkbenchFuncBaseConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueWorkbenchFuncMagicUnitShopConfig; }

#define RPG_GAMECORE_ROGUEWORKBENCHFUNCMAGICUNITSHOPCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA189B0)
#define RPG_GAMECORE_ROGUEWORKBENCHFUNCMAGICUNITSHOPCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA189C0)
#define RPG_GAMECORE_ROGUEWORKBENCHFUNCMAGICUNITSHOPCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA18C40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueWorkbenchFuncMagicUnitShopConfig_TypeDefinitionIndex = 18029;

	class RogueWorkbenchFuncMagicUnitShopConfig : public ::RPG::GameCore::RogueWorkbenchFuncBaseConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEWORKBENCHFUNCMAGICUNITSHOPCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueWorkbenchFuncMagicUnitShopConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueWorkbenchFuncMagicUnitShopConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEWORKBENCHFUNCMAGICUNITSHOPCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueWorkbenchFuncMagicUnitShopConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueWorkbenchFuncMagicUnitShopConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEWORKBENCHFUNCMAGICUNITSHOPCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
