#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"
namespace System { class Object; }
namespace System { class String; }

#define RPG_CLIENT_MATERIALGROUPASSET_CTOR_OFFSET UNITYSDK_OFFSET(0xD5D53D0)

namespace RPG::Client
{
	class MaterialGroupAsset : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::String* groupName; // 0x18
		::Il2CppArray<::System::Object*>* entries; // 0x20
		::System::Boolean useOriginalTexture; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALGROUPASSET_CTOR_OFFSET))(this);
		}

	};
}
