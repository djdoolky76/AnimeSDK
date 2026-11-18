#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace MiHoYo::SDK::HoYoUI { class HoYoSlider; }
namespace MiHoYo::SDK::HoYoUI { class HoYoToggle; }
namespace System { class Action; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Dropdown; }
namespace UnityEngine::UI::Extension { class UIButtonEx; }

#define MOLEMOLE_MONOGMLENTICULAR_AJCLNBLBGMJ_OFFSET UNITYSDK_OFFSET(0x1247B090)
#define MOLEMOLE_MONOGMLENTICULAR_AWAKE_OFFSET UNITYSDK_OFFSET(0x124770A0)
#define MOLEMOLE_MONOGMLENTICULAR_EDODEKOGPHF_OFFSET UNITYSDK_OFFSET(0x1247B450)
#define MOLEMOLE_MONOGMLENTICULAR_EFHHHMAFCLP_OFFSET UNITYSDK_OFFSET(0x1247A510)
#define MOLEMOLE_MONOGMLENTICULAR_FLEGCIHAHOB_OFFSET UNITYSDK_OFFSET(0x1247A330)
#define MOLEMOLE_MONOGMLENTICULAR_FPJDNAIBNML_OFFSET UNITYSDK_OFFSET(0x1247A6F0)
#define MOLEMOLE_MONOGMLENTICULAR_GAGJODHEBNI_OFFSET UNITYSDK_OFFSET(0x1247AEB0)
#define MOLEMOLE_MONOGMLENTICULAR_JALDDKPEBLM_OFFSET UNITYSDK_OFFSET(0x1247A8D0)
#define MOLEMOLE_MONOGMLENTICULAR_JBJHOGLAANB_OFFSET UNITYSDK_OFFSET(0x1247ACE0)
#define MOLEMOLE_MONOGMLENTICULAR_JKJBKBNLDKE_OFFSET UNITYSDK_OFFSET(0x1247AAD0)
#define MOLEMOLE_MONOGMLENTICULAR_KICEIFNPGHE_OFFSET UNITYSDK_OFFSET(0x1247B270)
#define MOLEMOLE_MONOGMLENTICULAR_LMMHIACCMEC_OFFSET UNITYSDK_OFFSET(0x1247AAA0)
#define MOLEMOLE_MONOGMLENTICULAR_ONENABLE_OFFSET UNITYSDK_OFFSET(0x12477E10)
#define MOLEMOLE_MONOGMLENTICULAR_OPENGMLENTICULAR_OFFSET UNITYSDK_OFFSET(0x12479580)
#define MOLEMOLE_MONOGMLENTICULAR_PGFKGBCOCHP_OFFSET UNITYSDK_OFFSET(0x1247ACA0)
#define MOLEMOLE_MONOGMLENTICULAR_RESETDATA_OFFSET UNITYSDK_OFFSET(0x12477E60)
#define MOLEMOLE_MONOGMLENTICULAR_UPDATEFINALINPUTVIEW_OFFSET UNITYSDK_OFFSET(0x12479E90)
#define MOLEMOLE_MONOGMLENTICULAR_UPDATEGYROSCOPEVIEW_OFFSET UNITYSDK_OFFSET(0x124795D0)
#define MOLEMOLE_MONOGMLENTICULAR_UPDATESTICKVIEW_OFFSET UNITYSDK_OFFSET(0x12479A40)
#define MOLEMOLE_MONOGMLENTICULAR__CTOR_OFFSET UNITYSDK_OFFSET(0x1247A2E0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoGMLenticular_TypeDefinitionIndex = 56464;

	class MonoGMLenticular : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Action** StaticGet_OpenGMLenticularAction()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(MonoGMLenticular_TypeDefinitionIndex)->GetStaticField(0x41C30);
		}
		::MiHoYo::SDK::HoYoUI::HoYoToggle* PcResetToggle; // 0x18
		::MiHoYo::SDK::HoYoUI::HoYoToggle* IsPcUseDrag; // 0x20
		::MiHoYo::SDK::HoYoUI::HoYoToggle* IsPcUseDampToggle; // 0x28
		::MiHoYo::SDK::HoYoUI::HoYoToggle* IsStickUseDampToggle; // 0x30
		::MiHoYo::SDK::HoYoUI::HoYoToggle* IsGyroscopeUseDampToggle; // 0x38
		::MiHoYo::SDK::HoYoUI::HoYoToggle* UseOldGyroscopeToggle; // 0x40
		::MiHoYo::SDK::HoYoUI::HoYoSlider* PcDragSpeed_X; // 0x48
		::MiHoYo::SDK::HoYoUI::HoYoSlider* PcDragSpeed_Y; // 0x50
		::MiHoYo::SDK::HoYoUI::HoYoSlider* ConsoleGyroscopeRate; // 0x58
		::MiHoYo::SDK::HoYoUI::HoYoSlider* MobileGyroscopeRate; // 0x60
		::MiHoYo::SDK::HoYoUI::HoYoSlider* StickMoveRate; // 0x68
		::MiHoYo::SDK::HoYoUI::HoYoSlider* GyroscopeSpeed; // 0x70
		::MiHoYo::SDK::HoYoUI::HoYoSlider* PCLerpTweenRate; // 0x78
		::MiHoYo::SDK::HoYoUI::HoYoSlider* GyroscopeIgnoreRate; // 0x80
		::UnityEngine::UI::Extension::UIButtonEx* CloseBtn; // 0x88
		::UnityEngine::UI::Extension::UIButtonEx* GyroscopeViewBtn; // 0x90
		::UnityEngine::GameObject* GyroscopeView; // 0x98
		::MiHoYo::SDK::HoYoUI::HoYoSlider* GyroscopeView_X; // 0xA0
		::MiHoYo::SDK::HoYoUI::HoYoSlider* GyroscopeView_Y; // 0xA8
		::MiHoYo::SDK::HoYoUI::HoYoSlider* StickView_X; // 0xB0
		::MiHoYo::SDK::HoYoUI::HoYoSlider* StickView_Y; // 0xB8
		::MiHoYo::SDK::HoYoUI::HoYoSlider* FinalInputView_X; // 0xC0
		::MiHoYo::SDK::HoYoUI::HoYoSlider* FinalInputView_Y; // 0xC8
		::MiHoYo::SDK::HoYoUI::HoYoSlider* DampRate; // 0xD0
		::MiHoYo::SDK::HoYoUI::HoYoSlider* PCDampRate; // 0xD8
		::UnityEngine::UI::Dropdown* GyroType; // 0xE0
		::UnityEngine::UI::Dropdown* StickType; // 0xE8
		::UnityEngine::UI::Dropdown* GyroStickMergeType; // 0xF0
		::UnityEngine::UI::Dropdown* CardClampType; // 0xF8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGMLENTICULAR__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGMLENTICULAR_AWAKE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGMLENTICULAR_ONENABLE_OFFSET))(this);
		}

		::System::Void ResetData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGMLENTICULAR_RESETDATA_OFFSET))(this);
		}

		static ::System::Void OpenGMLenticular()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGMLENTICULAR_OPENGMLENTICULAR_OFFSET))();
		}

		::System::Void UpdateGyroscopeView(::System::Single HAAEBCOBKFF, ::System::Single BFMMEICFNCD)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGMLENTICULAR_UPDATEGYROSCOPEVIEW_OFFSET))(this, HAAEBCOBKFF, BFMMEICFNCD);
		}

		::System::Void UpdateStickView(::System::Single HAAEBCOBKFF, ::System::Single BFMMEICFNCD)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGMLENTICULAR_UPDATESTICKVIEW_OFFSET))(this, HAAEBCOBKFF, BFMMEICFNCD);
		}

		::System::Void UpdateFinalInputView(::System::Single HAAEBCOBKFF, ::System::Single BFMMEICFNCD)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGMLENTICULAR_UPDATEFINALINPUTVIEW_OFFSET))(this, HAAEBCOBKFF, BFMMEICFNCD);
		}

		::System::Void FLEGCIHAHOB(::System::Single EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGMLENTICULAR_FLEGCIHAHOB_OFFSET))(this, EGEGIMGMJHN);
		}

		::System::Void EFHHHMAFCLP(::System::Single EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGMLENTICULAR_EFHHHMAFCLP_OFFSET))(this, EGEGIMGMJHN);
		}

		::System::Void FPJDNAIBNML(::System::Single EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGMLENTICULAR_FPJDNAIBNML_OFFSET))(this, EGEGIMGMJHN);
		}

		::System::Void JALDDKPEBLM(::System::Single EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGMLENTICULAR_JALDDKPEBLM_OFFSET))(this, EGEGIMGMJHN);
		}

		::System::Void LMMHIACCMEC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGMLENTICULAR_LMMHIACCMEC_OFFSET))(this);
		}

		::System::Void JKJBKBNLDKE(::System::Single EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGMLENTICULAR_JKJBKBNLDKE_OFFSET))(this, EGEGIMGMJHN);
		}

		::System::Void PGFKGBCOCHP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGMLENTICULAR_PGFKGBCOCHP_OFFSET))(this);
		}

		::System::Void JBJHOGLAANB(::System::Single EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGMLENTICULAR_JBJHOGLAANB_OFFSET))(this, EGEGIMGMJHN);
		}

		::System::Void GAGJODHEBNI(::System::Single EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGMLENTICULAR_GAGJODHEBNI_OFFSET))(this, EGEGIMGMJHN);
		}

		::System::Void AJCLNBLBGMJ(::System::Single EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGMLENTICULAR_AJCLNBLBGMJ_OFFSET))(this, EGEGIMGMJHN);
		}

		::System::Void KICEIFNPGHE(::System::Single EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGMLENTICULAR_KICEIFNPGHE_OFFSET))(this, EGEGIMGMJHN);
		}

		::System::Void EDODEKOGPHF(::System::Single EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGMLENTICULAR_EDODEKOGPHF_OFFSET))(this, EGEGIMGMJHN);
		}
	};
}
