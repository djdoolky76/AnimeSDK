#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }

#define SYSTEM_ACTION_INVOKE_OFFSET UNITYSDK_OFFSET(0x1F36B50)
#define SYSTEM_ACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1F36B60)

namespace System
{
	inline static constexpr unsigned int Action_TypeDefinitionIndex = 11362;

	class Action : public ::System::MulticastDelegate
	{
	public:
		::System::Void Invoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ACTION_INVOKE_OFFSET))(this);
		}

		::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_ACTION__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
		}
	};
}
