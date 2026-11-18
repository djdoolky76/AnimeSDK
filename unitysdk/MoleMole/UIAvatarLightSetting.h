#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIAvatarLightChangeSettings.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine { class Cubemap; }

#define MOLEMOLE_UIAVATARLIGHTSETTING__CTOR_OFFSET UNITYSDK_OFFSET(0x1A140FB0)

namespace MoleMole
{
	inline static constexpr unsigned int UIAvatarLightSetting_TypeDefinitionIndex = 89569;

	class UIAvatarLightSetting : public ::System::Object
	{
	public:
		::MoleMole::UIAvatarLightChangeSettings ChangeSettings; // 0x10
		::UnityEngine::Cubemap* ReflectionCube; // 0x28
		::System::Boolean EnableLightAvatarPart; // 0x30
		::System::Boolean unlockLightX; // 0x31
		::System::Boolean PointLight; // 0x32
		::System::Byte _padding0[0x1];
		::UnityEngine::Vector3 PositionOffset; // 0x34
		::UnityEngine::Color GIColor; // 0x40
		::UnityEngine::Vector3 MainPageLightRotOffset; // 0x50
		::UnityEngine::Vector2 HairShadowOffset; // 0x5C
		::System::Boolean OverrideHairShadowLightDir; // 0x64
		::System::Boolean EnableHairShadowOffset; // 0x65
		::System::Byte _padding1[0x2];
		::UnityEngine::Vector4 LightAvatarPartRotOffset; // 0x68
		::System::Single Range; // 0x78
		::UnityEngine::Vector3 LightRotOffset; // 0x7C
		::System::Single LightIntensity; // 0x88
		::System::Single ReflectionCubeRotation; // 0x8C
		::UnityEngine::Vector2 hairShadowLightDir; // 0x90
		::UnityEngine::Color LightColor; // 0x98
		::System::Single CommonYRot; // 0xA8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARLIGHTSETTING__CTOR_OFFSET))(this);
		}
	};
}
