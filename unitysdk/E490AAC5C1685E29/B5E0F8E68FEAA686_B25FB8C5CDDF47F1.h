#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }

#define E490AAC5C1685E29_B5E0F8E68FEAA686_B25FB8C5CDDF47F1_INVOKE_OFFSET UNITYSDK_OFFSET(0x1F36B50)
#define E490AAC5C1685E29_B5E0F8E68FEAA686_B25FB8C5CDDF47F1__CTOR_OFFSET UNITYSDK_OFFSET(0x1F36B60)

namespace E490AAC5C1685E29
{
	inline static constexpr unsigned int B5E0F8E68FEAA686_B25FB8C5CDDF47F1_TypeDefinitionIndex = 21273;

	class B5E0F8E68FEAA686_B25FB8C5CDDF47F1 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + E490AAC5C1685E29_B5E0F8E68FEAA686_B25FB8C5CDDF47F1__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
		}

		::System::Void Invoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E490AAC5C1685E29_B5E0F8E68FEAA686_B25FB8C5CDDF47F1_INVOKE_OFFSET))(this);
		}
	};
}
