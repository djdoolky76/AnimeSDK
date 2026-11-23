#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }

#define FBFC10534E0E2C24_E3ACEC72E777A30B_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CF4AC0)
#define FBFC10534E0E2C24_E3ACEC72E777A30B__CTOR_OFFSET UNITYSDK_OFFSET(0x1FF6400)

inline static constexpr unsigned int FBFC10534E0E2C24_E3ACEC72E777A30B_TypeDefinitionIndex = 12681;

class FBFC10534E0E2C24_E3ACEC72E777A30B : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + FBFC10534E0E2C24_E3ACEC72E777A30B__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
	}

	::System::Void Invoke(::System::UInt32 B50E75E5148B2C91)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FBFC10534E0E2C24_E3ACEC72E777A30B_INVOKE_OFFSET))(this, B50E75E5148B2C91);
	}
};
