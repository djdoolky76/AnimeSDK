#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }

#define EAF740F356712F5A_E7FD66922EA97795_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CF4AC0)
#define EAF740F356712F5A_E7FD66922EA97795__CTOR_OFFSET UNITYSDK_OFFSET(0x1FF6400)

inline static constexpr unsigned int EAF740F356712F5A_E7FD66922EA97795_TypeDefinitionIndex = 3928;

class EAF740F356712F5A_E7FD66922EA97795 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EAF740F356712F5A_E7FD66922EA97795__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
	}

	::System::Void Invoke(::System::Int32 AF11BA78EF1A0475)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EAF740F356712F5A_E7FD66922EA97795_INVOKE_OFFSET))(this, AF11BA78EF1A0475);
	}
};
