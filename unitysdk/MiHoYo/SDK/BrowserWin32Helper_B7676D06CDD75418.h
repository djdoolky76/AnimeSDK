#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }

#define MIHOYO_SDK_BROWSERWIN32HELPER_B7676D06CDD75418_INVOKE_OFFSET UNITYSDK_OFFSET(0x29E6270)
#define MIHOYO_SDK_BROWSERWIN32HELPER_B7676D06CDD75418__CTOR_OFFSET UNITYSDK_OFFSET(0x29E6290)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int BrowserWin32Helper_B7676D06CDD75418_TypeDefinitionIndex = 15718;

	class BrowserWin32Helper_B7676D06CDD75418 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BROWSERWIN32HELPER_B7676D06CDD75418__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
		}

		::System::IntPtr Invoke(::System::IntPtr A29096180C991848, ::System::UInt32 B6018BB9F7294B44, ::System::IntPtr A2CC553528A998BC, ::System::IntPtr F62C50790101B70F, ::System::IntPtr BA177015BA9237D9, ::System::IntPtr F67B64946327F820)
		{
			return ((::System::IntPtr(*)(::PVOID, ::System::IntPtr, ::System::UInt32, ::System::IntPtr, ::System::IntPtr, ::System::IntPtr, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BROWSERWIN32HELPER_B7676D06CDD75418_INVOKE_OFFSET))(this, A29096180C991848, B6018BB9F7294B44, A2CC553528A998BC, F62C50790101B70F, BA177015BA9237D9, F67B64946327F820);
		}
	};
}
