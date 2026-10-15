#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define RPG_CLIENT_MONOPAMSKINPROCESSCONTROLLER_CTOR_OFFSET UNITYSDK_OFFSET(0xD854B70)
#define RPG_CLIENT_MONOPAMSKINPROCESSCONTROLLER_GET_PAMPOSITION_OFFSET UNITYSDK_OFFSET(0xD854A30)
#define RPG_CLIENT_MONOPAMSKINPROCESSCONTROLLER_GET_PAMROTATION_OFFSET UNITYSDK_OFFSET(0xD854B10)

namespace RPG::Client
{
	class MonoPamSkinProcessController : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Vector3 _PostionOffset; // 0x18
		::UnityEngine::Quaternion _RotationOffset; // 0x24
		// static const ::System::Object _PROP_GROUP_ID; // 0x0
		// static const ::System::Object _PROP_INSTANCE_ID; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPAMSKINPROCESSCONTROLLER_CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_PamPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPAMSKINPROCESSCONTROLLER_GET_PAMPOSITION_OFFSET))(this);
		}

		::UnityEngine::Quaternion get_PamRotation()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPAMSKINPROCESSCONTROLLER_GET_PAMROTATION_OFFSET))(this);
		}

	};
}
