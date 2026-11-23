#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }

#define A2FF7DDBB9FA1D4E_E2668DFE8A85EAB6_INVOKE_OFFSET UNITYSDK_OFFSET(0x1F36B50)
#define A2FF7DDBB9FA1D4E_E2668DFE8A85EAB6__CTOR_OFFSET UNITYSDK_OFFSET(0x3744B80)

inline static constexpr unsigned int A2FF7DDBB9FA1D4E_E2668DFE8A85EAB6_TypeDefinitionIndex = 12620;

class A2FF7DDBB9FA1D4E_E2668DFE8A85EAB6 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + A2FF7DDBB9FA1D4E_E2668DFE8A85EAB6__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
	}

	::System::Int32 Invoke()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + A2FF7DDBB9FA1D4E_E2668DFE8A85EAB6_INVOKE_OFFSET))(this);
	}
};
