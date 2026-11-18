#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_MONOEFFECTPLUGINATTACHTOCAMERA_V3CURVE_DHKEJBEMFMP_OFFSET UNITYSDK_OFFSET(0x770340)
#define MOLEMOLE_MONOEFFECTPLUGINATTACHTOCAMERA_V3CURVE_FHDJDIIPGGP_OFFSET UNITYSDK_OFFSET(0x770350)
#define MOLEMOLE_MONOEFFECTPLUGINATTACHTOCAMERA_V3CURVE_GET_DURATION_OFFSET UNITYSDK_OFFSET(0x3CEBD0)
#define MOLEMOLE_MONOEFFECTPLUGINATTACHTOCAMERA_V3CURVE_GET_STARTVALUE_OFFSET UNITYSDK_OFFSET(0x4B2790)
#define MOLEMOLE_MONOEFFECTPLUGINATTACHTOCAMERA_V3CURVE_GET_STOPVALUE_OFFSET UNITYSDK_OFFSET(0x770310)
#define MOLEMOLE_MONOEFFECTPLUGINATTACHTOCAMERA_V3CURVE_GGICOCGBDNI_OFFSET UNITYSDK_OFFSET(0x15ABC3A0)
#define MOLEMOLE_MONOEFFECTPLUGINATTACHTOCAMERA_V3CURVE_SET_DURATION_OFFSET UNITYSDK_OFFSET(0x702330)
#define MOLEMOLE_MONOEFFECTPLUGINATTACHTOCAMERA_V3CURVE_SET_STARTVALUE_OFFSET UNITYSDK_OFFSET(0x770300)
#define MOLEMOLE_MONOEFFECTPLUGINATTACHTOCAMERA_V3CURVE_SET_STOPVALUE_OFFSET UNITYSDK_OFFSET(0x770330)

namespace MoleMole
{
	inline static constexpr unsigned int MonoEffectPluginAttachToCamera_V3Curve_TypeDefinitionIndex = 60950;

	struct alignas(8) MonoEffectPluginAttachToCamera_V3Curve
	{
		::UnityEngine::AnimationCurve* xCurve; // 0x10
		::UnityEngine::AnimationCurve* yCurve; // 0x18
		::UnityEngine::AnimationCurve* zCurve; // 0x20
		::UnityEngine::Vector3 _startValue_k__BackingField; // 0x28
		::UnityEngine::Vector3 _stopValue_k__BackingField; // 0x34
		::UnityEngine::Vector2 _duration_k__BackingField; // 0x40

		::UnityEngine::Vector3 get_startValue()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINATTACHTOCAMERA_V3CURVE_GET_STARTVALUE_OFFSET))(this);
		}

		::System::Void set_startValue(::UnityEngine::Vector3 EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINATTACHTOCAMERA_V3CURVE_SET_STARTVALUE_OFFSET))(this, EGEGIMGMJHN);
		}

		::UnityEngine::Vector3 get_stopValue()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINATTACHTOCAMERA_V3CURVE_GET_STOPVALUE_OFFSET))(this);
		}

		::System::Void set_stopValue(::UnityEngine::Vector3 EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINATTACHTOCAMERA_V3CURVE_SET_STOPVALUE_OFFSET))(this, EGEGIMGMJHN);
		}

		::UnityEngine::Vector2 get_duration()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINATTACHTOCAMERA_V3CURVE_GET_DURATION_OFFSET))(this);
		}

		::System::Void set_duration(::UnityEngine::Vector2 EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINATTACHTOCAMERA_V3CURVE_SET_DURATION_OFFSET))(this, EGEGIMGMJHN);
		}

		static ::System::Void GGICOCGBDNI(::UnityEngine::AnimationCurve* FAJHPKBELMF, ::System::Single CIIPCCLOHLH, ::System::Single GJIHOPCJODF, ::System::Single EODDDEDPMHA, ::System::Single IGGPBPGAAKH)
		{
			return ((::System::Void(*)(::UnityEngine::AnimationCurve*, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINATTACHTOCAMERA_V3CURVE_GGICOCGBDNI_OFFSET))(FAJHPKBELMF, CIIPCCLOHLH, GJIHOPCJODF, EODDDEDPMHA, IGGPBPGAAKH);
		}

		::System::Void DHKEJBEMFMP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINATTACHTOCAMERA_V3CURVE_DHKEJBEMFMP_OFFSET))(this);
		}

		::UnityEngine::Vector3 FHDJDIIPGGP(::System::Single FNIOPKPHDEH)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINATTACHTOCAMERA_V3CURVE_FHDJDIIPGGP_OFFSET))(this, FNIOPKPHDEH);
		}
	};
}
