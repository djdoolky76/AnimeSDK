#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ENDPKEHELIM;

#define ABKPDFLJNPK_EAFNFLDEDMD_OFFSET UNITYSDK_OFFSET(0x12641C60)

inline static constexpr unsigned int ABKPDFLJNPK_TypeDefinitionIndex = 66765;

class ABKPDFLJNPK : public ::System::Object
{
public:
	static ::System::Boolean EAFNFLDEDMD(::ENDPKEHELIM* DFMKILICPFB)
	{
		return ((::System::Boolean(*)(::ENDPKEHELIM*))((::PBYTE)hIl2Cpp + ABKPDFLJNPK_EAFNFLDEDMD_OFFSET))(DFMKILICPFB);
	}
};
