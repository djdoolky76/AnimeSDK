#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }

#define A0F28B7671C52743_F45F7A477DD678D8_INVOKE_OFFSET UNITYSDK_OFFSET(0x1F7B8B0)
#define A0F28B7671C52743_F45F7A477DD678D8__CTOR_OFFSET UNITYSDK_OFFSET(0x3A10630)

inline static constexpr unsigned int A0F28B7671C52743_F45F7A477DD678D8_TypeDefinitionIndex = 12815;

class A0F28B7671C52743_F45F7A477DD678D8 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + A0F28B7671C52743_F45F7A477DD678D8__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
	}

	::System::Void Invoke(::System::Int32 F535553047A4687F, ::System::Int32 A02A345E762B7131, ::System::Int32 EA1FD55DA1AF2EF5)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + A0F28B7671C52743_F45F7A477DD678D8_INVOKE_OFFSET))(this, F535553047A4687F, A02A345E762B7131, EA1FD55DA1AF2EF5);
	}
};
