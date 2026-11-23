#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }
namespace System { class String; }

#define F7E8AD66E3B39722_B49F2083836822BA_INVOKE_OFFSET UNITYSDK_OFFSET(0x1F36B50)
#define F7E8AD66E3B39722_B49F2083836822BA__CTOR_OFFSET UNITYSDK_OFFSET(0x3744CE0)

inline static constexpr unsigned int F7E8AD66E3B39722_B49F2083836822BA_TypeDefinitionIndex = 12164;

class F7E8AD66E3B39722_B49F2083836822BA : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + F7E8AD66E3B39722_B49F2083836822BA__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
	}

	::System::String* Invoke()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + F7E8AD66E3B39722_B49F2083836822BA_INVOKE_OFFSET))(this);
	}
};
