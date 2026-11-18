#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define MOLEMOLE_ANIMATIONTRIGGERVOLUME_TRIGGERVOLUME__CTOR_OFFSET UNITYSDK_OFFSET(0xFA85660)

namespace MoleMole
{
	inline static constexpr unsigned int AnimationTriggerVolume_TriggerVolume_TypeDefinitionIndex = 63099;

	class AnimationTriggerVolume_TriggerVolume : public ::System::Object
	{
	public:
		::UnityEngine::Vector3 center; // 0x10
		::UnityEngine::Vector3 rotation; // 0x1C
		::UnityEngine::Vector3 size; // 0x28
		::UnityEngine::Color gizmoColor; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ANIMATIONTRIGGERVOLUME_TRIGGERVOLUME__CTOR_OFFSET))(this);
		}
	};
}
