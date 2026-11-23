#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }
namespace System { class String; }

#define EED6B35843181046_BD1599E27A3F58B6_INVOKE_OFFSET UNITYSDK_OFFSET(0x1FE7F90)
#define EED6B35843181046_BD1599E27A3F58B6__CTOR_OFFSET UNITYSDK_OFFSET(0x3A697B0)

inline static constexpr unsigned int EED6B35843181046_BD1599E27A3F58B6_TypeDefinitionIndex = 11994;

class EED6B35843181046_BD1599E27A3F58B6 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EED6B35843181046_BD1599E27A3F58B6__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
	}

	::System::String* Invoke(::System::String* E2692EDB678DEB5F, ::System::String* F0D3F87128A7C4CA)
	{
		return ((::System::String*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + EED6B35843181046_BD1599E27A3F58B6_INVOKE_OFFSET))(this, E2692EDB678DEB5F, F0D3F87128A7C4CA);
	}
};
