#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }
namespace System { class String; }

#define EED6B35843181046_E299919A30A8FCE8_INVOKE_OFFSET UNITYSDK_OFFSET(0x1F36B50)
#define EED6B35843181046_E299919A30A8FCE8__CTOR_OFFSET UNITYSDK_OFFSET(0x3744CE0)

inline static constexpr unsigned int EED6B35843181046_E299919A30A8FCE8_TypeDefinitionIndex = 11966;

class EED6B35843181046_E299919A30A8FCE8 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EED6B35843181046_E299919A30A8FCE8__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
	}

	::System::String* Invoke()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EED6B35843181046_E299919A30A8FCE8_INVOKE_OFFSET))(this);
	}
};
