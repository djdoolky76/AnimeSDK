#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PopupDialog_F8266C0B16ABD556.h"
#include "unitysdk/MiHoYo/SDK/UIElement.h"

namespace MiHoYo::SDK { class PopupDialog_E378B08AC15907B2; }
namespace MiHoYo::SDK { class UIManager; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class Text; }

#define MIHOYO_SDK_POPUPDIALOG_AB36E0EE549986E5_OFFSET UNITYSDK_OFFSET(0x3A58750)
#define MIHOYO_SDK_POPUPDIALOG_BF5C80D30E113DD6_OFFSET UNITYSDK_OFFSET(0x3A58780)
#define MIHOYO_SDK_POPUPDIALOG_BFA7961FF2AC380B_OFFSET UNITYSDK_OFFSET(0x3A58870)
#define MIHOYO_SDK_POPUPDIALOG_E4958EFCD5F52834_OFFSET UNITYSDK_OFFSET(0x3A587D0)
#define MIHOYO_SDK_POPUPDIALOG_E85D1C741D5386D7_OFFSET UNITYSDK_OFFSET(0x3A58500)
#define MIHOYO_SDK_POPUPDIALOG_F328E4D8818B1E12_OFFSET UNITYSDK_OFFSET(0x3A58BB0)
#define MIHOYO_SDK_POPUPDIALOG_FDBCDBBFE02CD51A_OFFSET UNITYSDK_OFFSET(0x3A580B0)
#define MIHOYO_SDK_POPUPDIALOG_FF020876B6E74468_OFFSET UNITYSDK_OFFSET(0x3A58820)
#define MIHOYO_SDK_POPUPDIALOG__CCTOR_OFFSET UNITYSDK_OFFSET(0x3A58C30)
#define MIHOYO_SDK_POPUPDIALOG__CTOR_OFFSET UNITYSDK_OFFSET(0x3A58CB0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int PopupDialog_TypeDefinitionIndex = 13013;

	class PopupDialog : public ::MiHoYo::SDK::UIElement
	{
	public:
		static ::System::Collections::Generic::List_1<::System::Action*>** StaticGet_F1A52F9FCF7975FF()
		{
			return (::System::Collections::Generic::List_1<::System::Action*>**)Il2CppClass::FromTypeDefinitionIndex(PopupDialog_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::MiHoYo::SDK::UIManager** StaticGet_E368C73B8B30E25D()
		{
			return (::MiHoYo::SDK::UIManager**)Il2CppClass::FromTypeDefinitionIndex(PopupDialog_TypeDefinitionIndex)->GetStaticField(0x8);
		}
		::System::String* content; // 0x60
		::System::String* topButtonTitle; // 0x68
		::System::String* bottomButtonTitle; // 0x70
		::MiHoYo::SDK::PopupDialog_E378B08AC15907B2* OnSelected; // 0x78
		::MiHoYo::SDK::PopupDialog_F8266C0B16ABD556 E5C33D9162EAEB06; // 0x80
		::System::Boolean B8D587B17B7E2775; // 0x84
		::System::Byte _padding0[0x3];
		::UnityEngine::UI::Button* B1D38914498DA7C9; // 0x88
		::UnityEngine::UI::Text* EBDAAC6A711D7E55; // 0x90
		::UnityEngine::UI::Button* B79E65D0AFE6F8FE; // 0x98
		::UnityEngine::UI::Text* FF5B9A6351FACCC3; // 0xA0
		::UnityEngine::UI::Button* B079BEB25FF21BFB; // 0xA8
		::UnityEngine::UI::Text* AAACC1CE7DB5F74F; // 0xB0

		::System::Void FDBCDBBFE02CD51A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_POPUPDIALOG_FDBCDBBFE02CD51A_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_POPUPDIALOG__CTOR_OFFSET))(this);
		}

		::System::Void FF020876B6E74468()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_POPUPDIALOG_FF020876B6E74468_OFFSET))(this);
		}

		::System::Void F328E4D8818B1E12()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_POPUPDIALOG_F328E4D8818B1E12_OFFSET))(this);
		}

		::System::Void AB36E0EE549986E5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_POPUPDIALOG_AB36E0EE549986E5_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_POPUPDIALOG__CCTOR_OFFSET))();
		}

		static ::System::Void E85D1C741D5386D7()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_POPUPDIALOG_E85D1C741D5386D7_OFFSET))();
		}

		::System::Void BF5C80D30E113DD6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_POPUPDIALOG_BF5C80D30E113DD6_OFFSET))(this);
		}

		::System::Void E4958EFCD5F52834()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_POPUPDIALOG_E4958EFCD5F52834_OFFSET))(this);
		}

		static ::System::Void BFA7961FF2AC380B(::System::String* E0C0689B1CEBE48C, ::System::String* A5BC92A532DDFC9A, ::System::String* BA95016C517C92D9, ::System::Boolean AD50E68261B23C47, ::MiHoYo::SDK::PopupDialog_E378B08AC15907B2* E04D2BE64FCE9814, ::System::Boolean A3099478AEC8A390)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::System::Boolean, ::MiHoYo::SDK::PopupDialog_E378B08AC15907B2*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_POPUPDIALOG_BFA7961FF2AC380B_OFFSET))(E0C0689B1CEBE48C, A5BC92A532DDFC9A, BA95016C517C92D9, AD50E68261B23C47, E04D2BE64FCE9814, A3099478AEC8A390);
		}
	};
}
