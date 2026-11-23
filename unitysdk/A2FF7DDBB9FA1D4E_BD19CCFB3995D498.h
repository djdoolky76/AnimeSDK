#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class A2FF7DDBB9FA1D4E_B06DEED659B5AD45;
namespace System { class Object; }

#define A2FF7DDBB9FA1D4E_BD19CCFB3995D498_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CF4AC0)
#define A2FF7DDBB9FA1D4E_BD19CCFB3995D498__CTOR_OFFSET UNITYSDK_OFFSET(0x22B96A0)

inline static constexpr unsigned int A2FF7DDBB9FA1D4E_BD19CCFB3995D498_TypeDefinitionIndex = 12622;

class A2FF7DDBB9FA1D4E_BD19CCFB3995D498 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + A2FF7DDBB9FA1D4E_BD19CCFB3995D498__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
	}

	::System::Void Invoke(::A2FF7DDBB9FA1D4E_B06DEED659B5AD45* E04D2BE64FCE9814)
	{
		return ((::System::Void(*)(::PVOID, ::A2FF7DDBB9FA1D4E_B06DEED659B5AD45*))((::PBYTE)hIl2Cpp + A2FF7DDBB9FA1D4E_BD19CCFB3995D498_INVOKE_OFFSET))(this, E04D2BE64FCE9814);
	}
};
