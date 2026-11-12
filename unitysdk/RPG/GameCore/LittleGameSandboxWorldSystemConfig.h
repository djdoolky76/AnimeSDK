#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LittleGameSandboxWorldSystemConfig; }

#define RPG_GAMECORE_LITTLEGAMESANDBOXWORLDSYSTEMCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA29020)
#define RPG_GAMECORE_LITTLEGAMESANDBOXWORLDSYSTEMCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1EA28E90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameSandboxWorldSystemConfig_TypeDefinitionIndex = 19103;

	class LittleGameSandboxWorldSystemConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Boolean DisableMunicipal; // 0x10
		::System::Boolean DisableCityAtmosphere; // 0x11
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMESANDBOXWORLDSYSTEMCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameSandboxWorldSystemConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameSandboxWorldSystemConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMESANDBOXWORLDSYSTEMCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
