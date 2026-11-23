#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }

#define SYSTEM_THREADING_B17578343D8B7961_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CF4AC0)
#define SYSTEM_THREADING_B17578343D8B7961__CTOR_OFFSET UNITYSDK_OFFSET(0x2991280)

namespace System::Threading
{
	inline static constexpr unsigned int B17578343D8B7961_TypeDefinitionIndex = 10303;

	class B17578343D8B7961 : public ::System::MulticastDelegate
	{
	public:
		::System::Void Invoke(::System::Object* A86A90C31A146E9C)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_B17578343D8B7961_INVOKE_OFFSET))(this, A86A90C31A146E9C);
		}

		::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_B17578343D8B7961__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
		}
	};
}
