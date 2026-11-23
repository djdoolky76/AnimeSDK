#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }
namespace System { class String; }

#define EED6B35843181046_BF162B4946CB04B7_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CF4AC0)
#define EED6B35843181046_BF162B4946CB04B7__CTOR_OFFSET UNITYSDK_OFFSET(0x31574C0)

inline static constexpr unsigned int EED6B35843181046_BF162B4946CB04B7_TypeDefinitionIndex = 11991;

class EED6B35843181046_BF162B4946CB04B7 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EED6B35843181046_BF162B4946CB04B7__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
	}

	::System::Boolean Invoke(::System::String* BB01E686711AA41F)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EED6B35843181046_BF162B4946CB04B7_INVOKE_OFFSET))(this, BB01E686711AA41F);
	}
};
