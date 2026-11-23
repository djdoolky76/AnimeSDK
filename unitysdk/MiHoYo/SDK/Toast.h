#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/UIElement.h"

namespace MiHoYo::SDK { class UIManager; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::UI { class Text; }

#define MIHOYO_SDK_TOAST_BF13C91AD80643D2_OFFSET UNITYSDK_OFFSET(0x3A7DAD0)
#define MIHOYO_SDK_TOAST_BFA7961FF2AC380B_OFFSET UNITYSDK_OFFSET(0x3A7DF80)
#define MIHOYO_SDK_TOAST_E85D1C741D5386D7_OFFSET UNITYSDK_OFFSET(0x3A7D880)
#define MIHOYO_SDK_TOAST_F328E4D8818B1E12_OFFSET UNITYSDK_OFFSET(0x3A01630)
#define MIHOYO_SDK_TOAST_F61C4B3F8F43228A_OFFSET UNITYSDK_OFFSET(0x3A7DB60)
#define MIHOYO_SDK_TOAST_F94F3A4AD47F302C_OFFSET UNITYSDK_OFFSET(0x3A7D7F0)
#define MIHOYO_SDK_TOAST_FDBCDBBFE02CD51A_OFFSET UNITYSDK_OFFSET(0x3A7D760)
#define MIHOYO_SDK_TOAST__CCTOR_OFFSET UNITYSDK_OFFSET(0x3A7E3B0)
#define MIHOYO_SDK_TOAST__CTOR_OFFSET UNITYSDK_OFFSET(0x39230A0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int Toast_TypeDefinitionIndex = 11951;

	class Toast : public ::MiHoYo::SDK::UIElement
	{
	public:
		static ::MiHoYo::SDK::UIManager** StaticGet_E368C73B8B30E25D()
		{
			return (::MiHoYo::SDK::UIManager**)Il2CppClass::FromTypeDefinitionIndex(Toast_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Collections::Generic::List_1<::System::Action*>** StaticGet_A0F1C4EAA366D64B()
		{
			return (::System::Collections::Generic::List_1<::System::Action*>**)Il2CppClass::FromTypeDefinitionIndex(Toast_TypeDefinitionIndex)->GetStaticField(0x8);
		}
		::System::String* content; // 0x60
		::UnityEngine::UI::Text* EBDAAC6A711D7E55; // 0x68

		static ::System::Void E85D1C741D5386D7()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_TOAST_E85D1C741D5386D7_OFFSET))();
		}

		static ::System::Void BFA7961FF2AC380B(::System::String* E0C0689B1CEBE48C, ::System::Boolean F54571856C51D0E8)
		{
			return ((::System::Void(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TOAST_BFA7961FF2AC380B_OFFSET))(E0C0689B1CEBE48C, F54571856C51D0E8);
		}

		::System::Void FDBCDBBFE02CD51A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TOAST_FDBCDBBFE02CD51A_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TOAST__CTOR_OFFSET))(this);
		}

		static ::System::Boolean F61C4B3F8F43228A(::System::String* B083BE7841B347C4, ::System::Boolean F54571856C51D0E8)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TOAST_F61C4B3F8F43228A_OFFSET))(B083BE7841B347C4, F54571856C51D0E8);
		}

		::System::Void F94F3A4AD47F302C(::System::Single FF0A37159A523E06)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TOAST_F94F3A4AD47F302C_OFFSET))(this, FF0A37159A523E06);
		}

		::System::Void BF13C91AD80643D2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TOAST_BF13C91AD80643D2_OFFSET))(this);
		}

		::System::Void F328E4D8818B1E12()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TOAST_F328E4D8818B1E12_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_TOAST__CCTOR_OFFSET))();
		}
	};
}
