#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ElfDialogTipConfig; }
namespace System { class String; }

#define RPG_GAMECORE_ELFDIALOGTIPCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D635300)
#define RPG_GAMECORE_ELFDIALOGTIPCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6350B0)

namespace RPG::GameCore
{
	class ElfDialogTipConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* CookingBusyTip; // 0x10
		::System::String* CookingIdleTip; // 0x18
		::System::String* WaiterBusyTip; // 0x20
		::System::String* HeadWaiterBusyTip; // 0x28
		::System::String* WaiterClickTip; // 0x30
		::System::String* DropFoodTip; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFDIALOGTIPCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ElfDialogTipConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ElfDialogTipConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFDIALOGTIPCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
