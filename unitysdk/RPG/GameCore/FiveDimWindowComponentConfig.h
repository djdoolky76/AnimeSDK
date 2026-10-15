#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimWindowComponentConfig; }
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMWINDOWCOMPONENTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6E2EE0)
#define RPG_GAMECORE_FIVEDIMWINDOWCOMPONENTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6E2EF0)
#define RPG_GAMECORE_FIVEDIMWINDOWCOMPONENTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6E2E10)

namespace RPG::GameCore
{
	class FiveDimWindowComponentConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::System::String* BgPath; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMWINDOWCOMPONENTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimWindowComponentConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimWindowComponentConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMWINDOWCOMPONENTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimWindowComponentConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimWindowComponentConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMWINDOWCOMPONENTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
