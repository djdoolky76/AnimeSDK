#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueWorkbenchFuncBaseConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueWorkbenchFuncMagicScepterShopConfig; }

#define RPG_GAMECORE_ROGUEWORKBENCHFUNCMAGICSCEPTERSHOPCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA18990)
#define RPG_GAMECORE_ROGUEWORKBENCHFUNCMAGICSCEPTERSHOPCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA189A0)
#define RPG_GAMECORE_ROGUEWORKBENCHFUNCMAGICSCEPTERSHOPCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA18C00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueWorkbenchFuncMagicScepterShopConfig_TypeDefinitionIndex = 18027;

	class RogueWorkbenchFuncMagicScepterShopConfig : public ::RPG::GameCore::RogueWorkbenchFuncBaseConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEWORKBENCHFUNCMAGICSCEPTERSHOPCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueWorkbenchFuncMagicScepterShopConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueWorkbenchFuncMagicScepterShopConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEWORKBENCHFUNCMAGICSCEPTERSHOPCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueWorkbenchFuncMagicScepterShopConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueWorkbenchFuncMagicScepterShopConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEWORKBENCHFUNCMAGICSCEPTERSHOPCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
