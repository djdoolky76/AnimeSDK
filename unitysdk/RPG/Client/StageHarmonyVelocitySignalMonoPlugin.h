#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/StageHarmonyVelocitySignalMonoPlugin_VelocitySignalType.h"
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_STAGEHARMONYVELOCITYSIGNALMONOPLUGIN_CTOR_OFFSET UNITYSDK_OFFSET(0xE11CE70)

namespace RPG::Client
{
	inline static constexpr unsigned int StageHarmonyVelocitySignalMonoPlugin_TypeDefinitionIndex = 71005;

	class StageHarmonyVelocitySignalMonoPlugin
	{
	public:
		::System::String* Channel; // 0x30
		::UnityEngine::Transform* GOTransform; // 0x38
		::RPG::Client::StageHarmonyVelocitySignalMonoPlugin_VelocitySignalType VelocitySignalMode; // 0x40
		::System::Boolean AbsValue; // 0x44
		::System::Boolean ChannleNameInvalid; // 0x45
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEHARMONYVELOCITYSIGNALMONOPLUGIN_CTOR_OFFSET))(this);
		}

	};
}
