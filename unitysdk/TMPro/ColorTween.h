#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/TMPro/ColorTween_ColorTweenMode.h"
#include "unitysdk/UnityEngine/Color.h"

namespace TMPro { class ColorTween_ColorTweenCallback; }
namespace UnityEngine::Events { template <typename T> class UnityAction_1; }

#define TMPRO_COLORTWEEN_ADDONCHANGEDCALLBACK_OFFSET UNITYSDK_OFFSET(0x9BA600)
#define TMPRO_COLORTWEEN_GETDURATION_OFFSET UNITYSDK_OFFSET(0x5C9C10)
#define TMPRO_COLORTWEEN_GETIGNORETIMESCALE_OFFSET UNITYSDK_OFFSET(0x726C60)
#define TMPRO_COLORTWEEN_GET_DURATION_OFFSET UNITYSDK_OFFSET(0x5C9C10)
#define TMPRO_COLORTWEEN_GET_IGNORETIMESCALE_OFFSET UNITYSDK_OFFSET(0x726C60)
#define TMPRO_COLORTWEEN_GET_STARTCOLOR_OFFSET UNITYSDK_OFFSET(0x3CEFD0)
#define TMPRO_COLORTWEEN_GET_TARGETCOLOR_OFFSET UNITYSDK_OFFSET(0x3D0180)
#define TMPRO_COLORTWEEN_GET_TWEENMODE_OFFSET UNITYSDK_OFFSET(0x363220)
#define TMPRO_COLORTWEEN_SET_DURATION_OFFSET UNITYSDK_OFFSET(0x5C9C20)
#define TMPRO_COLORTWEEN_SET_IGNORETIMESCALE_OFFSET UNITYSDK_OFFSET(0x726C50)
#define TMPRO_COLORTWEEN_SET_STARTCOLOR_OFFSET UNITYSDK_OFFSET(0x93CBA0)
#define TMPRO_COLORTWEEN_SET_TARGETCOLOR_OFFSET UNITYSDK_OFFSET(0x6F1DC0)
#define TMPRO_COLORTWEEN_SET_TWEENMODE_OFFSET UNITYSDK_OFFSET(0x646580)
#define TMPRO_COLORTWEEN_TWEENVALUE_OFFSET UNITYSDK_OFFSET(0x9BA580)
#define TMPRO_COLORTWEEN_VALIDTARGET_OFFSET UNITYSDK_OFFSET(0x363D90)

namespace TMPro
{
	inline static constexpr unsigned int ColorTween_TypeDefinitionIndex = 37777;

	struct alignas(8) ColorTween
	{
		::TMPro::ColorTween_ColorTweenCallback* m_Target; // 0x10
		::UnityEngine::Color m_StartColor; // 0x18
		::UnityEngine::Color m_TargetColor; // 0x28
		::TMPro::ColorTween_ColorTweenMode m_TweenMode; // 0x38
		::System::Single m_Duration; // 0x3C
		::System::Boolean m_IgnoreTimeScale; // 0x40

		::UnityEngine::Color get_startColor()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_COLORTWEEN_GET_STARTCOLOR_OFFSET))(this);
		}

		::System::Void set_startColor(::UnityEngine::Color value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + TMPRO_COLORTWEEN_SET_STARTCOLOR_OFFSET))(this, value);
		}

		::UnityEngine::Color get_targetColor()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_COLORTWEEN_GET_TARGETCOLOR_OFFSET))(this);
		}

		::System::Void set_targetColor(::UnityEngine::Color value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + TMPRO_COLORTWEEN_SET_TARGETCOLOR_OFFSET))(this, value);
		}

		::TMPro::ColorTween_ColorTweenMode get_tweenMode()
		{
			return ((::TMPro::ColorTween_ColorTweenMode(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_COLORTWEEN_GET_TWEENMODE_OFFSET))(this);
		}

		::System::Void set_tweenMode(::TMPro::ColorTween_ColorTweenMode value)
		{
			return ((::System::Void(*)(::PVOID, ::TMPro::ColorTween_ColorTweenMode))((::PBYTE)hIl2Cpp + TMPRO_COLORTWEEN_SET_TWEENMODE_OFFSET))(this, value);
		}

		::System::Single get_duration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_COLORTWEEN_GET_DURATION_OFFSET))(this);
		}

		::System::Void set_duration(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + TMPRO_COLORTWEEN_SET_DURATION_OFFSET))(this, value);
		}

		::System::Boolean get_ignoreTimeScale()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_COLORTWEEN_GET_IGNORETIMESCALE_OFFSET))(this);
		}

		::System::Void set_ignoreTimeScale(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + TMPRO_COLORTWEEN_SET_IGNORETIMESCALE_OFFSET))(this, value);
		}

		::System::Void TweenValue(::System::Single floatPercentage)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + TMPRO_COLORTWEEN_TWEENVALUE_OFFSET))(this, floatPercentage);
		}

		::System::Void AddOnChangedCallback(::UnityEngine::Events::UnityAction_1<::UnityEngine::Color>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction_1<::UnityEngine::Color>*))((::PBYTE)hIl2Cpp + TMPRO_COLORTWEEN_ADDONCHANGEDCALLBACK_OFFSET))(this, callback);
		}

		::System::Boolean GetIgnoreTimescale()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_COLORTWEEN_GETIGNORETIMESCALE_OFFSET))(this);
		}

		::System::Single GetDuration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_COLORTWEEN_GETDURATION_OFFSET))(this);
		}

		::System::Boolean ValidTarget()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_COLORTWEEN_VALIDTARGET_OFFSET))(this);
		}
	};
}
