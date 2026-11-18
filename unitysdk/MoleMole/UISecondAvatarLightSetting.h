#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector4.h"

#define MOLEMOLE_UISECONDAVATARLIGHTSETTING__CTOR_OFFSET UNITYSDK_OFFSET(0x16900A50)

namespace MoleMole
{
	inline static constexpr unsigned int UISecondAvatarLightSetting_TypeDefinitionIndex = 74887;

	class UISecondAvatarLightSetting : public ::System::Object
	{
	public:
		::UnityEngine::Vector2 HairShadowOffset; // 0x10
		::System::Boolean EnableHairShadowOffset; // 0x18
		::System::Boolean OverrideHairShadowLightDir; // 0x19
		::System::Boolean EnableLightAvatarPart; // 0x1A
		::System::Byte _padding0[0x1];
		::UnityEngine::Vector2 hairShadowLightDir; // 0x1C
		::UnityEngine::Vector4 LightAvatarPartRotOffset; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISECONDAVATARLIGHTSETTING__CTOR_OFFSET))(this);
		}
	};
}
