#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }

#define A0F28B7671C52743_EA8B1AD6AD58E154_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CF4AC0)
#define A0F28B7671C52743_EA8B1AD6AD58E154__CTOR_OFFSET UNITYSDK_OFFSET(0x1FE7D60)

inline static constexpr unsigned int A0F28B7671C52743_EA8B1AD6AD58E154_TypeDefinitionIndex = 12782;

class A0F28B7671C52743_EA8B1AD6AD58E154 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + A0F28B7671C52743_EA8B1AD6AD58E154__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
	}

	::System::Void Invoke(::System::Object* B8334CB64332323A)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + A0F28B7671C52743_EA8B1AD6AD58E154_INVOKE_OFFSET))(this, B8334CB64332323A);
	}
};
