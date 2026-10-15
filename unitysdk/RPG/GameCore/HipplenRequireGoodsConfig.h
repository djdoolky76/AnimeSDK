#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/HipplenPickingGoodsDisplayType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class HipplenRequireGoodsConfig; }

#define RPG_GAMECORE_HIPPLENREQUIREGOODSCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D76F810)
#define RPG_GAMECORE_HIPPLENREQUIREGOODSCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D76F650)

namespace RPG::GameCore
{
	class HipplenRequireGoodsConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::HipplenPickingGoodsDisplayType DisplayType; // 0x10
		::System::Single DisplayParam; // 0x14
		::System::UInt32 GoodsID; // 0x18
		::System::UInt32 Amount; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIPPLENREQUIREGOODSCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::HipplenRequireGoodsConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::HipplenRequireGoodsConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIPPLENREQUIREGOODSCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
