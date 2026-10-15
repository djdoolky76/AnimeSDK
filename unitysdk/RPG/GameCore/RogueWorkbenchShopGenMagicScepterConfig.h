#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueWorkbenchShopGenMagicScepterConfig; }

#define RPG_GAMECORE_ROGUEWORKBENCHSHOPGENMAGICSCEPTERCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA467E0)
#define RPG_GAMECORE_ROGUEWORKBENCHSHOPGENMAGICSCEPTERCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA467A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueWorkbenchShopGenMagicScepterConfig_TypeDefinitionIndex = 18026;

	class RogueWorkbenchShopGenMagicScepterConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEWORKBENCHSHOPGENMAGICSCEPTERCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueWorkbenchShopGenMagicScepterConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueWorkbenchShopGenMagicScepterConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEWORKBENCHSHOPGENMAGICSCEPTERCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
