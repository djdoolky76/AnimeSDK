#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class HoyoTagContainer; }
namespace RPG::GameCore { class MapRotationGlobalTagConfig; }

#define RPG_GAMECORE_MAPROTATIONGLOBALTAGCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D82FFD0)
#define RPG_GAMECORE_MAPROTATIONGLOBALTAGCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D82FE50)

namespace RPG::GameCore
{
	class MapRotationGlobalTagConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::HoyoTagContainer* NoHideNPCTag; // 0x10
		::RPG::GameCore::HoyoTagContainer* NoRotateBlockTag; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPROTATIONGLOBALTAGCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MapRotationGlobalTagConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MapRotationGlobalTagConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPROTATIONGLOBALTAGCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
