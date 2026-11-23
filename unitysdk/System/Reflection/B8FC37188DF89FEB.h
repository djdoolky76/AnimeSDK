#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }
namespace System { class Type; }

#define SYSTEM_REFLECTION_B8FC37188DF89FEB_INVOKE_OFFSET UNITYSDK_OFFSET(0x1FE7F90)
#define SYSTEM_REFLECTION_B8FC37188DF89FEB__CTOR_OFFSET UNITYSDK_OFFSET(0x37499F0)

namespace System::Reflection
{
	inline static constexpr unsigned int B8FC37188DF89FEB_TypeDefinitionIndex = 10467;

	class B8FC37188DF89FEB : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_B8FC37188DF89FEB__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
		}

		::System::Boolean Invoke(::System::Type* B8A196AEAF73E28B, ::System::Object* E157E476FD99A25A)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_B8FC37188DF89FEB_INVOKE_OFFSET))(this, B8A196AEAF73E28B, E157E476FD99A25A);
		}
	};
}
