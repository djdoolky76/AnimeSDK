#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }

#define UNITYENGINE_B6829B6AB01D1C49_INVOKE_OFFSET UNITYSDK_OFFSET(0x1F36B50)
#define UNITYENGINE_B6829B6AB01D1C49__CTOR_OFFSET UNITYSDK_OFFSET(0x1F36B60)

namespace UnityEngine
{
	inline static constexpr unsigned int B6829B6AB01D1C49_TypeDefinitionIndex = 20615;

	class B6829B6AB01D1C49 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_B6829B6AB01D1C49__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
		}

		::System::Void Invoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_B6829B6AB01D1C49_INVOKE_OFFSET))(this);
		}
	};
}
