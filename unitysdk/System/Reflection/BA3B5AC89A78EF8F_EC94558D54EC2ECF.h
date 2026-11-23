#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }

#define SYSTEM_REFLECTION_BA3B5AC89A78EF8F_EC94558D54EC2ECF_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CF4AC0)
#define SYSTEM_REFLECTION_BA3B5AC89A78EF8F_EC94558D54EC2ECF__CTOR_OFFSET UNITYSDK_OFFSET(0x1E1BB30)

namespace System::Reflection
{
	inline static constexpr unsigned int BA3B5AC89A78EF8F_EC94558D54EC2ECF_TypeDefinitionIndex = 11165;

	class BA3B5AC89A78EF8F_EC94558D54EC2ECF : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_BA3B5AC89A78EF8F_EC94558D54EC2ECF__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
		}

		::System::Object* Invoke(::System::Object* BE3AC753D09FA112)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_BA3B5AC89A78EF8F_EC94558D54EC2ECF_INVOKE_OFFSET))(this, BE3AC753D09FA112);
		}
	};
}
