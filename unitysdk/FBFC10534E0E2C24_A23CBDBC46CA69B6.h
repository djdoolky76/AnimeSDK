#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }

#define FBFC10534E0E2C24_A23CBDBC46CA69B6_INVOKE_OFFSET UNITYSDK_OFFSET(0x1F36B50)
#define FBFC10534E0E2C24_A23CBDBC46CA69B6__CTOR_OFFSET UNITYSDK_OFFSET(0x1F36B60)

inline static constexpr unsigned int FBFC10534E0E2C24_A23CBDBC46CA69B6_TypeDefinitionIndex = 12680;

class FBFC10534E0E2C24_A23CBDBC46CA69B6 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + FBFC10534E0E2C24_A23CBDBC46CA69B6__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
	}

	::System::Void Invoke()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBFC10534E0E2C24_A23CBDBC46CA69B6_INVOKE_OFFSET))(this);
	}
};
