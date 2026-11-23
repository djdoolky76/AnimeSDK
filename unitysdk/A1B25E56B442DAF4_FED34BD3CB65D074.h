#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class E1A406BE9C920545;
namespace System { class Object; }
namespace System { class String; }

#define A1B25E56B442DAF4_FED34BD3CB65D074_INVOKE_OFFSET UNITYSDK_OFFSET(0x1FE7F90)
#define A1B25E56B442DAF4_FED34BD3CB65D074__CTOR_OFFSET UNITYSDK_OFFSET(0x20F9B00)

inline static constexpr unsigned int A1B25E56B442DAF4_FED34BD3CB65D074_TypeDefinitionIndex = 8642;

class A1B25E56B442DAF4_FED34BD3CB65D074 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + A1B25E56B442DAF4_FED34BD3CB65D074__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
	}

	::System::Void Invoke(::E1A406BE9C920545* B08D041A4C2E0EAA, ::System::String* B960AC235824C6C8)
	{
		return ((::System::Void(*)(::PVOID, ::E1A406BE9C920545*, ::System::String*))((::PBYTE)hIl2Cpp + A1B25E56B442DAF4_FED34BD3CB65D074_INVOKE_OFFSET))(this, B08D041A4C2E0EAA, B960AC235824C6C8);
	}
};
