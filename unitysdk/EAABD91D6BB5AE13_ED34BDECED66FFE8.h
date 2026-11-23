#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }

#define EAABD91D6BB5AE13_ED34BDECED66FFE8_INVOKE_OFFSET UNITYSDK_OFFSET(0x1F36B50)
#define EAABD91D6BB5AE13_ED34BDECED66FFE8__CTOR_OFFSET UNITYSDK_OFFSET(0x1F36B60)

inline static constexpr unsigned int EAABD91D6BB5AE13_ED34BDECED66FFE8_TypeDefinitionIndex = 12294;

class EAABD91D6BB5AE13_ED34BDECED66FFE8 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EAABD91D6BB5AE13_ED34BDECED66FFE8__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
	}

	::System::Void Invoke()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EAABD91D6BB5AE13_ED34BDECED66FFE8_INVOKE_OFFSET))(this);
	}
};
