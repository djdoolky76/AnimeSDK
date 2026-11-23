#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }
namespace System { class String; }

#define A22342C00B5DB77A_ACE827EC646DBCFD_INVOKE_OFFSET UNITYSDK_OFFSET(0x1FE7F90)
#define A22342C00B5DB77A_ACE827EC646DBCFD__CTOR_OFFSET UNITYSDK_OFFSET(0x38DDC80)

inline static constexpr unsigned int A22342C00B5DB77A_ACE827EC646DBCFD_TypeDefinitionIndex = 12846;

class A22342C00B5DB77A_ACE827EC646DBCFD : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + A22342C00B5DB77A_ACE827EC646DBCFD__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
	}

	::System::Int32 Invoke(::System::String* F107E7D7D212AB4E, ::System::IntPtr ED7987CAC9C10A08)
	{
		return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::IntPtr))((::PBYTE)hIl2Cpp + A22342C00B5DB77A_ACE827EC646DBCFD_INVOKE_OFFSET))(this, F107E7D7D212AB4E, ED7987CAC9C10A08);
	}
};
