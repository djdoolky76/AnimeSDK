#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }

#define SYSTEM_THREADING_FED5A6E821F45549_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CF4AC0)
#define SYSTEM_THREADING_FED5A6E821F45549__CTOR_OFFSET UNITYSDK_OFFSET(0x1FE7D60)

namespace System::Threading
{
	inline static constexpr unsigned int FED5A6E821F45549_TypeDefinitionIndex = 10402;

	class FED5A6E821F45549 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_FED5A6E821F45549__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
		}

		::System::Void Invoke(::System::Object* E5EB06E4FD2C32F7)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_FED5A6E821F45549_INVOKE_OFFSET))(this, E5EB06E4FD2C32F7);
		}
	};
}
