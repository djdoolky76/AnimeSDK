#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }

#define A2FF7DDBB9FA1D4E_F9E04A816825E161_INVOKE_OFFSET UNITYSDK_OFFSET(0x1FE7F90)
#define A2FF7DDBB9FA1D4E_F9E04A816825E161__CTOR_OFFSET UNITYSDK_OFFSET(0x32B6DB0)

inline static constexpr unsigned int A2FF7DDBB9FA1D4E_F9E04A816825E161_TypeDefinitionIndex = 12632;

class A2FF7DDBB9FA1D4E_F9E04A816825E161 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + A2FF7DDBB9FA1D4E_F9E04A816825E161__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
	}

	::System::Void Invoke(::System::Int32 A5AAF78F7CBF5B68, ::System::Int32 E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + A2FF7DDBB9FA1D4E_F9E04A816825E161_INVOKE_OFFSET))(this, A5AAF78F7CBF5B68, E937D4885DAA1AE8);
	}
};
