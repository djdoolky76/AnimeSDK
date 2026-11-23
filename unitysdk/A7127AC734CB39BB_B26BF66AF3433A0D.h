#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class A7127AC734CB39BB;
namespace System { class Object; }

#define A7127AC734CB39BB_B26BF66AF3433A0D_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CF4AC0)
#define A7127AC734CB39BB_B26BF66AF3433A0D__CTOR_OFFSET UNITYSDK_OFFSET(0x2991280)

inline static constexpr unsigned int A7127AC734CB39BB_B26BF66AF3433A0D_TypeDefinitionIndex = 19059;

class A7127AC734CB39BB_B26BF66AF3433A0D : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + A7127AC734CB39BB_B26BF66AF3433A0D__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
	}

	::System::Void Invoke(::A7127AC734CB39BB* A12EE491614174A2)
	{
		return ((::System::Void(*)(::PVOID, ::A7127AC734CB39BB*))((::PBYTE)hIl2Cpp + A7127AC734CB39BB_B26BF66AF3433A0D_INVOKE_OFFSET))(this, A12EE491614174A2);
	}
};
