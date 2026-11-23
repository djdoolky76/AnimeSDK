#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class EED6B35843181046_BF162B4946CB04B7;
namespace System { class Object; }

#define EED6B35843181046_B8986C8D65AC6590_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CF4AC0)
#define EED6B35843181046_B8986C8D65AC6590__CTOR_OFFSET UNITYSDK_OFFSET(0x22B96A0)

inline static constexpr unsigned int EED6B35843181046_B8986C8D65AC6590_TypeDefinitionIndex = 11992;

class EED6B35843181046_B8986C8D65AC6590 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EED6B35843181046_B8986C8D65AC6590__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
	}

	::System::Void Invoke(::EED6B35843181046_BF162B4946CB04B7* E04D2BE64FCE9814)
	{
		return ((::System::Void(*)(::PVOID, ::EED6B35843181046_BF162B4946CB04B7*))((::PBYTE)hIl2Cpp + EED6B35843181046_B8986C8D65AC6590_INVOKE_OFFSET))(this, E04D2BE64FCE9814);
	}
};
