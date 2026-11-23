#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }

#define F7F97A0BCB155C0E_A527EE0EF09ADE12_INVOKE_OFFSET UNITYSDK_OFFSET(0x1F36B50)
#define F7F97A0BCB155C0E_A527EE0EF09ADE12__CTOR_OFFSET UNITYSDK_OFFSET(0x1F36B60)

inline static constexpr unsigned int F7F97A0BCB155C0E_A527EE0EF09ADE12_TypeDefinitionIndex = 18333;

class F7F97A0BCB155C0E_A527EE0EF09ADE12 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + F7F97A0BCB155C0E_A527EE0EF09ADE12__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
	}

	::System::Void Invoke()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F7F97A0BCB155C0E_A527EE0EF09ADE12_INVOKE_OFFSET))(this);
	}
};
