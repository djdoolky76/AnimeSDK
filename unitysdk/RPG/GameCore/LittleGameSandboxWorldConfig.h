#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/LittleGameSandboxScope.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LittleGameSandboxExternalObjectConfig; }
namespace RPG::GameCore { class LittleGameSandboxGroupIsolationConfig; }
namespace RPG::GameCore { class LittleGameSandboxNavigationConfig; }
namespace RPG::GameCore { class LittleGameSandboxWorldConfig; }
namespace RPG::GameCore { class LittleGameSandboxWorldEntityConfig; }
namespace RPG::GameCore { class LittleGameSandboxWorldSystemConfig; }

#define RPG_GAMECORE_LITTLEGAMESANDBOXWORLDCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA28BC0)
#define RPG_GAMECORE_LITTLEGAMESANDBOXWORLDCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1EA28620)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameSandboxWorldConfig_TypeDefinitionIndex = 19100;

	class LittleGameSandboxWorldConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::LittleGameSandboxScope Scope; // 0x10
		::System::Byte _padding0[0x4];
		::RPG::GameCore::LittleGameSandboxWorldEntityConfig* Entities; // 0x18
		::RPG::GameCore::LittleGameSandboxGroupIsolationConfig* Groups; // 0x20
		::RPG::GameCore::LittleGameSandboxWorldSystemConfig* Systems; // 0x28
		::RPG::GameCore::LittleGameSandboxNavigationConfig* Navigation; // 0x30
		::RPG::GameCore::LittleGameSandboxExternalObjectConfig* ExternalObjects; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMESANDBOXWORLDCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameSandboxWorldConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameSandboxWorldConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMESANDBOXWORLDCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
