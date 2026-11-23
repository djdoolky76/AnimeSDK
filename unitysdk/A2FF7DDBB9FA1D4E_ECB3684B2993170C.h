#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }

#define A2FF7DDBB9FA1D4E_ECB3684B2993170C_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CF4AC0)
#define A2FF7DDBB9FA1D4E_ECB3684B2993170C__CTOR_OFFSET UNITYSDK_OFFSET(0x1FF6400)

inline static constexpr unsigned int A2FF7DDBB9FA1D4E_ECB3684B2993170C_TypeDefinitionIndex = 12634;

class A2FF7DDBB9FA1D4E_ECB3684B2993170C : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + A2FF7DDBB9FA1D4E_ECB3684B2993170C__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
	}

	::System::Void Invoke(::System::Int32 A5AAF78F7CBF5B68)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + A2FF7DDBB9FA1D4E_ECB3684B2993170C_INVOKE_OFFSET))(this, A5AAF78F7CBF5B68);
	}
};
