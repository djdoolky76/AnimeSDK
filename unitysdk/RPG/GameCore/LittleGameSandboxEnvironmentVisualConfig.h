#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LittleGameSandboxEnvironmentVisualConfig; }
namespace System { class String; }

#define RPG_GAMECORE_LITTLEGAMESANDBOXENVIRONMENTVISUALCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA27230)
#define RPG_GAMECORE_LITTLEGAMESANDBOXENVIRONMENTVISUALCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1EA27100)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameSandboxEnvironmentVisualConfig_TypeDefinitionIndex = 19110;

	class LittleGameSandboxEnvironmentVisualConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* EnvironmentProfilePath; // 0x10
		::System::String* SkyboxPath; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMESANDBOXENVIRONMENTVISUALCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameSandboxEnvironmentVisualConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameSandboxEnvironmentVisualConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMESANDBOXENVIRONMENTVISUALCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
