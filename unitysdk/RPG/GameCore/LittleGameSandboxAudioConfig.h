#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/LittleGameSandboxAudioListenerMode.h"
#include "unitysdk/RPG/GameCore/LittleGameSandboxScope.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LittleGameSandboxAudioConfig; }
namespace System { class String; }

#define RPG_GAMECORE_LITTLEGAMESANDBOXAUDIOCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1F266BB0)
#define RPG_GAMECORE_LITTLEGAMESANDBOXAUDIOCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1F2668B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameSandboxAudioConfig_TypeDefinitionIndex = 19112;

	class LittleGameSandboxAudioConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::LittleGameSandboxScope Scope; // 0x10
		::System::Byte _padding0[0x4];
		::System::String* StateGroup; // 0x18
		::System::String* EnterState; // 0x20
		::System::String* ExitState; // 0x28
		::Il2CppArray<::System::String*>* EnterEvents; // 0x30
		::Il2CppArray<::System::String*>* ExitEvents; // 0x38
		::RPG::GameCore::LittleGameSandboxAudioListenerMode ListenerMode; // 0x40
		::System::Single ListenerMaxDistance; // 0x44
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMESANDBOXAUDIOCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameSandboxAudioConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameSandboxAudioConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMESANDBOXAUDIOCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
