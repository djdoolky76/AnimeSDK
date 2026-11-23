#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/FCC2F8EABCD6F945.h"

namespace System { class Object; }
namespace System { class String; }

#define E54EF8746E5DA583_E0AA27BFA394A915_INVOKE_OFFSET UNITYSDK_OFFSET(0x1E90060)
#define E54EF8746E5DA583_E0AA27BFA394A915__CTOR_OFFSET UNITYSDK_OFFSET(0x1E900A0)

inline static constexpr unsigned int E54EF8746E5DA583_E0AA27BFA394A915_TypeDefinitionIndex = 19642;

class E54EF8746E5DA583_E0AA27BFA394A915 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + E54EF8746E5DA583_E0AA27BFA394A915__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
	}

	::FCC2F8EABCD6F945<::System::Char> Invoke(::System::String* B9AEC57275825552, ::System::Int32 B48C66E5FB2449C6, ::System::Int32 A70E5C58B2C7A692)
	{
		return ((::FCC2F8EABCD6F945<::System::Char>(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + E54EF8746E5DA583_E0AA27BFA394A915_INVOKE_OFFSET))(this, B9AEC57275825552, B48C66E5FB2449C6, A70E5C58B2C7A692);
	}
};
