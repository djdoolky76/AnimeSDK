#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AGJFJGEMIPB_IJGJFOLIMAH_CPPCMLKMHCA.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine::Rendering::Universal { class OverrideWeatherConfigScriptableObject; }
namespace UnityEngine::Rendering::Universal { class WeatherConfigScriptableObject; }

#define AGJFJGEMIPB_IJGJFOLIMAH_FFCPIEDHBDP_OFFSET UNITYSDK_OFFSET(0x726250)
#define AGJFJGEMIPB_IJGJFOLIMAH_HHPIPIJBKLG_OFFSET UNITYSDK_OFFSET(0x7262B0)
#define AGJFJGEMIPB_IJGJFOLIMAH__CTOR_1_OFFSET UNITYSDK_OFFSET(0x7261E0)
#define AGJFJGEMIPB_IJGJFOLIMAH__CTOR_2_OFFSET UNITYSDK_OFFSET(0x726220)
#define AGJFJGEMIPB_IJGJFOLIMAH__CTOR_OFFSET UNITYSDK_OFFSET(0x7261B0)

inline static constexpr unsigned int AGJFJGEMIPB_IJGJFOLIMAH_TypeDefinitionIndex = 91426;

struct alignas(8) AGJFJGEMIPB_IJGJFOLIMAH
{
	::System::String* MIHBPMANGOH; // 0x10
	::UnityEngine::AnimationCurve* FAJHPKBELMF; // 0x18
	::System::Int32 DKOFFFNEFJC; // 0x20
	::System::Byte _padding0[0x4];
	::AGJFJGEMIPB_IJGJFOLIMAH_CPPCMLKMHCA DFMKILICPFB; // 0x28
	::System::Single IECOJPMPJMP; // 0x38
	::System::Boolean BBANKCIFAKJ; // 0x3C
	::System::Boolean DHHIAGADLAG; // 0x3D

	::System::Void _ctor(::System::String* MIHBPMANGOH, ::UnityEngine::AnimationCurve* PJNOPCKMHMK, ::System::Single IECOJPMPJMP, ::System::Int32 DKOFFFNEFJC, ::UnityEngine::Rendering::Universal::OverrideWeatherConfigScriptableObject* NEGKAKCFCNH)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::AnimationCurve*, ::System::Single, ::System::Int32, ::UnityEngine::Rendering::Universal::OverrideWeatherConfigScriptableObject*))((::PBYTE)hIl2Cpp + AGJFJGEMIPB_IJGJFOLIMAH__CTOR_OFFSET))(this, MIHBPMANGOH, PJNOPCKMHMK, IECOJPMPJMP, DKOFFFNEFJC, NEGKAKCFCNH);
	}

	::System::Void _ctor_1(::System::String* MIHBPMANGOH, ::UnityEngine::AnimationCurve* PJNOPCKMHMK, ::System::Single IECOJPMPJMP, ::System::Int32 DKOFFFNEFJC, ::UnityEngine::Rendering::Universal::WeatherConfigScriptableObject* NEGKAKCFCNH)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::AnimationCurve*, ::System::Single, ::System::Int32, ::UnityEngine::Rendering::Universal::WeatherConfigScriptableObject*))((::PBYTE)hIl2Cpp + AGJFJGEMIPB_IJGJFOLIMAH__CTOR_1_OFFSET))(this, MIHBPMANGOH, PJNOPCKMHMK, IECOJPMPJMP, DKOFFFNEFJC, NEGKAKCFCNH);
	}

	::System::Void _ctor_2(::System::String* MIHBPMANGOH, ::UnityEngine::AnimationCurve* PJNOPCKMHMK, ::System::Single IECOJPMPJMP, ::System::Int32 DKOFFFNEFJC, ::AGJFJGEMIPB_IJGJFOLIMAH_CPPCMLKMHCA NEGKAKCFCNH)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::AnimationCurve*, ::System::Single, ::System::Int32, ::AGJFJGEMIPB_IJGJFOLIMAH_CPPCMLKMHCA))((::PBYTE)hIl2Cpp + AGJFJGEMIPB_IJGJFOLIMAH__CTOR_2_OFFSET))(this, MIHBPMANGOH, PJNOPCKMHMK, IECOJPMPJMP, DKOFFFNEFJC, NEGKAKCFCNH);
	}

	::System::Boolean FFCPIEDHBDP()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AGJFJGEMIPB_IJGJFOLIMAH_FFCPIEDHBDP_OFFSET))(this);
	}

	/*
	::AGJFJGEMIPB_IJGJFOLIMAH HHPIPIJBKLG(::System::Boolean DHHIAGADLAG)
	{
		return ((::AGJFJGEMIPB_IJGJFOLIMAH(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AGJFJGEMIPB_IJGJFOLIMAH_HHPIPIJBKLG_OFFSET))(this, DHHIAGADLAG);
	}
	*/
};
