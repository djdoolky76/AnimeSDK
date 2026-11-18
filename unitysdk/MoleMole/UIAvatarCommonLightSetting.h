#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIAvatarLightChangeSettings.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace MoleMole { class UIAvatarLightSetting; }

#define MOLEMOLE_UIAVATARCOMMONLIGHTSETTING_PARSEAVATARLIGHTSETTING_OFFSET UNITYSDK_OFFSET(0x19837930)
#define MOLEMOLE_UIAVATARCOMMONLIGHTSETTING__CTOR_OFFSET UNITYSDK_OFFSET(0x19837A00)

namespace MoleMole
{
	inline static constexpr unsigned int UIAvatarCommonLightSetting_TypeDefinitionIndex = 53836;

	class UIAvatarCommonLightSetting : public ::System::Object
	{
	public:
		::MoleMole::UIAvatarLightChangeSettings ChangeSettings; // 0x10
		::System::Boolean EnableLightAvatarPart; // 0x28
		::System::Byte _padding0[0x3];
		::UnityEngine::Vector3 LightRotOffset; // 0x2C
		::System::Single LightIntensity; // 0x38
		::UnityEngine::Color LightColor; // 0x3C
		::UnityEngine::Vector4 LightAvatarPartRotOffset; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARCOMMONLIGHTSETTING__CTOR_OFFSET))(this);
		}

		::MoleMole::UIAvatarLightSetting* ParseAvatarLightSetting()
		{
			return ((::MoleMole::UIAvatarLightSetting*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARCOMMONLIGHTSETTING_PARSEAVATARLIGHTSETTING_OFFSET))(this);
		}
	};
}
