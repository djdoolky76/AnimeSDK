#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }
namespace System { class String; }

#define EED6B35843181046_F5F73AF58587CED9_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CF4AC0)
#define EED6B35843181046_F5F73AF58587CED9__CTOR_OFFSET UNITYSDK_OFFSET(0x2A44330)

inline static constexpr unsigned int EED6B35843181046_F5F73AF58587CED9_TypeDefinitionIndex = 11973;

class EED6B35843181046_F5F73AF58587CED9 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EED6B35843181046_F5F73AF58587CED9__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
	}

	::System::Double Invoke(::System::String* FCE41FAE8E77460B)
	{
		return ((::System::Double(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EED6B35843181046_F5F73AF58587CED9_INVOKE_OFFSET))(this, FCE41FAE8E77460B);
	}
};
