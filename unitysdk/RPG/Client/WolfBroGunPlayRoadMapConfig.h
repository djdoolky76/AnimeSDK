#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"
namespace System { class Object; }

#define RPG_CLIENT_WOLFBROGUNPLAYROADMAPCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0xE46FFE0)

namespace RPG::Client
{
	class WolfBroGunPlayRoadMapConfig : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::Boolean isBossMode; // 0x18
		::System::Byte _padding0[0x3];
		::System::Int32 bossHPBarCount; // 0x1C
		::System::Int32 bossHP; // 0x20
		::System::Int32 bossHP_Endless; // 0x24
		::System::Single bossKilledScore; // 0x28
		::System::Single timelineLength; // 0x2C
		::Il2CppArray<::System::Object*>* timelinePoints; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYROADMAPCONFIG_CTOR_OFFSET))(this);
		}

	};
}
