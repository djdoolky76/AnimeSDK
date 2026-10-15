#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueWorkbenchShopGenMagicUnitConfig; }

#define RPG_GAMECORE_ROGUEWORKBENCHSHOPGENMAGICUNITCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA18F90)
#define RPG_GAMECORE_ROGUEWORKBENCHSHOPGENMAGICUNITCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA18F50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueWorkbenchShopGenMagicUnitConfig_TypeDefinitionIndex = 18028;

	class RogueWorkbenchShopGenMagicUnitConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEWORKBENCHSHOPGENMAGICUNITCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueWorkbenchShopGenMagicUnitConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueWorkbenchShopGenMagicUnitConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEWORKBENCHSHOPGENMAGICUNITCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
