#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }

#define A22342C00B5DB77A_A7631BE03ACD1034_INVOKE_OFFSET UNITYSDK_OFFSET(0x1F36B50)
#define A22342C00B5DB77A_A7631BE03ACD1034__CTOR_OFFSET UNITYSDK_OFFSET(0x3744CE0)

inline static constexpr unsigned int A22342C00B5DB77A_A7631BE03ACD1034_TypeDefinitionIndex = 12851;

class A22342C00B5DB77A_A7631BE03ACD1034 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + A22342C00B5DB77A_A7631BE03ACD1034__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
	}

	::System::IntPtr Invoke()
	{
		return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + A22342C00B5DB77A_A7631BE03ACD1034_INVOKE_OFFSET))(this);
	}
};
