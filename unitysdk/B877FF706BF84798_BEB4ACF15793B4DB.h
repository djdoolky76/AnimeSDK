#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }
namespace System { class String; }

#define B877FF706BF84798_BEB4ACF15793B4DB_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CF4AC0)
#define B877FF706BF84798_BEB4ACF15793B4DB__CTOR_OFFSET UNITYSDK_OFFSET(0x22B96A0)

inline static constexpr unsigned int B877FF706BF84798_BEB4ACF15793B4DB_TypeDefinitionIndex = 19098;

class B877FF706BF84798_BEB4ACF15793B4DB : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + B877FF706BF84798_BEB4ACF15793B4DB__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
	}

	::System::Void Invoke(::System::String* F48DB51DD68EDB78)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + B877FF706BF84798_BEB4ACF15793B4DB_INVOKE_OFFSET))(this, F48DB51DD68EDB78);
	}
};
