#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }

#define A2FF7DDBB9FA1D4E_F6411748C82C8BC0_INVOKE_OFFSET UNITYSDK_OFFSET(0x1F36B50)
#define A2FF7DDBB9FA1D4E_F6411748C82C8BC0__CTOR_OFFSET UNITYSDK_OFFSET(0x3744C30)

inline static constexpr unsigned int A2FF7DDBB9FA1D4E_F6411748C82C8BC0_TypeDefinitionIndex = 12653;

class A2FF7DDBB9FA1D4E_F6411748C82C8BC0 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + A2FF7DDBB9FA1D4E_F6411748C82C8BC0__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
	}

	::System::Boolean Invoke()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + A2FF7DDBB9FA1D4E_F6411748C82C8BC0_INVOKE_OFFSET))(this);
	}
};
