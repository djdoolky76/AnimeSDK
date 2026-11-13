#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/LittleGameSandboxScope.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LittleGameSandboxEnvironmentVisualConfig; }
namespace RPG::GameCore { class LittleGameSandboxPostProcessConfig; }
namespace RPG::GameCore { class LittleGameSandboxRenderingConfig; }

#define RPG_GAMECORE_LITTLEGAMESANDBOXRENDERINGCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1F268750)
#define RPG_GAMECORE_LITTLEGAMESANDBOXRENDERINGCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1F268600)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameSandboxRenderingConfig_TypeDefinitionIndex = 19109;

	class LittleGameSandboxRenderingConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::LittleGameSandboxScope Scope; // 0x10
		::System::Byte _padding0[0x4];
		::RPG::GameCore::LittleGameSandboxEnvironmentVisualConfig* Environment; // 0x18
		::RPG::GameCore::LittleGameSandboxPostProcessConfig* PostProcess; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMESANDBOXRENDERINGCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameSandboxRenderingConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameSandboxRenderingConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMESANDBOXRENDERINGCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
