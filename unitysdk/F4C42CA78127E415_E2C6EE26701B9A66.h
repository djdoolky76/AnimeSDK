#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }

#define F4C42CA78127E415_E2C6EE26701B9A66_INVOKE_OFFSET UNITYSDK_OFFSET(0x1FE7C20)
#define F4C42CA78127E415_E2C6EE26701B9A66__CTOR_OFFSET UNITYSDK_OFFSET(0x2978660)

inline static constexpr unsigned int F4C42CA78127E415_E2C6EE26701B9A66_TypeDefinitionIndex = 15537;

class F4C42CA78127E415_E2C6EE26701B9A66 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + F4C42CA78127E415_E2C6EE26701B9A66__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
	}

	::System::UInt64 Invoke(::System::IntPtr F6C2EBBDFCAEF915, ::System::UInt64 F54AF627638DE3C9, ::System::UInt64 E631962754A9F126, ::System::IntPtr EB9E49E8F3364EFE)
	{
		return ((::System::UInt64(*)(::PVOID, ::System::IntPtr, ::System::UInt64, ::System::UInt64, ::System::IntPtr))((::PBYTE)hIl2Cpp + F4C42CA78127E415_E2C6EE26701B9A66_INVOKE_OFFSET))(this, F6C2EBBDFCAEF915, F54AF627638DE3C9, E631962754A9F126, EB9E49E8F3364EFE);
	}
};
