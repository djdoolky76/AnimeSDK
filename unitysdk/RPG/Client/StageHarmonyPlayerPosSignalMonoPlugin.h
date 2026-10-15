#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/StageHarmonyPlayerPosSignalMonoPlugin_PlayerType.h"
#include "unitysdk/RPG/Client/StageHarmonyPlayerPosSignalMonoPlugin_RegisterMode.h"
#include "unitysdk/RPG/Client/StageHarmonyPlayerPosSignalMonoPlugin_SignalType.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/IDOHKCEJPJP.h"
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_STAGEHARMONYPLAYERPOSSIGNALMONOPLUGIN_CTOR_OFFSET UNITYSDK_OFFSET(0xE10F5E0)
#define RPG_CLIENT_STAGEHARMONYPLAYERPOSSIGNALMONOPLUGIN_DUMP_OFFSET UNITYSDK_OFFSET(0xE10F040)
#define RPG_CLIENT_STAGEHARMONYPLAYERPOSSIGNALMONOPLUGIN_LOAD_OFFSET UNITYSDK_OFFSET(0xE10EDD0)
#define RPG_CLIENT_STAGEHARMONYPLAYERPOSSIGNALMONOPLUGIN_UNLOAD_OFFSET UNITYSDK_OFFSET(0xE10EFF0)

namespace RPG::Client
{
	class StageHarmonyPlayerPosSignalMonoPlugin
	{
	public:
		::RPG::Client::StageHarmonyPlayerPosSignalMonoPlugin_RegisterMode RegisterType; // 0x30
		::RPG::Client::StageHarmonyPlayerPosSignalMonoPlugin_PlayerType playerType; // 0x34
		::UnityEngine::Vector3 TargetPos; // 0x38
		::RPG::Client::StageHarmonyPlayerPosSignalMonoPlugin_SignalType signalType; // 0x44
		::System::Boolean UseLocalSpaceVolume; // 0x48
		::System::Byte _padding0[0x3];
		::System::Single Range; // 0x4C
		::System::String* Channle; // 0x50
		::UnityEngine::Transform* EditorTestHandle; // 0x58
		::System::Boolean ChannleNameInvalid; // 0x60
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEHARMONYPLAYERPOSSIGNALMONOPLUGIN_CTOR_OFFSET))(this);
		}

		::System::Void Load(::IDOHKCEJPJP a1)
		{
			return ((::System::Void(*)(::PVOID, ::IDOHKCEJPJP))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEHARMONYPLAYERPOSSIGNALMONOPLUGIN_LOAD_OFFSET))(this, a1);
		}

		::System::Void UnLoad(::IDOHKCEJPJP a1)
		{
			return ((::System::Void(*)(::PVOID, ::IDOHKCEJPJP))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEHARMONYPLAYERPOSSIGNALMONOPLUGIN_UNLOAD_OFFSET))(this, a1);
		}

		::System::Void Dump(::IDOHKCEJPJP a1)
		{
			return ((::System::Void(*)(::PVOID, ::IDOHKCEJPJP))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEHARMONYPLAYERPOSSIGNALMONOPLUGIN_DUMP_OFFSET))(this, a1);
		}

	};
}
