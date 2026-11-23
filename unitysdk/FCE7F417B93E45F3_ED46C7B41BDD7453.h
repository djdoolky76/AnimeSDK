#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }

#define FCE7F417B93E45F3_ED46C7B41BDD7453_INVOKE_OFFSET UNITYSDK_OFFSET(0x1F36B50)
#define FCE7F417B93E45F3_ED46C7B41BDD7453__CTOR_OFFSET UNITYSDK_OFFSET(0x1F36B60)

inline static constexpr unsigned int FCE7F417B93E45F3_ED46C7B41BDD7453_TypeDefinitionIndex = 20570;

class FCE7F417B93E45F3_ED46C7B41BDD7453 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + FCE7F417B93E45F3_ED46C7B41BDD7453__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
	}

	::System::Void Invoke()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCE7F417B93E45F3_ED46C7B41BDD7453_INVOKE_OFFSET))(this);
	}
};
