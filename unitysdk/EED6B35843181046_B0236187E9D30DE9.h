#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }
namespace System { class String; }

#define EED6B35843181046_B0236187E9D30DE9_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CF4AC0)
#define EED6B35843181046_B0236187E9D30DE9__CTOR_OFFSET UNITYSDK_OFFSET(0x31574C0)

inline static constexpr unsigned int EED6B35843181046_B0236187E9D30DE9_TypeDefinitionIndex = 11989;

class EED6B35843181046_B0236187E9D30DE9 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EED6B35843181046_B0236187E9D30DE9__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
	}

	::System::Boolean Invoke(::System::String* B26FB45137C102C9)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EED6B35843181046_B0236187E9D30DE9_INVOKE_OFFSET))(this, B26FB45137C102C9);
	}
};
