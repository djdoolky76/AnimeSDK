#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }

#define B7D87165C2B5D55C_B919D52AD3384469_INVOKE_OFFSET UNITYSDK_OFFSET(0x1FE7F90)
#define B7D87165C2B5D55C_B919D52AD3384469__CTOR_OFFSET UNITYSDK_OFFSET(0x39232F0)

inline static constexpr unsigned int B7D87165C2B5D55C_B919D52AD3384469_TypeDefinitionIndex = 12344;

class B7D87165C2B5D55C_B919D52AD3384469 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + B7D87165C2B5D55C_B919D52AD3384469__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
	}

	::System::Void Invoke(::System::IntPtr E11726DF89A23608, ::System::Int32 F54AF627638DE3C9)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + B7D87165C2B5D55C_B919D52AD3384469_INVOKE_OFFSET))(this, E11726DF89A23608, F54AF627638DE3C9);
	}
};
