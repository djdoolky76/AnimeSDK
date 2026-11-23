#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/Alert_FE2CBCAA6ADCE589.h"
#include "unitysdk/MiHoYo/SDK/UIElement.h"

namespace MiHoYo::SDK { class Alert_E1B694816E36FF55; }
namespace MiHoYo::SDK { class UIManager; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class Text; }

#define MIHOYO_SDK_ALERT_AB36E0EE549986E5_OFFSET UNITYSDK_OFFSET(0x3A18E40)
#define MIHOYO_SDK_ALERT_AE384FFDD8827404_OFFSET UNITYSDK_OFFSET(0x3A18880)
#define MIHOYO_SDK_ALERT_BFA7961FF2AC380B_OFFSET UNITYSDK_OFFSET(0x3A19B00)
#define MIHOYO_SDK_ALERT_E4958EFCD5F52834_OFFSET UNITYSDK_OFFSET(0x3A18EB0)
#define MIHOYO_SDK_ALERT_E85D1C741D5386D7_OFFSET UNITYSDK_OFFSET(0x3A189A0)
#define MIHOYO_SDK_ALERT_EB0571E08AA1D1D2_OFFSET UNITYSDK_OFFSET(0x3A18F50)
#define MIHOYO_SDK_ALERT_F328E4D8818B1E12_OFFSET UNITYSDK_OFFSET(0x3A1A270)
#define MIHOYO_SDK_ALERT_F61C4B3F8F43228A_OFFSET UNITYSDK_OFFSET(0x3A19550)
#define MIHOYO_SDK_ALERT_FDBCDBBFE02CD51A_OFFSET UNITYSDK_OFFSET(0x3A18140)
#define MIHOYO_SDK_ALERT__CCTOR_OFFSET UNITYSDK_OFFSET(0x3A1A2D0)
#define MIHOYO_SDK_ALERT__CTOR_OFFSET UNITYSDK_OFFSET(0x3A1A3D0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int Alert_TypeDefinitionIndex = 12873;

	class Alert : public ::MiHoYo::SDK::UIElement
	{
	public:
		static ::System::Collections::Generic::List_1<::System::Action*>** StaticGet_E42299095025DDBF()
		{
			return (::System::Collections::Generic::List_1<::System::Action*>**)Il2CppClass::FromTypeDefinitionIndex(Alert_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::MiHoYo::SDK::UIManager** StaticGet_E368C73B8B30E25D()
		{
			return (::MiHoYo::SDK::UIManager**)Il2CppClass::FromTypeDefinitionIndex(Alert_TypeDefinitionIndex)->GetStaticField(0x8);
		}
		::System::String* content; // 0x60
		::System::String* buttonTitle; // 0x68
		::MiHoYo::SDK::Alert_E1B694816E36FF55* OnAlertResult; // 0x70
		::MiHoYo::SDK::Alert_FE2CBCAA6ADCE589 E5C33D9162EAEB06; // 0x78
		::System::Boolean F6C20CF0C47FD0AB; // 0x7C
		::System::Byte _padding0[0x3];
		::UnityEngine::UI::Button* B1D38914498DA7C9; // 0x80
		::UnityEngine::UI::Text* EBDAAC6A711D7E55; // 0x88
		::UnityEngine::UI::Button* F1C7ECBBBFF6AA0A; // 0x90
		::UnityEngine::UI::Text* BE6C4A280382B3AB; // 0x98

		::System::Void F328E4D8818B1E12()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ALERT_F328E4D8818B1E12_OFFSET))(this);
		}

		::System::Void EB0571E08AA1D1D2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ALERT_EB0571E08AA1D1D2_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_ALERT__CCTOR_OFFSET))();
		}

		static ::System::Void BFA7961FF2AC380B(::System::String* E0C0689B1CEBE48C, ::System::String* A59E604D1E9B8ED2, ::MiHoYo::SDK::Alert_E1B694816E36FF55* E04D2BE64FCE9814, ::System::Boolean A0029F4E38B0F861, ::System::Boolean A3099478AEC8A390)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::MiHoYo::SDK::Alert_E1B694816E36FF55*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ALERT_BFA7961FF2AC380B_OFFSET))(E0C0689B1CEBE48C, A59E604D1E9B8ED2, E04D2BE64FCE9814, A0029F4E38B0F861, A3099478AEC8A390);
		}

		static ::System::Void E85D1C741D5386D7()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_ALERT_E85D1C741D5386D7_OFFSET))();
		}

		::System::Void FDBCDBBFE02CD51A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ALERT_FDBCDBBFE02CD51A_OFFSET))(this);
		}

		::System::Void E4958EFCD5F52834()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ALERT_E4958EFCD5F52834_OFFSET))(this);
		}

		static ::System::Boolean F61C4B3F8F43228A(::System::String* E0C0689B1CEBE48C, ::System::String* B01C05A6976F8D7C, ::System::Boolean A0029F4E38B0F861, ::MiHoYo::SDK::Alert_E1B694816E36FF55* E04D2BE64FCE9814)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*, ::System::Boolean, ::MiHoYo::SDK::Alert_E1B694816E36FF55*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ALERT_F61C4B3F8F43228A_OFFSET))(E0C0689B1CEBE48C, B01C05A6976F8D7C, A0029F4E38B0F861, E04D2BE64FCE9814);
		}

		::System::Void AB36E0EE549986E5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ALERT_AB36E0EE549986E5_OFFSET))(this);
		}

		static ::System::Boolean AE384FFDD8827404()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_ALERT_AE384FFDD8827404_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ALERT__CTOR_OFFSET))(this);
		}
	};
}
