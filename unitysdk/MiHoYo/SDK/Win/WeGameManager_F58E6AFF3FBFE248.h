#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }

#define MIHOYO_SDK_WIN_WEGAMEMANAGER_F58E6AFF3FBFE248_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CF4AC0)
#define MIHOYO_SDK_WIN_WEGAMEMANAGER_F58E6AFF3FBFE248__CTOR_OFFSET UNITYSDK_OFFSET(0x1FF6400)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int WeGameManager_F58E6AFF3FBFE248_TypeDefinitionIndex = 12702;

	class WeGameManager_F58E6AFF3FBFE248 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_WEGAMEMANAGER_F58E6AFF3FBFE248__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
		}

		::System::Void Invoke(::System::Int32 B714679C324FF96E)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_WEGAMEMANAGER_F58E6AFF3FBFE248_INVOKE_OFFSET))(this, B714679C324FF96E);
		}
	};
}
