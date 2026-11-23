#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }

#define EC35CC22E3E43569_A1CBC3C8C3D74424_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CF4AC0)
#define EC35CC22E3E43569_A1CBC3C8C3D74424__CTOR_OFFSET UNITYSDK_OFFSET(0x3E520A0)

inline static constexpr unsigned int EC35CC22E3E43569_A1CBC3C8C3D74424_TypeDefinitionIndex = 14835;

class EC35CC22E3E43569_A1CBC3C8C3D74424 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EC35CC22E3E43569_A1CBC3C8C3D74424__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
	}

	::System::Int32 Invoke(::System::IntPtr ABFACF4B79951FBB)
	{
		return ((::System::Int32(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + EC35CC22E3E43569_A1CBC3C8C3D74424_INVOKE_OFFSET))(this, ABFACF4B79951FBB);
	}
};
