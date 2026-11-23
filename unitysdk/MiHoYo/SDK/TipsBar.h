#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/UIElement.h"

namespace MiHoYo::SDK { class UIManager; }
namespace System { class String; }
namespace UnityEngine { class B07D27203C69A8A5; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Text; }

#define MIHOYO_SDK_TIPSBAR_AB36E0EE549986E5_OFFSET UNITYSDK_OFFSET(0x3AF5C50)
#define MIHOYO_SDK_TIPSBAR_BF13C91AD80643D2_OFFSET UNITYSDK_OFFSET(0x3AF5C70)
#define MIHOYO_SDK_TIPSBAR_BFA7961FF2AC380B_OFFSET UNITYSDK_OFFSET(0x3AF62F0)
#define MIHOYO_SDK_TIPSBAR_E85D1C741D5386D7_OFFSET UNITYSDK_OFFSET(0x3AF5BC0)
#define MIHOYO_SDK_TIPSBAR_F328E4D8818B1E12_OFFSET UNITYSDK_OFFSET(0x3AF6520)
#define MIHOYO_SDK_TIPSBAR_F61C4B3F8F43228A_OFFSET UNITYSDK_OFFSET(0x3AF5D10)
#define MIHOYO_SDK_TIPSBAR_F94F3A4AD47F302C_OFFSET UNITYSDK_OFFSET(0x3AF5B20)
#define MIHOYO_SDK_TIPSBAR_FDBCDBBFE02CD51A_OFFSET UNITYSDK_OFFSET(0x3AF5A10)
#define MIHOYO_SDK_TIPSBAR__CTOR_OFFSET UNITYSDK_OFFSET(0x39230A0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int TipsBar_TypeDefinitionIndex = 12212;

	class TipsBar : public ::MiHoYo::SDK::UIElement
	{
	public:
		static ::MiHoYo::SDK::UIManager** StaticGet_E368C73B8B30E25D()
		{
			return (::MiHoYo::SDK::UIManager**)Il2CppClass::FromTypeDefinitionIndex(TipsBar_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::System::String* imageName; // 0x60
		::System::String* content; // 0x68
		::UnityEngine::B07D27203C69A8A5* A0D367359644130F; // 0x70
		::UnityEngine::UI::Image* F11CC8800C5D1862; // 0x78
		::UnityEngine::UI::Text* EBDAAC6A711D7E55; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TIPSBAR__CTOR_OFFSET))(this);
		}

		::System::Void AB36E0EE549986E5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TIPSBAR_AB36E0EE549986E5_OFFSET))(this);
		}

		::System::Void FDBCDBBFE02CD51A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TIPSBAR_FDBCDBBFE02CD51A_OFFSET))(this);
		}

		::System::Void F94F3A4AD47F302C(::System::Single FF0A37159A523E06)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TIPSBAR_F94F3A4AD47F302C_OFFSET))(this, FF0A37159A523E06);
		}

		::System::Void BF13C91AD80643D2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TIPSBAR_BF13C91AD80643D2_OFFSET))(this);
		}

		::System::Void F328E4D8818B1E12()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TIPSBAR_F328E4D8818B1E12_OFFSET))(this);
		}

		static ::System::Void BFA7961FF2AC380B(::System::String* EF2BE4C40C833054, ::System::String* E0C0689B1CEBE48C)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TIPSBAR_BFA7961FF2AC380B_OFFSET))(EF2BE4C40C833054, E0C0689B1CEBE48C);
		}

		static ::System::Boolean F61C4B3F8F43228A(::System::String* EF2BE4C40C833054, ::System::String* E0C0689B1CEBE48C)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TIPSBAR_F61C4B3F8F43228A_OFFSET))(EF2BE4C40C833054, E0C0689B1CEBE48C);
		}

		static ::System::Void E85D1C741D5386D7()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_TIPSBAR_E85D1C741D5386D7_OFFSET))();
		}
	};
}
