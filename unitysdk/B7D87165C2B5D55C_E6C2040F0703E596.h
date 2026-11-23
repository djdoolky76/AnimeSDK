#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }

#define B7D87165C2B5D55C_E6C2040F0703E596_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CF4AC0)
#define B7D87165C2B5D55C_E6C2040F0703E596__CTOR_OFFSET UNITYSDK_OFFSET(0x29BE330)

inline static constexpr unsigned int B7D87165C2B5D55C_E6C2040F0703E596_TypeDefinitionIndex = 12346;

class B7D87165C2B5D55C_E6C2040F0703E596 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + B7D87165C2B5D55C_E6C2040F0703E596__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
	}

	::System::Void Invoke(::System::Int64 B714679C324FF96E)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + B7D87165C2B5D55C_E6C2040F0703E596_INVOKE_OFFSET))(this, B714679C324FF96E);
	}
};
