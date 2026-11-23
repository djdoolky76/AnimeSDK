#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/B95DF7E83FC8D73C.h"

namespace System { class Object; }

#define E7F9C9491EE9F059_E497C885EE8CCBB1_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CF4AC0)
#define E7F9C9491EE9F059_E497C885EE8CCBB1__CTOR_OFFSET UNITYSDK_OFFSET(0x372AC20)

namespace E7F9C9491EE9F059
{
	inline static constexpr unsigned int E497C885EE8CCBB1_TypeDefinitionIndex = 14509;

	class E497C885EE8CCBB1 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + E7F9C9491EE9F059_E497C885EE8CCBB1__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
		}

		::System::Int64 Invoke(::B95DF7E83FC8D73C& A05B43D4AA20B471)
		{
			return ((::System::Int64(*)(::PVOID, ::B95DF7E83FC8D73C&))((::PBYTE)hIl2Cpp + E7F9C9491EE9F059_E497C885EE8CCBB1_INVOKE_OFFSET))(this, A05B43D4AA20B471);
		}
	};
}
