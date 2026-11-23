#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/B877FF706BF84798_B776F4D206178EC0.h"

namespace System { class Object; }

#define B877FF706BF84798_AFEB98B5B6A783FC_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CF4AC0)
#define B877FF706BF84798_AFEB98B5B6A783FC__CTOR_OFFSET UNITYSDK_OFFSET(0x2A95CF0)

inline static constexpr unsigned int B877FF706BF84798_AFEB98B5B6A783FC_TypeDefinitionIndex = 19099;

class B877FF706BF84798_AFEB98B5B6A783FC : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + B877FF706BF84798_AFEB98B5B6A783FC__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
	}

	::System::Void Invoke(::B877FF706BF84798_B776F4D206178EC0& F1061BF37074DCC9)
	{
		return ((::System::Void(*)(::PVOID, ::B877FF706BF84798_B776F4D206178EC0&))((::PBYTE)hIl2Cpp + B877FF706BF84798_AFEB98B5B6A783FC_INVOKE_OFFSET))(this, F1061BF37074DCC9);
	}
};
