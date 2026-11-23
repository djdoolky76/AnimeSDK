#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }

#define F7E8AD66E3B39722_B81F8AE1A7469146_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CF4AC0)
#define F7E8AD66E3B39722_B81F8AE1A7469146__CTOR_OFFSET UNITYSDK_OFFSET(0x22B9540)

inline static constexpr unsigned int F7E8AD66E3B39722_B81F8AE1A7469146_TypeDefinitionIndex = 12160;

class F7E8AD66E3B39722_B81F8AE1A7469146 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + F7E8AD66E3B39722_B81F8AE1A7469146__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
	}

	::System::Void Invoke(::System::Boolean A3E26351629B9EF8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + F7E8AD66E3B39722_B81F8AE1A7469146_INVOKE_OFFSET))(this, A3E26351629B9EF8);
	}
};
