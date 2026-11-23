#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class A3F70B3A64449992;
namespace System { class Object; }

#define E978BF378568245D_MONOTIMER_E61AEADBDBE0B07F_INVOKE_OFFSET UNITYSDK_OFFSET(0x1FE7F90)
#define E978BF378568245D_MONOTIMER_E61AEADBDBE0B07F__CTOR_OFFSET UNITYSDK_OFFSET(0x2936B70)

inline static constexpr unsigned int E978BF378568245D_MonoTimer_E61AEADBDBE0B07F_TypeDefinitionIndex = 15399;

class E978BF378568245D_MonoTimer_E61AEADBDBE0B07F : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + E978BF378568245D_MONOTIMER_E61AEADBDBE0B07F__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
	}

	::System::Void Invoke(::System::Object* AD0CAFBAFB8B01EA, ::A3F70B3A64449992* A5FB7225DA5C5A9B)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::A3F70B3A64449992*))((::PBYTE)hIl2Cpp + E978BF378568245D_MONOTIMER_E61AEADBDBE0B07F_INVOKE_OFFSET))(this, AD0CAFBAFB8B01EA, A5FB7225DA5C5A9B);
	}
};
