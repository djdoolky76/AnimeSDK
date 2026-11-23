#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }

#define F7E8AD66E3B39722_AC712F3E0CCD8AE5_INVOKE_OFFSET UNITYSDK_OFFSET(0x1F36B50)
#define F7E8AD66E3B39722_AC712F3E0CCD8AE5__CTOR_OFFSET UNITYSDK_OFFSET(0x1F36B60)

inline static constexpr unsigned int F7E8AD66E3B39722_AC712F3E0CCD8AE5_TypeDefinitionIndex = 12166;

class F7E8AD66E3B39722_AC712F3E0CCD8AE5 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + F7E8AD66E3B39722_AC712F3E0CCD8AE5__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
	}

	::System::Void Invoke()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F7E8AD66E3B39722_AC712F3E0CCD8AE5_INVOKE_OFFSET))(this);
	}
};
