#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }

#define SYSTEM_THREADING_AA14CBD63344BF4C_INVOKE_OFFSET UNITYSDK_OFFSET(0x1F36B50)
#define SYSTEM_THREADING_AA14CBD63344BF4C__CTOR_OFFSET UNITYSDK_OFFSET(0x1F36B60)

namespace System::Threading
{
	inline static constexpr unsigned int AA14CBD63344BF4C_TypeDefinitionIndex = 11371;

	class AA14CBD63344BF4C : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_AA14CBD63344BF4C__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
		}

		::System::Void Invoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_AA14CBD63344BF4C_INVOKE_OFFSET))(this);
		}
	};
}
