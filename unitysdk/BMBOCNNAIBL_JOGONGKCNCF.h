#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DJPEEJFNCHL;
class NELNIMNNGCK;

#define BMBOCNNAIBL_JOGONGKCNCF_NAMCGKMLONO_OFFSET UNITYSDK_OFFSET(0x113F3360)
#define BMBOCNNAIBL_JOGONGKCNCF__CTOR_OFFSET UNITYSDK_OFFSET(0x113F3350)

inline static constexpr unsigned int BMBOCNNAIBL_JOGONGKCNCF_TypeDefinitionIndex = 69506;

class BMBOCNNAIBL_JOGONGKCNCF : public ::System::Object
{
public:
	::NELNIMNNGCK* OILPBPIMIDA; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMBOCNNAIBL_JOGONGKCNCF__CTOR_OFFSET))(this);
	}

	::System::Boolean NAMCGKMLONO(::DJPEEJFNCHL* MDLNMDJMMJP)
	{
		return ((::System::Boolean(*)(::PVOID, ::DJPEEJFNCHL*))((::PBYTE)hIl2Cpp + BMBOCNNAIBL_JOGONGKCNCF_NAMCGKMLONO_OFFSET))(this, MDLNMDJMMJP);
	}
};
