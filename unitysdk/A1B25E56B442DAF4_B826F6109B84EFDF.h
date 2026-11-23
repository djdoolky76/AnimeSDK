#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class E1A406BE9C920545;
namespace System { class Object; }

#define A1B25E56B442DAF4_B826F6109B84EFDF_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CF4AC0)
#define A1B25E56B442DAF4_B826F6109B84EFDF__CTOR_OFFSET UNITYSDK_OFFSET(0x1FE7D60)

inline static constexpr unsigned int A1B25E56B442DAF4_B826F6109B84EFDF_TypeDefinitionIndex = 8645;

class A1B25E56B442DAF4_B826F6109B84EFDF : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + A1B25E56B442DAF4_B826F6109B84EFDF__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
	}

	::System::Void Invoke(::E1A406BE9C920545* B08D041A4C2E0EAA)
	{
		return ((::System::Void(*)(::PVOID, ::E1A406BE9C920545*))((::PBYTE)hIl2Cpp + A1B25E56B442DAF4_B826F6109B84EFDF_INVOKE_OFFSET))(this, B08D041A4C2E0EAA);
	}
};
