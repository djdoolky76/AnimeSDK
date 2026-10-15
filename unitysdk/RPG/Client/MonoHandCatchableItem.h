#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace System { class String; }

#define RPG_CLIENT_MONOHANDCATCHABLEITEM_CTOR_OFFSET UNITYSDK_OFFSET(0xD834980)

namespace RPG::Client
{
	class MonoHandCatchableItem : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::String* itemPrefabPath; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOHANDCATCHABLEITEM_CTOR_OFFSET))(this);
		}

	};
}
