#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::Client { class TransformScreenAdapter; }

#define RPG_CLIENT_EFFECTSCREENADAPTERMONOPLUGIN_CTOR_OFFSET UNITYSDK_OFFSET(0xCD186E0)

namespace RPG::Client
{
	class EffectScreenAdapterMonoPlugin
	{
	public:
		::System::Boolean FollowMainCamera; // 0x30
		::System::Boolean UpdatePerFrame; // 0x31
		::System::Byte _padding0[0x2];
		::UnityEngine::Vector3 OverridePosition; // 0x34
		::UnityEngine::Vector3 OverrideRotation; // 0x40
		::UnityEngine::Vector3 OverrideScale; // 0x4C
		::RPG::Client::TransformScreenAdapter* ScreenAdapter; // 0x58
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECTSCREENADAPTERMONOPLUGIN_CTOR_OFFSET))(this);
		}

	};
}
