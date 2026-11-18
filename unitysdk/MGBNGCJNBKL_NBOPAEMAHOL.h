#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class LIIPHPJCKCP;

#define MGBNGCJNBKL_NBOPAEMAHOL_DLIABMIFDFN_OFFSET UNITYSDK_OFFSET(0x1592CCE0)
#define MGBNGCJNBKL_NBOPAEMAHOL__CTOR_OFFSET UNITYSDK_OFFSET(0x1592CCD0)

inline static constexpr unsigned int MGBNGCJNBKL_NBOPAEMAHOL_TypeDefinitionIndex = 50431;

class MGBNGCJNBKL_NBOPAEMAHOL : public ::System::Object
{
public:
	::LIIPHPJCKCP* FOLKBKOFLDD; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGBNGCJNBKL_NBOPAEMAHOL__CTOR_OFFSET))(this);
	}

	::System::Boolean DLIABMIFDFN(::LIIPHPJCKCP* HAAEBCOBKFF)
	{
		return ((::System::Boolean(*)(::PVOID, ::LIIPHPJCKCP*))((::PBYTE)hIl2Cpp + MGBNGCJNBKL_NBOPAEMAHOL_DLIABMIFDFN_OFFSET))(this, HAAEBCOBKFF);
	}
};
