#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }
namespace System { class String; }

#define EAABD91D6BB5AE13_F09A936A99E7F55E_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CF4AC0)
#define EAABD91D6BB5AE13_F09A936A99E7F55E__CTOR_OFFSET UNITYSDK_OFFSET(0x22B96A0)

inline static constexpr unsigned int EAABD91D6BB5AE13_F09A936A99E7F55E_TypeDefinitionIndex = 12299;

class EAABD91D6BB5AE13_F09A936A99E7F55E : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EAABD91D6BB5AE13_F09A936A99E7F55E__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
	}

	::System::Void Invoke(::System::String* B960AC235824C6C8)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EAABD91D6BB5AE13_F09A936A99E7F55E_INVOKE_OFFSET))(this, B960AC235824C6C8);
	}
};
