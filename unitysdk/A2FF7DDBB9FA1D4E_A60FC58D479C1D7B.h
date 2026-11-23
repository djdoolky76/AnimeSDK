#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }

#define A2FF7DDBB9FA1D4E_A60FC58D479C1D7B_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CF4AC0)
#define A2FF7DDBB9FA1D4E_A60FC58D479C1D7B__CTOR_OFFSET UNITYSDK_OFFSET(0x29BE330)

inline static constexpr unsigned int A2FF7DDBB9FA1D4E_A60FC58D479C1D7B_TypeDefinitionIndex = 12654;

class A2FF7DDBB9FA1D4E_A60FC58D479C1D7B : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + A2FF7DDBB9FA1D4E_A60FC58D479C1D7B__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
	}

	::System::Void Invoke(::System::UInt64 BCF402292BD2E311)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + A2FF7DDBB9FA1D4E_A60FC58D479C1D7B_INVOKE_OFFSET))(this, BCF402292BD2E311);
	}
};
