#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace RPG::Client { class MonoAutoMoveAndRotate_Vector3andSpace; }

#define RPG_CLIENT_MONOAUTOMOVEANDROTATE_CTOR_OFFSET UNITYSDK_OFFSET(0xD730B70)
#define RPG_CLIENT_MONOAUTOMOVEANDROTATE_START_OFFSET UNITYSDK_OFFSET(0xD730890)
#define RPG_CLIENT_MONOAUTOMOVEANDROTATE_UPDATE_OFFSET UNITYSDK_OFFSET(0xD7308E0)

namespace RPG::Client
{
	class MonoAutoMoveAndRotate : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean isPlaying; // 0x18
		::System::Byte _padding0[0x7];
		::RPG::Client::MonoAutoMoveAndRotate_Vector3andSpace* moveUnitsPerSecond; // 0x20
		::RPG::Client::MonoAutoMoveAndRotate_Vector3andSpace* rotateDegreesPerSecond; // 0x28
		::System::Boolean ignoreTimescale; // 0x30
		::System::Byte _padding1[0x3];
		::System::Single OBNGONPGEJD; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOAUTOMOVEANDROTATE_CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOAUTOMOVEANDROTATE_START_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOAUTOMOVEANDROTATE_UPDATE_OFFSET))(this);
		}

	};
}
