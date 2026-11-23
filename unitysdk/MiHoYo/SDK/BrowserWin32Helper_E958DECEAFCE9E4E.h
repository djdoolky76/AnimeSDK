#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }

#define MIHOYO_SDK_BROWSERWIN32HELPER_E958DECEAFCE9E4E_INVOKE_OFFSET UNITYSDK_OFFSET(0x1FE7F90)
#define MIHOYO_SDK_BROWSERWIN32HELPER_E958DECEAFCE9E4E__CTOR_OFFSET UNITYSDK_OFFSET(0x29D0E30)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int BrowserWin32Helper_E958DECEAFCE9E4E_TypeDefinitionIndex = 15719;

	class BrowserWin32Helper_E958DECEAFCE9E4E : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BROWSERWIN32HELPER_E958DECEAFCE9E4E__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
		}

		::System::Boolean Invoke(::System::IntPtr A29096180C991848, ::System::IntPtr F62C50790101B70F)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IntPtr, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BROWSERWIN32HELPER_E958DECEAFCE9E4E_INVOKE_OFFSET))(this, A29096180C991848, F62C50790101B70F);
		}
	};
}
