#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace UnityEngine { class Cubemap; }
namespace UnityEngine { class ReflectionProbe; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine::UI { class Dropdown; }
namespace UnityEngine::UI { class Slider; }

#define TA_REFLECTIONTEST_CTOR_OFFSET UNITYSDK_OFFSET(0xF4F7800)
#define TA_REFLECTIONTEST_DROPDOWN_OFFSET UNITYSDK_OFFSET(0xF4F6CD0)
#define TA_REFLECTIONTEST_SETCUBE_OFFSET UNITYSDK_OFFSET(0xF4F7350)
#define TA_REFLECTIONTEST_SETNONE_OFFSET UNITYSDK_OFFSET(0xF4F6DB0)
#define TA_REFLECTIONTEST_SETPLANERREFLECTION_OFFSET UNITYSDK_OFFSET(0xF4F74B0)
#define TA_REFLECTIONTEST_SETREFLECTIONPROBEBOXPROJECTION_OFFSET UNITYSDK_OFFSET(0xF4F7220)
#define TA_REFLECTIONTEST_SETREFLECTIONPROBE_OFFSET UNITYSDK_OFFSET(0xF4F70F0)
#define TA_REFLECTIONTEST_SETSSRTRACEONCE_OFFSET UNITYSDK_OFFSET(0xF4F7720)
#define TA_REFLECTIONTEST_SETSSR_OFFSET UNITYSDK_OFFSET(0xF4F75E0)
#define TA_REFLECTIONTEST_SLIDER_OFFSET UNITYSDK_OFFSET(0xF4F6BB0)

inline static constexpr unsigned int TA_ReflectionTest_TypeDefinitionIndex = 48468;

	class TA_ReflectionTest : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Renderer* ReflectionTest; // 0x18
		::UnityEngine::ReflectionProbe* ReflectionProbe; // 0x20
		::UnityEngine::ReflectionProbe* ReflectionProbeBoxProjection; // 0x28
		::UnityEngine::Cubemap* Cubemap; // 0x30
		::UnityEngine::UI::Slider* SmoothnessSlider; // 0x38
		::UnityEngine::UI::Dropdown* FeatureDropDown; // 0x40
		::System::Single DJDBOJNMICO; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_REFLECTIONTEST_CTOR_OFFSET))(this);
		}

		::System::Void Slider()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_REFLECTIONTEST_SLIDER_OFFSET))(this);
		}

		::System::Void DropDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_REFLECTIONTEST_DROPDOWN_OFFSET))(this);
		}

		::System::Void SetNone()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_REFLECTIONTEST_SETNONE_OFFSET))(this);
		}

		::System::Void SetReflectionProbe()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_REFLECTIONTEST_SETREFLECTIONPROBE_OFFSET))(this);
		}

		::System::Void SetReflectionProbeBoxProjection()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_REFLECTIONTEST_SETREFLECTIONPROBEBOXPROJECTION_OFFSET))(this);
		}

		::System::Void SetPlanerReflection()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_REFLECTIONTEST_SETPLANERREFLECTION_OFFSET))(this);
		}

		::System::Void SetCube()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_REFLECTIONTEST_SETCUBE_OFFSET))(this);
		}

		::System::Void SetSSRTraceOnce()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_REFLECTIONTEST_SETSSRTRACEONCE_OFFSET))(this);
		}

		::System::Void SetSSR()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_REFLECTIONTEST_SETSSR_OFFSET))(this);
		}

	};
