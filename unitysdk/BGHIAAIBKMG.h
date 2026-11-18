#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CLPEHLLCADI;

#define BGHIAAIBKMG_LNEELMLKLBD_OFFSET UNITYSDK_OFFSET(0x143DBB30)
#define BGHIAAIBKMG__CTOR_OFFSET UNITYSDK_OFFSET(0x143DBB20)

inline static constexpr unsigned int BGHIAAIBKMG_TypeDefinitionIndex = 86780;

class BGHIAAIBKMG : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGHIAAIBKMG__CTOR_OFFSET))(this);
	}

	static ::CLPEHLLCADI* LNEELMLKLBD(::System::Int32 GONODCOMIAA)
	{
		return ((::CLPEHLLCADI*(*)(::System::Int32))((::PBYTE)hIl2Cpp + BGHIAAIBKMG_LNEELMLKLBD_OFFSET))(GONODCOMIAA);
	}
};
