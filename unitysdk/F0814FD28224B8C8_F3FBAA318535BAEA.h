#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class ACB4923ABE4919BB;
namespace System { class Object; }

#define F0814FD28224B8C8_F3FBAA318535BAEA_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CF4AC0)
#define F0814FD28224B8C8_F3FBAA318535BAEA__CTOR_OFFSET UNITYSDK_OFFSET(0x2991280)

inline static constexpr unsigned int F0814FD28224B8C8_F3FBAA318535BAEA_TypeDefinitionIndex = 20910;

class F0814FD28224B8C8_F3FBAA318535BAEA : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + F0814FD28224B8C8_F3FBAA318535BAEA__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
	}

	::System::Void Invoke(::ACB4923ABE4919BB* E82293C0814051A5)
	{
		return ((::System::Void(*)(::PVOID, ::ACB4923ABE4919BB*))((::PBYTE)hIl2Cpp + F0814FD28224B8C8_F3FBAA318535BAEA_INVOKE_OFFSET))(this, E82293C0814051A5);
	}
};
