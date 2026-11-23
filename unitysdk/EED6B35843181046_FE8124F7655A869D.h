#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }

#define EED6B35843181046_FE8124F7655A869D_INVOKE_OFFSET UNITYSDK_OFFSET(0x1F36B50)
#define EED6B35843181046_FE8124F7655A869D__CTOR_OFFSET UNITYSDK_OFFSET(0x3744C30)

inline static constexpr unsigned int EED6B35843181046_FE8124F7655A869D_TypeDefinitionIndex = 11965;

class EED6B35843181046_FE8124F7655A869D : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EED6B35843181046_FE8124F7655A869D__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
	}

	::System::Boolean Invoke()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EED6B35843181046_FE8124F7655A869D_INVOKE_OFFSET))(this);
	}
};
