#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }

#define E5B7314F7B68FF7C_AD8F75158D4B2D50_INVOKE_OFFSET UNITYSDK_OFFSET(0x1F36B50)
#define E5B7314F7B68FF7C_AD8F75158D4B2D50__CTOR_OFFSET UNITYSDK_OFFSET(0x3744C30)

inline static constexpr unsigned int E5B7314F7B68FF7C_AD8F75158D4B2D50_TypeDefinitionIndex = 12833;

class E5B7314F7B68FF7C_AD8F75158D4B2D50 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + E5B7314F7B68FF7C_AD8F75158D4B2D50__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
	}

	::System::Boolean Invoke()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + E5B7314F7B68FF7C_AD8F75158D4B2D50_INVOKE_OFFSET))(this);
	}
};
