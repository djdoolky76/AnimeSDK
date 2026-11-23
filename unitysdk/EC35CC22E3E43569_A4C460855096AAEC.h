#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }

#define EC35CC22E3E43569_A4C460855096AAEC_INVOKE_OFFSET UNITYSDK_OFFSET(0x1F7B8B0)
#define EC35CC22E3E43569_A4C460855096AAEC__CTOR_OFFSET UNITYSDK_OFFSET(0x3E52150)

inline static constexpr unsigned int EC35CC22E3E43569_A4C460855096AAEC_TypeDefinitionIndex = 14833;

class EC35CC22E3E43569_A4C460855096AAEC : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EC35CC22E3E43569_A4C460855096AAEC__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
	}

	::System::Int32 Invoke(::System::IntPtr ABFACF4B79951FBB, ::System::Int32 E307ED592E9EF23B, ::System::IntPtr F99B0FE319DB74D1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::IntPtr, ::System::Int32, ::System::IntPtr))((::PBYTE)hIl2Cpp + EC35CC22E3E43569_A4C460855096AAEC_INVOKE_OFFSET))(this, ABFACF4B79951FBB, E307ED592E9EF23B, F99B0FE319DB74D1);
	}
};
