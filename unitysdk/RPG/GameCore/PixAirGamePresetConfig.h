#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PixAirGamePresetConfig; }
namespace RPG::GameCore { class PixAirPlanePresetConfig; }

#define RPG_GAMECORE_PIXAIRGAMEPRESETCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D91C0E0)
#define RPG_GAMECORE_PIXAIRGAMEPRESETCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D91BFC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PixAirGamePresetConfig_TypeDefinitionIndex = 16248;

	class PixAirGamePresetConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::PixAirPlanePresetConfig* Player; // 0x10
		::Il2CppArray<::RPG::GameCore::PixAirPlanePresetConfig*>* Enemies; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PIXAIRGAMEPRESETCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PixAirGamePresetConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PixAirGamePresetConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PIXAIRGAMEPRESETCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
