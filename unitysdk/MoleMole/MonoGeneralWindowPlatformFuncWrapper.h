#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ABLPBCHNLLB.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine::UI::Extension { class UIButtonEx; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define MOLEMOLE_MONOGENERALWINDOWPLATFORMFUNCWRAPPER_GBHLKOFOLPM_OFFSET UNITYSDK_OFFSET(0x139F60C0)
#define MOLEMOLE_MONOGENERALWINDOWPLATFORMFUNCWRAPPER_HIDE_OFFSET UNITYSDK_OFFSET(0x139F65E0)
#define MOLEMOLE_MONOGENERALWINDOWPLATFORMFUNCWRAPPER_INIT_OFFSET UNITYSDK_OFFSET(0x139F5D70)
#define MOLEMOLE_MONOGENERALWINDOWPLATFORMFUNCWRAPPER_MAMNIGKOFLN_OFFSET UNITYSDK_OFFSET(0x139F5E10)
#define MOLEMOLE_MONOGENERALWINDOWPLATFORMFUNCWRAPPER_SHOW_OFFSET UNITYSDK_OFFSET(0x139F6070)
#define MOLEMOLE_MONOGENERALWINDOWPLATFORMFUNCWRAPPER__CTOR_OFFSET UNITYSDK_OFFSET(0x139F6640)

namespace MoleMole
{
	inline static constexpr unsigned int MonoGeneralWindowPlatformFuncWrapper_TypeDefinitionIndex = 93119;

	class MonoGeneralWindowPlatformFuncWrapper : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::UI::Extension::UIButtonEx* ConsoleFakeSwitchPlatformBtn; // 0x18
		::UnityEngine::UI::Extension::UILocalizationText* ConsoleFakeSwitchPlatformBtnText; // 0x20
		::System::Boolean CMHBOEIKBLG; // 0x28
		::System::Byte _padding0[0x7];
		::ABLPBCHNLLB MBIKADGJMJI; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGENERALWINDOWPLATFORMFUNCWRAPPER__CTOR_OFFSET))(this);
		}

		::System::Void Init(::ABLPBCHNLLB GBDDDFJNAPH)
		{
			return ((::System::Void(*)(::PVOID, ::ABLPBCHNLLB))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGENERALWINDOWPLATFORMFUNCWRAPPER_INIT_OFFSET))(this, GBDDDFJNAPH);
		}

		::System::Void Show()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGENERALWINDOWPLATFORMFUNCWRAPPER_SHOW_OFFSET))(this);
		}

		::System::Void Hide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGENERALWINDOWPLATFORMFUNCWRAPPER_HIDE_OFFSET))(this);
		}

		::System::Void MAMNIGKOFLN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGENERALWINDOWPLATFORMFUNCWRAPPER_MAMNIGKOFLN_OFFSET))(this);
		}

		::System::Void GBHLKOFOLPM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGENERALWINDOWPLATFORMFUNCWRAPPER_GBHLKOFOLPM_OFFSET))(this);
		}
	};
}
