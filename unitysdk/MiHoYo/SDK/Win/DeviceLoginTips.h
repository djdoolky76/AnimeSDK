#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/UIElement.h"

namespace MiHoYo::SDK::Win { class NewDeviceInfoModel; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class Text; }

#define MIHOYO_SDK_WIN_DEVICELOGINTIPS_A7B9D97A8EACDFF4_OFFSET UNITYSDK_OFFSET(0x3946170)
#define MIHOYO_SDK_WIN_DEVICELOGINTIPS_AB36E0EE549986E5_OFFSET UNITYSDK_OFFSET(0x3945CF0)
#define MIHOYO_SDK_WIN_DEVICELOGINTIPS_AF25E95D779D492C_OFFSET UNITYSDK_OFFSET(0x3945EB0)
#define MIHOYO_SDK_WIN_DEVICELOGINTIPS_B3700DC3FAE978E4_OFFSET UNITYSDK_OFFSET(0x3945920)
#define MIHOYO_SDK_WIN_DEVICELOGINTIPS_BFA7961FF2AC380B_OFFSET UNITYSDK_OFFSET(0x3945D40)
#define MIHOYO_SDK_WIN_DEVICELOGINTIPS_E72FED2CD630833D_OFFSET UNITYSDK_OFFSET(0x39457E0)
#define MIHOYO_SDK_WIN_DEVICELOGINTIPS_E85D1C741D5386D7_OFFSET UNITYSDK_OFFSET(0x3945C00)
#define MIHOYO_SDK_WIN_DEVICELOGINTIPS_F27E545EDD4E2AF4_OFFSET UNITYSDK_OFFSET(0x3945880)
#define MIHOYO_SDK_WIN_DEVICELOGINTIPS_F328E4D8818B1E12_OFFSET UNITYSDK_OFFSET(0x3945EA0)
#define MIHOYO_SDK_WIN_DEVICELOGINTIPS_F84156AEDCB011AE_OFFSET UNITYSDK_OFFSET(0x3945C50)
#define MIHOYO_SDK_WIN_DEVICELOGINTIPS_FB08F0065135719A_OFFSET UNITYSDK_OFFSET(0x3945740)
#define MIHOYO_SDK_WIN_DEVICELOGINTIPS_FDBCDBBFE02CD51A_OFFSET UNITYSDK_OFFSET(0x3944FE0)
#define MIHOYO_SDK_WIN_DEVICELOGINTIPS__CTOR_OFFSET UNITYSDK_OFFSET(0x39230A0)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int DeviceLoginTips_TypeDefinitionIndex = 12425;

	class DeviceLoginTips : public ::MiHoYo::SDK::UIElement
	{
	public:
		static ::MiHoYo::SDK::Win::DeviceLoginTips** StaticGet_F459A1CAE950E680()
		{
			return (::MiHoYo::SDK::Win::DeviceLoginTips**)Il2CppClass::FromTypeDefinitionIndex(DeviceLoginTips_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::UnityEngine::UI::Button* B1D38914498DA7C9; // 0x60
		::UnityEngine::UI::Button* F9B6CD06A11EA70F; // 0x68
		::UnityEngine::UI::Text* A0830E09F3D64900; // 0x70
		::UnityEngine::UI::Text* F644C3612A4F8BE1; // 0x78
		::UnityEngine::GameObject* B98E388D5C6055A7; // 0x80
		::UnityEngine::GameObject* AA962BA412668A42; // 0x88
		::UnityEngine::UI::Button* A5532A473D08A2FC; // 0x90
		::UnityEngine::UI::Text* B162DF194352E4B2; // 0x98
		::UnityEngine::UI::Button* E0780CD2ED5EDFC7; // 0xA0
		::UnityEngine::UI::Text* EB15BA90B9021958; // 0xA8
		::System::Action* OnClose; // 0xB0
		::System::Action* OnBack; // 0xB8
		::System::Action* OnBind; // 0xC0
		::System::Action* OnKnown; // 0xC8
		::System::Collections::Generic::List_1<::MiHoYo::SDK::Win::NewDeviceInfoModel*>* ABEF02511E73376A; // 0xD0

		static ::System::Void BFA7961FF2AC380B(::System::Collections::Generic::List_1<::MiHoYo::SDK::Win::NewDeviceInfoModel*>* B9B26B23B27A46C7)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::MiHoYo::SDK::Win::NewDeviceInfoModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_DEVICELOGINTIPS_BFA7961FF2AC380B_OFFSET))(B9B26B23B27A46C7);
		}

		::System::Void AF25E95D779D492C(::System::Collections::Generic::List_1<::MiHoYo::SDK::Win::NewDeviceInfoModel*>* F82E4FFEFA067509)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MiHoYo::SDK::Win::NewDeviceInfoModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_DEVICELOGINTIPS_AF25E95D779D492C_OFFSET))(this, F82E4FFEFA067509);
		}

		::System::Void FB08F0065135719A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_DEVICELOGINTIPS_FB08F0065135719A_OFFSET))(this);
		}

		::System::Void FDBCDBBFE02CD51A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_DEVICELOGINTIPS_FDBCDBBFE02CD51A_OFFSET))(this);
		}

		::System::Void A7B9D97A8EACDFF4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_DEVICELOGINTIPS_A7B9D97A8EACDFF4_OFFSET))(this);
		}

		static ::System::String* B3700DC3FAE978E4(::System::Int64 FF0A37159A523E06)
		{
			return ((::System::String*(*)(::System::Int64))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_DEVICELOGINTIPS_B3700DC3FAE978E4_OFFSET))(FF0A37159A523E06);
		}

		::System::Void AB36E0EE549986E5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_DEVICELOGINTIPS_AB36E0EE549986E5_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_DEVICELOGINTIPS__CTOR_OFFSET))(this);
		}

		static ::System::Void E85D1C741D5386D7()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_DEVICELOGINTIPS_E85D1C741D5386D7_OFFSET))();
		}

		::System::Void F328E4D8818B1E12()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_DEVICELOGINTIPS_F328E4D8818B1E12_OFFSET))(this);
		}

		::System::Void F84156AEDCB011AE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_DEVICELOGINTIPS_F84156AEDCB011AE_OFFSET))(this);
		}

		::System::Void F27E545EDD4E2AF4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_DEVICELOGINTIPS_F27E545EDD4E2AF4_OFFSET))(this);
		}

		::System::Void E72FED2CD630833D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_DEVICELOGINTIPS_E72FED2CD630833D_OFFSET))(this);
		}
	};
}
