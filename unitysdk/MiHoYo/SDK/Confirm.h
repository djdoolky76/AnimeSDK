#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/Confirm_E18B39FBD22EF1C5.h"
#include "unitysdk/MiHoYo/SDK/UIElement.h"

namespace MiHoYo::SDK { class Confirm_B5F0E06A8DBF23BA; }
namespace MiHoYo::SDK { class UIManager; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class Text; }

#define MIHOYO_SDK_CONFIRM_AB36E0EE549986E5_OFFSET UNITYSDK_OFFSET(0x39C3540)
#define MIHOYO_SDK_CONFIRM_B15C45BA2CECB881_OFFSET UNITYSDK_OFFSET(0x39C3620)
#define MIHOYO_SDK_CONFIRM_BFA7961FF2AC380B_OFFSET UNITYSDK_OFFSET(0x39C3C30)
#define MIHOYO_SDK_CONFIRM_E85D1C741D5386D7_OFFSET UNITYSDK_OFFSET(0x39C32F0)
#define MIHOYO_SDK_CONFIRM_E95119848FBAA75B_OFFSET UNITYSDK_OFFSET(0x39C35D0)
#define MIHOYO_SDK_CONFIRM_F27E545EDD4E2AF4_OFFSET UNITYSDK_OFFSET(0x39C3210)
#define MIHOYO_SDK_CONFIRM_F328E4D8818B1E12_OFFSET UNITYSDK_OFFSET(0x39C4020)
#define MIHOYO_SDK_CONFIRM_F61C4B3F8F43228A_OFFSET UNITYSDK_OFFSET(0x39C3670)
#define MIHOYO_SDK_CONFIRM_FDBCDBBFE02CD51A_OFFSET UNITYSDK_OFFSET(0x39C2EC0)
#define MIHOYO_SDK_CONFIRM__CCTOR_OFFSET UNITYSDK_OFFSET(0x39C40A0)
#define MIHOYO_SDK_CONFIRM__CTOR_OFFSET UNITYSDK_OFFSET(0x39C4130)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int Confirm_TypeDefinitionIndex = 12604;

	class Confirm : public ::MiHoYo::SDK::UIElement
	{
	public:
		static ::MiHoYo::SDK::UIManager** StaticGet_E368C73B8B30E25D()
		{
			return (::MiHoYo::SDK::UIManager**)Il2CppClass::FromTypeDefinitionIndex(Confirm_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::MiHoYo::SDK::Confirm** StaticGet_F459A1CAE950E680()
		{
			return (::MiHoYo::SDK::Confirm**)Il2CppClass::FromTypeDefinitionIndex(Confirm_TypeDefinitionIndex)->GetStaticField(0x8);
		}
		static ::System::Collections::Generic::List_1<::System::Action*>** StaticGet_B7899A33F3525BD1()
		{
			return (::System::Collections::Generic::List_1<::System::Action*>**)Il2CppClass::FromTypeDefinitionIndex(Confirm_TypeDefinitionIndex)->GetStaticField(0x10);
		}
		::System::String* content; // 0x60
		::System::String* okTitle; // 0x68
		::System::String* cancelTitle; // 0x70
		::MiHoYo::SDK::Confirm_B5F0E06A8DBF23BA* OnConfirmResult; // 0x78
		::MiHoYo::SDK::Confirm_E18B39FBD22EF1C5 E5C33D9162EAEB06; // 0x80
		::System::Byte _padding0[0x4];
		::UnityEngine::UI::Button* F2C15E19E5303682; // 0x88
		::UnityEngine::UI::Button* E0780CD2ED5EDFC7; // 0x90
		::UnityEngine::UI::Text* EBDAAC6A711D7E55; // 0x98
		::UnityEngine::UI::Text* A8726B557ECED552; // 0xA0
		::UnityEngine::UI::Text* B2AC212300C9BA8F; // 0xA8

		static ::System::Void E85D1C741D5386D7()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIRM_E85D1C741D5386D7_OFFSET))();
		}

		::System::Void AB36E0EE549986E5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIRM_AB36E0EE549986E5_OFFSET))(this);
		}

		static ::System::Void F27E545EDD4E2AF4()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIRM_F27E545EDD4E2AF4_OFFSET))();
		}

		static ::System::Void BFA7961FF2AC380B(::System::String* E0C0689B1CEBE48C, ::System::String* E0E2FB74317C93BD, ::System::String* B2DE86A168292335, ::MiHoYo::SDK::Confirm_B5F0E06A8DBF23BA* E04D2BE64FCE9814, ::System::Int32 E7B2D56979C20620, ::System::Boolean B817094AD7B6C768)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::MiHoYo::SDK::Confirm_B5F0E06A8DBF23BA*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIRM_BFA7961FF2AC380B_OFFSET))(E0C0689B1CEBE48C, E0E2FB74317C93BD, B2DE86A168292335, E04D2BE64FCE9814, E7B2D56979C20620, B817094AD7B6C768);
		}

		::System::Void FDBCDBBFE02CD51A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIRM_FDBCDBBFE02CD51A_OFFSET))(this);
		}

		static ::System::Boolean F61C4B3F8F43228A(::System::String* E0C0689B1CEBE48C, ::System::String* A06B6BF9F8847F77, ::System::String* E479C92115F72B58, ::MiHoYo::SDK::Confirm_B5F0E06A8DBF23BA* E04D2BE64FCE9814)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*, ::System::String*, ::MiHoYo::SDK::Confirm_B5F0E06A8DBF23BA*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIRM_F61C4B3F8F43228A_OFFSET))(E0C0689B1CEBE48C, A06B6BF9F8847F77, E479C92115F72B58, E04D2BE64FCE9814);
		}

		::System::Void E95119848FBAA75B()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIRM_E95119848FBAA75B_OFFSET))(this);
		}

		::System::Void B15C45BA2CECB881()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIRM_B15C45BA2CECB881_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIRM__CCTOR_OFFSET))();
		}

		::System::Void F328E4D8818B1E12()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIRM_F328E4D8818B1E12_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIRM__CTOR_OFFSET))(this);
		}
	};
}
