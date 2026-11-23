#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }

#define E6E92B21EB2C303F_ACE54BDA151AE2DB_EB90367F00A12EDE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1F36B50)
#define E6E92B21EB2C303F_ACE54BDA151AE2DB_EB90367F00A12EDE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F36B60)

namespace E6E92B21EB2C303F
{
	inline static constexpr unsigned int ACE54BDA151AE2DB_EB90367F00A12EDE_TypeDefinitionIndex = 16991;

	class ACE54BDA151AE2DB_EB90367F00A12EDE : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + E6E92B21EB2C303F_ACE54BDA151AE2DB_EB90367F00A12EDE__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
		}

		::System::Void Invoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E6E92B21EB2C303F_ACE54BDA151AE2DB_EB90367F00A12EDE_INVOKE_OFFSET))(this);
		}
	};
}
