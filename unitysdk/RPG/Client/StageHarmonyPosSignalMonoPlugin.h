#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EnviromentSystem/EnviromentPropertiesID.h"
#include "unitysdk/RPG/Client/StageHarmonyPosSignalMonoPlugin_SignalType.h"
#include "unitysdk/RPG/GameCore/EnviromentControlPriority.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }

#define RPG_CLIENT_STAGEHARMONYPOSSIGNALMONOPLUGIN_CTOR_OFFSET UNITYSDK_OFFSET(0xE111330)

namespace RPG::Client
{
	class StageHarmonyPosSignalMonoPlugin
	{
	public:
		::RPG::Client::StageHarmonyPosSignalMonoPlugin_SignalType signalType; // 0x30
		::System::Boolean UseLocalSpaceVolume; // 0x34
		::System::Byte _padding0[0x3];
		::System::Single Range; // 0x38
		::System::Byte _padding1[0x4];
		::System::String* Channle; // 0x40
		::UnityEngine::Vector3 TargetPos; // 0x48
		::System::Boolean ChannleNameInvalid; // 0x54
		::System::Byte _padding2[0x3];
		::EnviromentSystem::EnviromentPropertiesID EnvPropertyID; // 0x58
		::System::Byte _padding3[0x4];
		::UnityEngine::AnimationCurve* SignalMappingCurve; // 0x60
		::RPG::GameCore::EnviromentControlPriority Priority; // 0x68
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEHARMONYPOSSIGNALMONOPLUGIN_CTOR_OFFSET))(this);
		}

	};
}
