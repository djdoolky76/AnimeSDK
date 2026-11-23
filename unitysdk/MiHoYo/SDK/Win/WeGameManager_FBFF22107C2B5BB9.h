#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }
namespace System { class String; }

#define MIHOYO_SDK_WIN_WEGAMEMANAGER_FBFF22107C2B5BB9_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CF4AC0)
#define MIHOYO_SDK_WIN_WEGAMEMANAGER_FBFF22107C2B5BB9__CTOR_OFFSET UNITYSDK_OFFSET(0x22B96A0)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int WeGameManager_FBFF22107C2B5BB9_TypeDefinitionIndex = 12703;

	class WeGameManager_FBFF22107C2B5BB9 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_WEGAMEMANAGER_FBFF22107C2B5BB9__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
		}

		::System::Void Invoke(::System::String* A9B0E744486424C1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_WEGAMEMANAGER_FBFF22107C2B5BB9_INVOKE_OFFSET))(this, A9B0E744486424C1);
		}
	};
}
