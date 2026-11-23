#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/UIElement.h"

namespace MiHoYo::SDK { class UIManager; }

#define MIHOYO_SDK_LOADINGWHEEL_AE384FFDD8827404_OFFSET UNITYSDK_OFFSET(0x3AB6B70)
#define MIHOYO_SDK_LOADINGWHEEL_BFA7961FF2AC380B_OFFSET UNITYSDK_OFFSET(0x3AB6F50)
#define MIHOYO_SDK_LOADINGWHEEL_E85D1C741D5386D7_OFFSET UNITYSDK_OFFSET(0x3AB6C90)
#define MIHOYO_SDK_LOADINGWHEEL_F61C4B3F8F43228A_OFFSET UNITYSDK_OFFSET(0x3AB6E30)
#define MIHOYO_SDK_LOADINGWHEEL__CTOR_OFFSET UNITYSDK_OFFSET(0x39230A0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int LoadingWheel_TypeDefinitionIndex = 12106;

	class LoadingWheel : public ::MiHoYo::SDK::UIElement
	{
	public:
		static ::MiHoYo::SDK::UIManager** StaticGet_E368C73B8B30E25D()
		{
			return (::MiHoYo::SDK::UIManager**)Il2CppClass::FromTypeDefinitionIndex(LoadingWheel_TypeDefinitionIndex)->GetStaticField(0x0);
		}

		static ::System::Boolean AE384FFDD8827404()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_LOADINGWHEEL_AE384FFDD8827404_OFFSET))();
		}

		static ::System::Void BFA7961FF2AC380B()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_LOADINGWHEEL_BFA7961FF2AC380B_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_LOADINGWHEEL__CTOR_OFFSET))(this);
		}

		static ::System::Boolean F61C4B3F8F43228A()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_LOADINGWHEEL_F61C4B3F8F43228A_OFFSET))();
		}

		static ::System::Void E85D1C741D5386D7()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_LOADINGWHEEL_E85D1C741D5386D7_OFFSET))();
		}
	};
}
