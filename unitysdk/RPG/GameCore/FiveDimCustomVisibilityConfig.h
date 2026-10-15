#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameCustomVisibilityConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimCustomVisibilityConfig; }

#define RPG_GAMECORE_FIVEDIMCUSTOMVISIBILITYCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6B76C0)
#define RPG_GAMECORE_FIVEDIMCUSTOMVISIBILITYCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6B7700)
#define RPG_GAMECORE_FIVEDIMCUSTOMVISIBILITYCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6B7660)

namespace RPG::GameCore
{
	class FiveDimCustomVisibilityConfig : public ::RPG::GameCore::LittleGameCustomVisibilityConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMCUSTOMVISIBILITYCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimCustomVisibilityConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimCustomVisibilityConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMCUSTOMVISIBILITYCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimCustomVisibilityConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimCustomVisibilityConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMCUSTOMVISIBILITYCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
