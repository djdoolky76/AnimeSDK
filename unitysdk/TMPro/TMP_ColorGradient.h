#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/TMPro/ColorMode.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

#define TMPRO_TMP_COLORGRADIENT_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F2EA740)
#define TMPRO_TMP_COLORGRADIENT_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F2EA690)
#define TMPRO_TMP_COLORGRADIENT_CTOR_2_OFFSET UNITYSDK_OFFSET(0x1F2EA6E0)
#define TMPRO_TMP_COLORGRADIENT_CTOR_OFFSET UNITYSDK_OFFSET(0x1F2EA600)

namespace TMPro
{
	class TMP_ColorGradient : public ::UnityEngine::ScriptableObject
	{
	public:
		::TMPro::ColorMode colorMode; // 0x18
		::UnityEngine::Color topLeft; // 0x1C
		::UnityEngine::Color topRight; // 0x2C
		::UnityEngine::Color bottomLeft; // 0x3C
		::UnityEngine::Color bottomRight; // 0x4C
		static ::UnityEngine::Color* StaticGet_k_DefaultColor()
		{
			return (::UnityEngine::Color*)UnitySDK::FromName("TMPro", "TMP_ColorGradient")->GetStaticField(0x13870);
		}

		// static const ::System::Object k_DefaultColorMode; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_COLORGRADIENT_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::UnityEngine::Color a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + TMPRO_TMP_COLORGRADIENT_CTOR_1_OFFSET))(this, a1);
		}

		::System::Void _ctor_2(::UnityEngine::Color a1, ::UnityEngine::Color a2, ::UnityEngine::Color a3, ::UnityEngine::Color a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color, ::UnityEngine::Color, ::UnityEngine::Color, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + TMPRO_TMP_COLORGRADIENT_CTOR_2_OFFSET))(this, a1, a2, a3, a4);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + TMPRO_TMP_COLORGRADIENT_CCTOR_OFFSET))();
		}

	};
}
