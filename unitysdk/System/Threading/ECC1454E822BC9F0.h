#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }

#define SYSTEM_THREADING_ECC1454E822BC9F0_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CF4AC0)
#define SYSTEM_THREADING_ECC1454E822BC9F0__CTOR_OFFSET UNITYSDK_OFFSET(0x27E21E0)

namespace System::Threading
{
	inline static constexpr unsigned int ECC1454E822BC9F0_TypeDefinitionIndex = 11124;

	class ECC1454E822BC9F0 : public ::System::MulticastDelegate
	{
	public:
		::System::Void Invoke(::System::Object* E5EB06E4FD2C32F7)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_ECC1454E822BC9F0_INVOKE_OFFSET))(this, E5EB06E4FD2C32F7);
		}

		::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_ECC1454E822BC9F0__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
		}
	};
}
