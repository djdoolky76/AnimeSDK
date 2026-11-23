#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }
namespace System { class String; }

#define F7E8AD66E3B39722_F76ADD655BD5ECB5_INVOKE_OFFSET UNITYSDK_OFFSET(0x1F36B50)
#define F7E8AD66E3B39722_F76ADD655BD5ECB5__CTOR_OFFSET UNITYSDK_OFFSET(0x3744CE0)

inline static constexpr unsigned int F7E8AD66E3B39722_F76ADD655BD5ECB5_TypeDefinitionIndex = 12163;

class F7E8AD66E3B39722_F76ADD655BD5ECB5 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + F7E8AD66E3B39722_F76ADD655BD5ECB5__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
	}

	::System::String* Invoke()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + F7E8AD66E3B39722_F76ADD655BD5ECB5_INVOKE_OFFSET))(this);
	}
};
