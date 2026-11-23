#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }
namespace System::Reflection { class MemberInfo; }

#define SYSTEM_REFLECTION_BB2290E7B6F9D13C_INVOKE_OFFSET UNITYSDK_OFFSET(0x1FE7F90)
#define SYSTEM_REFLECTION_BB2290E7B6F9D13C__CTOR_OFFSET UNITYSDK_OFFSET(0x3C19D60)

namespace System::Reflection
{
	inline static constexpr unsigned int BB2290E7B6F9D13C_TypeDefinitionIndex = 11447;

	class BB2290E7B6F9D13C : public ::System::MulticastDelegate
	{
	public:
		::System::Boolean Invoke(::System::Reflection::MemberInfo* B8A196AEAF73E28B, ::System::Object* E157E476FD99A25A)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Reflection::MemberInfo*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_BB2290E7B6F9D13C_INVOKE_OFFSET))(this, B8A196AEAF73E28B, E157E476FD99A25A);
		}

		::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_BB2290E7B6F9D13C__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
		}
	};
}
