#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }

#define EED6B35843181046_B124D32ABC78A1B5_INVOKE_OFFSET UNITYSDK_OFFSET(0x1F36B50)
#define EED6B35843181046_B124D32ABC78A1B5__CTOR_OFFSET UNITYSDK_OFFSET(0x3A6F8B0)

inline static constexpr unsigned int EED6B35843181046_B124D32ABC78A1B5_TypeDefinitionIndex = 11974;

class EED6B35843181046_B124D32ABC78A1B5 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EED6B35843181046_B124D32ABC78A1B5__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
	}

	::System::Double Invoke()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + EED6B35843181046_B124D32ABC78A1B5_INVOKE_OFFSET))(this);
	}
};
