#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class GameObject; }

#define MOLEMOLE_ANIMATIONTRIGGERVOLUME_TARGETINITIALPOSE__CTOR_OFFSET UNITYSDK_OFFSET(0x11A35120)

namespace MoleMole
{
	inline static constexpr unsigned int AnimationTriggerVolume_TargetInitialPose_TypeDefinitionIndex = 63100;

	class AnimationTriggerVolume_TargetInitialPose : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* target; // 0x10
		::UnityEngine::Vector3 localPosition; // 0x18
		::UnityEngine::Quaternion localRotation; // 0x24
		::UnityEngine::Vector3 localScale; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ANIMATIONTRIGGERVOLUME_TARGETINITIALPOSE__CTOR_OFFSET))(this);
		}
	};
}
