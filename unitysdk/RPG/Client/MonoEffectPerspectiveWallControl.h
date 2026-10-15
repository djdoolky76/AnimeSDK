#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Renderer; }

#define RPG_CLIENT_MONOEFFECTPERSPECTIVEWALLCONTROL_CTOR_OFFSET UNITYSDK_OFFSET(0xD7C2A50)
#define RPG_CLIENT_MONOEFFECTPERSPECTIVEWALLCONTROL_UPDATE_OFFSET UNITYSDK_OFFSET(0xD7C27D0)

namespace RPG::Client
{
	class MonoEffectPerspectiveWallControl : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Renderer* TargetRenderer; // 0x18
		::UnityEngine::GameObject* target1; // 0x20
		::System::Single target1PositionOffset; // 0x28
		::System::Byte _padding0[0x4];
		::UnityEngine::GameObject* target2; // 0x30
		::System::Single target2PositionOffset; // 0x38
		::System::Single Alpha; // 0x3C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPERSPECTIVEWALLCONTROL_CTOR_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPERSPECTIVEWALLCONTROL_UPDATE_OFFSET))(this);
		}

	};
}
