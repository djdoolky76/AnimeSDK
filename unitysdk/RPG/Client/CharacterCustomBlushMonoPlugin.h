#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::Client { class BlushLockedTransformEntry; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_CHARACTERCUSTOMBLUSHMONOPLUGIN_CTOR_OFFSET UNITYSDK_OFFSET(0xC9C7AB0)

namespace RPG::Client
{
	inline static constexpr unsigned int CharacterCustomBlushMonoPlugin_TypeDefinitionIndex = 70263;

	class CharacterCustomBlushMonoPlugin
	{
	public:
		::UnityEngine::GameObject* BodyMask; // 0x30
		::System::Int32 MaterialIndex; // 0x38
		::System::Byte _padding0[0x4];
		::UnityEngine::Transform* Blush1; // 0x40
		::UnityEngine::Transform* Blush2; // 0x48
		::System::Single BlushClipMultiplier; // 0x50
		::System::Byte _padding1[0x4];
		::Il2CppArray<::RPG::Client::BlushLockedTransformEntry*>* LockedTransforms; // 0x58
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERCUSTOMBLUSHMONOPLUGIN_CTOR_OFFSET))(this);
		}

	};
}
