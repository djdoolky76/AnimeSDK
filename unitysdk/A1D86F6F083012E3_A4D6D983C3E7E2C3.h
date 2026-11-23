#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }

#define A1D86F6F083012E3_A4D6D983C3E7E2C3_INVOKE_OFFSET UNITYSDK_OFFSET(0x1FE7C20)
#define A1D86F6F083012E3_A4D6D983C3E7E2C3__CTOR_OFFSET UNITYSDK_OFFSET(0x2D0FCE0)

inline static constexpr unsigned int A1D86F6F083012E3_A4D6D983C3E7E2C3_TypeDefinitionIndex = 14704;

class A1D86F6F083012E3_A4D6D983C3E7E2C3 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + A1D86F6F083012E3_A4D6D983C3E7E2C3__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
	}

	::System::Void Invoke(::PVOID B44B7249A0CEA238, ::PVOID F99B0FE319DB74D1, ::PVOID F7D69E1E9C270B24, ::System::IntPtr A1FC421A10121B50)
	{
		return ((::System::Void(*)(::PVOID, ::PVOID, ::PVOID, ::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + A1D86F6F083012E3_A4D6D983C3E7E2C3_INVOKE_OFFSET))(this, B44B7249A0CEA238, F99B0FE319DB74D1, F7D69E1E9C270B24, A1FC421A10121B50);
	}
};
