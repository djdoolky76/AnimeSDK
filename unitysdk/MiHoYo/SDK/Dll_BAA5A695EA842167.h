#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }

#define MIHOYO_SDK_DLL_BAA5A695EA842167_INVOKE_OFFSET UNITYSDK_OFFSET(0x1F36B50)
#define MIHOYO_SDK_DLL_BAA5A695EA842167__CTOR_OFFSET UNITYSDK_OFFSET(0x1F36B60)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int Dll_BAA5A695EA842167_TypeDefinitionIndex = 12330;

	class Dll_BAA5A695EA842167 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DLL_BAA5A695EA842167__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
		}

		::System::Void Invoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DLL_BAA5A695EA842167_INVOKE_OFFSET))(this);
		}
	};
}
