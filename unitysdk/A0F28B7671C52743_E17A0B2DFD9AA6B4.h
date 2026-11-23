#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }

#define A0F28B7671C52743_E17A0B2DFD9AA6B4_INVOKE_OFFSET UNITYSDK_OFFSET(0x1F36B50)
#define A0F28B7671C52743_E17A0B2DFD9AA6B4__CTOR_OFFSET UNITYSDK_OFFSET(0x3744C30)

inline static constexpr unsigned int A0F28B7671C52743_E17A0B2DFD9AA6B4_TypeDefinitionIndex = 12821;

class A0F28B7671C52743_E17A0B2DFD9AA6B4 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + A0F28B7671C52743_E17A0B2DFD9AA6B4__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
	}

	::System::Boolean Invoke()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + A0F28B7671C52743_E17A0B2DFD9AA6B4_INVOKE_OFFSET))(this);
	}
};
