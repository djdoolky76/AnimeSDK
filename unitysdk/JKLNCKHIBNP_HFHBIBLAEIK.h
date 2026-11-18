#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JPBDKLFCFND.h"
#include "unitysdk/System/Object.h"

class EMPEGMEDAHH;

#define JKLNCKHIBNP_HFHBIBLAEIK_ABAECLNBNPD_OFFSET UNITYSDK_OFFSET(0x13C29BE0)
#define JKLNCKHIBNP_HFHBIBLAEIK__CTOR_OFFSET UNITYSDK_OFFSET(0x13C29BD0)

inline static constexpr unsigned int JKLNCKHIBNP_HFHBIBLAEIK_TypeDefinitionIndex = 87632;

class JKLNCKHIBNP_HFHBIBLAEIK : public ::System::Object
{
public:
	::JPBDKLFCFND FKDONKGGAIF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKLNCKHIBNP_HFHBIBLAEIK__CTOR_OFFSET))(this);
	}

	::System::Void ABAECLNBNPD(::EMPEGMEDAHH* HFMHOELKCAJ)
	{
		return ((::System::Void(*)(::PVOID, ::EMPEGMEDAHH*))((::PBYTE)hIl2Cpp + JKLNCKHIBNP_HFHBIBLAEIK_ABAECLNBNPD_OFFSET))(this, HFMHOELKCAJ);
	}
};
