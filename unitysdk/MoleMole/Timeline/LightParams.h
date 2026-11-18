#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/LightRenderMode.h"

namespace UnityEngine { class Light; }
namespace UnityEngine::Rendering::Universal { class UniversalAdditionalLightData; }

#define MOLEMOLE_TIMELINE_LIGHTPARAMS_HIAFFABPACH_OFFSET UNITYSDK_OFFSET(0x18823D80)
#define MOLEMOLE_TIMELINE_LIGHTPARAMS_KBMBEGCFDHP_OFFSET UNITYSDK_OFFSET(0x18823AD0)
#define MOLEMOLE_TIMELINE_LIGHTPARAMS__CTOR_OFFSET UNITYSDK_OFFSET(0x18823AB0)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int LightParams_TypeDefinitionIndex = 87797;

	class LightParams : public ::System::Object
	{
	public:
		::System::Single Strength; // 0x10
		::System::Boolean UseShadowTint; // 0x14
		::System::Byte _padding0[0x3];
		::System::Single intensity; // 0x18
		::UnityEngine::Color Color; // 0x1C
		::UnityEngine::LightRenderMode Mode; // 0x2C
		::UnityEngine::Color AvatarLightColor; // 0x30
		::System::Single AvatarLightMultiplier; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LIGHTPARAMS__CTOR_OFFSET))(this);
		}

		::System::Void KBMBEGCFDHP(::UnityEngine::Light* NLFGBFCCCLJ, ::UnityEngine::Rendering::Universal::UniversalAdditionalLightData* BEPMIAHJNIJ)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Light*, ::UnityEngine::Rendering::Universal::UniversalAdditionalLightData*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LIGHTPARAMS_KBMBEGCFDHP_OFFSET))(this, NLFGBFCCCLJ, BEPMIAHJNIJ);
		}

		::System::Void HIAFFABPACH(::UnityEngine::Light* NLFGBFCCCLJ, ::UnityEngine::Rendering::Universal::UniversalAdditionalLightData* BEPMIAHJNIJ)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Light*, ::UnityEngine::Rendering::Universal::UniversalAdditionalLightData*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LIGHTPARAMS_HIAFFABPACH_OFFSET))(this, NLFGBFCCCLJ, BEPMIAHJNIJ);
		}
	};
}
