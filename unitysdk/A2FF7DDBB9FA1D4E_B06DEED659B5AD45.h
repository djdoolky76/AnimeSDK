#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }

#define A2FF7DDBB9FA1D4E_B06DEED659B5AD45_INVOKE_OFFSET UNITYSDK_OFFSET(0x1FE7F90)
#define A2FF7DDBB9FA1D4E_B06DEED659B5AD45__CTOR_OFFSET UNITYSDK_OFFSET(0x32B6A80)

inline static constexpr unsigned int A2FF7DDBB9FA1D4E_B06DEED659B5AD45_TypeDefinitionIndex = 12621;

class A2FF7DDBB9FA1D4E_B06DEED659B5AD45 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + A2FF7DDBB9FA1D4E_B06DEED659B5AD45__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
	}

	::System::Void Invoke(::System::Int32 B714679C324FF96E, ::System::Boolean EE1B54E029300321)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + A2FF7DDBB9FA1D4E_B06DEED659B5AD45_INVOKE_OFFSET))(this, B714679C324FF96E, EE1B54E029300321);
	}
};
