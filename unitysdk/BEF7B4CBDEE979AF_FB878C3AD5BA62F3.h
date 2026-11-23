#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }

#define BEF7B4CBDEE979AF_FB878C3AD5BA62F3_INVOKE_OFFSET UNITYSDK_OFFSET(0x1F36B50)
#define BEF7B4CBDEE979AF_FB878C3AD5BA62F3__CTOR_OFFSET UNITYSDK_OFFSET(0x1F36B60)

inline static constexpr unsigned int BEF7B4CBDEE979AF_FB878C3AD5BA62F3_TypeDefinitionIndex = 19761;

class BEF7B4CBDEE979AF_FB878C3AD5BA62F3 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + BEF7B4CBDEE979AF_FB878C3AD5BA62F3__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
	}

	::System::Void Invoke()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEF7B4CBDEE979AF_FB878C3AD5BA62F3_INVOKE_OFFSET))(this);
	}
};
