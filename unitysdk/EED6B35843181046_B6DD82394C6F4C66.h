#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/E62B3BE187A56BB1.h"

namespace System { class Object; }

#define EED6B35843181046_B6DD82394C6F4C66_INVOKE_OFFSET UNITYSDK_OFFSET(0x2F7DF20)
#define EED6B35843181046_B6DD82394C6F4C66__CTOR_OFFSET UNITYSDK_OFFSET(0x32B5940)

inline static constexpr unsigned int EED6B35843181046_B6DD82394C6F4C66_TypeDefinitionIndex = 11980;

class EED6B35843181046_B6DD82394C6F4C66 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EED6B35843181046_B6DD82394C6F4C66__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
	}

	::System::Void Invoke(::E62B3BE187A56BB1 AC5E6401B06BB6BD)
	{
		return ((::System::Void(*)(::PVOID, ::E62B3BE187A56BB1))((::PBYTE)hIl2Cpp + EED6B35843181046_B6DD82394C6F4C66_INVOKE_OFFSET))(this, AC5E6401B06BB6BD);
	}
};
