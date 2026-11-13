#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/LittleGameSandboxVolumePriority.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LittleGameSandboxPostProcessConfig; }
namespace System { class String; }

#define RPG_GAMECORE_LITTLEGAMESANDBOXPOSTPROCESSCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1F2682F0)
#define RPG_GAMECORE_LITTLEGAMESANDBOXPOSTPROCESSCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1F2680E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameSandboxPostProcessConfig_TypeDefinitionIndex = 19111;

	class LittleGameSandboxPostProcessConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Boolean Enabled; // 0x10
		::System::Byte _padding0[0x7];
		::System::String* VolumeProfilePath; // 0x18
		::RPG::GameCore::LittleGameSandboxVolumePriority Priority; // 0x20
		::System::Boolean EnableMiniGamePPEffect; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMESANDBOXPOSTPROCESSCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameSandboxPostProcessConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameSandboxPostProcessConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMESANDBOXPOSTPROCESSCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
