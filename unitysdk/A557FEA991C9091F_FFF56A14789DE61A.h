#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }

#define A557FEA991C9091F_FFF56A14789DE61A_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CF4AC0)
#define A557FEA991C9091F_FFF56A14789DE61A__CTOR_OFFSET UNITYSDK_OFFSET(0x22B9540)

inline static constexpr unsigned int A557FEA991C9091F_FFF56A14789DE61A_TypeDefinitionIndex = 7187;

class A557FEA991C9091F_FFF56A14789DE61A : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + A557FEA991C9091F_FFF56A14789DE61A__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
	}

	::System::Void Invoke(::System::Boolean F9568861EFAAC8F7)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + A557FEA991C9091F_FFF56A14789DE61A_INVOKE_OFFSET))(this, F9568861EFAAC8F7);
	}
};
