#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/UIElement.h"

namespace MiHoYo::SDK { class UIManager; }
namespace System { class String; }
namespace UnityEngine::UI { class Text; }

#define MIHOYO_SDK_LOADINGTIPS_A6A66E6669CC7BBA_OFFSET UNITYSDK_OFFSET(0x3A01670)
#define MIHOYO_SDK_LOADINGTIPS_AE384FFDD8827404_OFFSET UNITYSDK_OFFSET(0x3A00E80)
#define MIHOYO_SDK_LOADINGTIPS_BFA7961FF2AC380B_OFFSET UNITYSDK_OFFSET(0x3A01340)
#define MIHOYO_SDK_LOADINGTIPS_E85D1C741D5386D7_OFFSET UNITYSDK_OFFSET(0x3A00FA0)
#define MIHOYO_SDK_LOADINGTIPS_F328E4D8818B1E12_OFFSET UNITYSDK_OFFSET(0x3A01630)
#define MIHOYO_SDK_LOADINGTIPS_F61C4B3F8F43228A_OFFSET UNITYSDK_OFFSET(0x3A01140)
#define MIHOYO_SDK_LOADINGTIPS_F94F3A4AD47F302C_OFFSET UNITYSDK_OFFSET(0x3A00DF0)
#define MIHOYO_SDK_LOADINGTIPS_FDBCDBBFE02CD51A_OFFSET UNITYSDK_OFFSET(0x3A00D60)
#define MIHOYO_SDK_LOADINGTIPS__CTOR_OFFSET UNITYSDK_OFFSET(0x39230A0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int LoadingTips_TypeDefinitionIndex = 12740;

	class LoadingTips : public ::MiHoYo::SDK::UIElement
	{
	public:
		static ::MiHoYo::SDK::UIManager** StaticGet_E368C73B8B30E25D()
		{
			return (::MiHoYo::SDK::UIManager**)Il2CppClass::FromTypeDefinitionIndex(LoadingTips_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::System::String* tips; // 0x60
		::UnityEngine::UI::Text* A7F5825C3C884E63; // 0x68

		static ::System::Void BFA7961FF2AC380B(::System::String* A3F06B88B290B21F, ::System::Single FEEDB8BE9199AA3E)
		{
			return ((::System::Void(*)(::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MIHOYO_SDK_LOADINGTIPS_BFA7961FF2AC380B_OFFSET))(A3F06B88B290B21F, FEEDB8BE9199AA3E);
		}

		::System::Void F328E4D8818B1E12()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_LOADINGTIPS_F328E4D8818B1E12_OFFSET))(this);
		}

		::System::Void A6A66E6669CC7BBA(::System::String* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_LOADINGTIPS_A6A66E6669CC7BBA_OFFSET))(this, E937D4885DAA1AE8);
		}

		static ::System::Boolean AE384FFDD8827404()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_LOADINGTIPS_AE384FFDD8827404_OFFSET))();
		}

		::System::Void F94F3A4AD47F302C(::System::Single FF0A37159A523E06)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MIHOYO_SDK_LOADINGTIPS_F94F3A4AD47F302C_OFFSET))(this, FF0A37159A523E06);
		}

		::System::Void FDBCDBBFE02CD51A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_LOADINGTIPS_FDBCDBBFE02CD51A_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_LOADINGTIPS__CTOR_OFFSET))(this);
		}

		static ::System::Boolean F61C4B3F8F43228A(::System::String* A3F06B88B290B21F)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_LOADINGTIPS_F61C4B3F8F43228A_OFFSET))(A3F06B88B290B21F);
		}

		static ::System::Void E85D1C741D5386D7()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_LOADINGTIPS_E85D1C741D5386D7_OFFSET))();
		}
	};
}
