#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/LittleGameSandboxScope.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LittleGameSandboxPlayerConfig; }

#define RPG_GAMECORE_LITTLEGAMESANDBOXPLAYERCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA282A0)
#define RPG_GAMECORE_LITTLEGAMESANDBOXPLAYERCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1EA280E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameSandboxPlayerConfig_TypeDefinitionIndex = 19106;

	class LittleGameSandboxPlayerConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::LittleGameSandboxScope Scope; // 0x10
		::System::Boolean HideLocalPlayer; // 0x14
		::System::Boolean DisableRootMotion; // 0x15
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMESANDBOXPLAYERCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameSandboxPlayerConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameSandboxPlayerConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMESANDBOXPLAYERCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
