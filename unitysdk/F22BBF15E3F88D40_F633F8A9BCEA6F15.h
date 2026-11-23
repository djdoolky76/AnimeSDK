#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }
namespace System { class String; }

#define F22BBF15E3F88D40_F633F8A9BCEA6F15_INVOKE_OFFSET UNITYSDK_OFFSET(0x1FE7F90)
#define F22BBF15E3F88D40_F633F8A9BCEA6F15__CTOR_OFFSET UNITYSDK_OFFSET(0x2284E60)

inline static constexpr unsigned int F22BBF15E3F88D40_F633F8A9BCEA6F15_TypeDefinitionIndex = 15573;

class F22BBF15E3F88D40_F633F8A9BCEA6F15 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + F22BBF15E3F88D40_F633F8A9BCEA6F15__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
	}

	::System::Void Invoke(::System::Int32 A43537863E8D53C3, ::System::String* F0FC210A0550B9E0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + F22BBF15E3F88D40_F633F8A9BCEA6F15_INVOKE_OFFSET))(this, A43537863E8D53C3, F0FC210A0550B9E0);
	}
};
