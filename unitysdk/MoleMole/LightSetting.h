#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

#define MOLEMOLE_LIGHTSETTING__CTOR_OFFSET UNITYSDK_OFFSET(0x11926C10)

namespace MoleMole
{
	inline static constexpr unsigned int LightSetting_TypeDefinitionIndex = 90714;

	class LightSetting : public ::System::Object
	{
	public:
		::UnityEngine::Color avatarLightColor; // 0x10
		::UnityEngine::Color color; // 0x20
		::System::Single intensity; // 0x30
		::System::Single range; // 0x34
		::System::Single avatarLightMultiplier; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LIGHTSETTING__CTOR_OFFSET))(this);
		}
	};
}
