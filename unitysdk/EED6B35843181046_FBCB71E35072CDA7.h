#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }

#define EED6B35843181046_FBCB71E35072CDA7_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CF4AC0)
#define EED6B35843181046_FBCB71E35072CDA7__CTOR_OFFSET UNITYSDK_OFFSET(0x22B9540)

inline static constexpr unsigned int EED6B35843181046_FBCB71E35072CDA7_TypeDefinitionIndex = 11986;

class EED6B35843181046_FBCB71E35072CDA7 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EED6B35843181046_FBCB71E35072CDA7__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
	}

	::System::Void Invoke(::System::Boolean A3E26351629B9EF8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EED6B35843181046_FBCB71E35072CDA7_INVOKE_OFFSET))(this, A3E26351629B9EF8);
	}
};
