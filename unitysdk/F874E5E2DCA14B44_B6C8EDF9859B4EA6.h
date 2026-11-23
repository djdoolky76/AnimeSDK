#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class B7F8E08EF020A307;
namespace System { class Object; }

#define F874E5E2DCA14B44_B6C8EDF9859B4EA6_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CF4AC0)
#define F874E5E2DCA14B44_B6C8EDF9859B4EA6__CTOR_OFFSET UNITYSDK_OFFSET(0x1FE7D60)

inline static constexpr unsigned int F874E5E2DCA14B44_B6C8EDF9859B4EA6_TypeDefinitionIndex = 16048;

class F874E5E2DCA14B44_B6C8EDF9859B4EA6 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + F874E5E2DCA14B44_B6C8EDF9859B4EA6__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
	}

	::System::Void Invoke(::B7F8E08EF020A307* AFE8F10692F5139F)
	{
		return ((::System::Void(*)(::PVOID, ::B7F8E08EF020A307*))((::PBYTE)hIl2Cpp + F874E5E2DCA14B44_B6C8EDF9859B4EA6_INVOKE_OFFSET))(this, AFE8F10692F5139F);
	}
};
