#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/UIElement.h"

namespace MiHoYo::SDK { class UIManager; }
namespace System { class String; }
namespace UnityEngine { class RectTransform; }

#define MIHOYO_SDK_TOOLTIP_BFA7961FF2AC380B_OFFSET UNITYSDK_OFFSET(0x3A28C10)
#define MIHOYO_SDK_TOOLTIP_E02954280801633F_OFFSET UNITYSDK_OFFSET(0x3A29200)
#define MIHOYO_SDK_TOOLTIP_E85D1C741D5386D7_OFFSET UNITYSDK_OFFSET(0x3A28B80)
#define MIHOYO_SDK_TOOLTIP_EFA1675A71BA6A40_OFFSET UNITYSDK_OFFSET(0x3A28FB0)
#define MIHOYO_SDK_TOOLTIP_F328E4D8818B1E12_OFFSET UNITYSDK_OFFSET(0x3A28E00)
#define MIHOYO_SDK_TOOLTIP__CTOR_OFFSET UNITYSDK_OFFSET(0x3A292B0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int Tooltip_TypeDefinitionIndex = 12862;

	class Tooltip : public ::MiHoYo::SDK::UIElement
	{
	public:
		static ::MiHoYo::SDK::UIManager** StaticGet_E368C73B8B30E25D()
		{
			return (::MiHoYo::SDK::UIManager**)Il2CppClass::FromTypeDefinitionIndex(Tooltip_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::System::String* Text; // 0x60
		::UnityEngine::RectTransform* OwnerTransform; // 0x68
		::System::Boolean NeedPositionUpdating; // 0x70
		::System::Byte _padding0[0x3];
		::System::Single BFF6EC84285CA5B8; // 0x74
		::UnityEngine::RectTransform* AE2BA194D5E557E6; // 0x78

		static ::System::Void BFA7961FF2AC380B(::UnityEngine::RectTransform* EBA09DAA48563DDB, ::System::String* E0C0689B1CEBE48C)
		{
			return ((::System::Void(*)(::UnityEngine::RectTransform*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TOOLTIP_BFA7961FF2AC380B_OFFSET))(EBA09DAA48563DDB, E0C0689B1CEBE48C);
		}

		::System::Void E02954280801633F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TOOLTIP_E02954280801633F_OFFSET))(this);
		}

		static ::System::Void E85D1C741D5386D7()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_TOOLTIP_E85D1C741D5386D7_OFFSET))();
		}

		::System::Void EFA1675A71BA6A40()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TOOLTIP_EFA1675A71BA6A40_OFFSET))(this);
		}

		::System::Void F328E4D8818B1E12()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TOOLTIP_F328E4D8818B1E12_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TOOLTIP__CTOR_OFFSET))(this);
		}
	};
}
