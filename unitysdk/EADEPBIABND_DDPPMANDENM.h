#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DJPEEJFNCHL;
class NELNIMNNGCK;

#define EADEPBIABND_DDPPMANDENM_NAMCGKMLONO_OFFSET UNITYSDK_OFFSET(0x10626D50)
#define EADEPBIABND_DDPPMANDENM__CTOR_OFFSET UNITYSDK_OFFSET(0x10626D40)

inline static constexpr unsigned int EADEPBIABND_DDPPMANDENM_TypeDefinitionIndex = 89543;

class EADEPBIABND_DDPPMANDENM : public ::System::Object
{
public:
	::NELNIMNNGCK* JBFIDPOGDFA; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EADEPBIABND_DDPPMANDENM__CTOR_OFFSET))(this);
	}

	::System::Boolean NAMCGKMLONO(::DJPEEJFNCHL* MDLNMDJMMJP)
	{
		return ((::System::Boolean(*)(::PVOID, ::DJPEEJFNCHL*))((::PBYTE)hIl2Cpp + EADEPBIABND_DDPPMANDENM_NAMCGKMLONO_OFFSET))(this, MDLNMDJMMJP);
	}
};
