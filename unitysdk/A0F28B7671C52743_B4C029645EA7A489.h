#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }
namespace System { class String; }

#define A0F28B7671C52743_B4C029645EA7A489_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CF4AC0)
#define A0F28B7671C52743_B4C029645EA7A489__CTOR_OFFSET UNITYSDK_OFFSET(0x22B96A0)

inline static constexpr unsigned int A0F28B7671C52743_B4C029645EA7A489_TypeDefinitionIndex = 12803;

class A0F28B7671C52743_B4C029645EA7A489 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + A0F28B7671C52743_B4C029645EA7A489__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
	}

	::System::Void Invoke(::System::String* E0C0689B1CEBE48C)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + A0F28B7671C52743_B4C029645EA7A489_INVOKE_OFFSET))(this, E0C0689B1CEBE48C);
	}
};
