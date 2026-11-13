#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LockSource.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/LittleGameSandboxScope.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LittleGameSandboxGameplayConfig; }

#define RPG_GAMECORE_LITTLEGAMESANDBOXGAMEPLAYCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1F2673A0)
#define RPG_GAMECORE_LITTLEGAMESANDBOXGAMEPLAYCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1F267180)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameSandboxGameplayConfig_TypeDefinitionIndex = 19108;

	class LittleGameSandboxGameplayConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::LittleGameSandboxScope Scope; // 0x10
		::System::Byte _padding0[0x4];
		::Il2CppArray<::RPG::Client::LockSource>* LockSources; // 0x18
		::System::Boolean DisableCameraProtect; // 0x20
		::System::Boolean StopMissionTalkOnAcquire; // 0x21
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMESANDBOXGAMEPLAYCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameSandboxGameplayConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameSandboxGameplayConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMESANDBOXGAMEPLAYCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
