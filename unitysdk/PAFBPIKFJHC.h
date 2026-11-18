#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AHLIFAAOPDG.h"
#include "unitysdk/System/Object.h"

#define PAFBPIKFJHC_PKCKDJEOEEC_OFFSET UNITYSDK_OFFSET(0x1CE95C30)

inline static constexpr unsigned int PAFBPIKFJHC_TypeDefinitionIndex = 34831;

class PAFBPIKFJHC : public ::System::Object
{
public:
	static ::System::Boolean PKCKDJEOEEC(::AHLIFAAOPDG EGEGIMGMJHN, ::AHLIFAAOPDG FCPCLIJNDLA)
	{
		return ((::System::Boolean(*)(::AHLIFAAOPDG, ::AHLIFAAOPDG))((::PBYTE)hIl2Cpp + PAFBPIKFJHC_PKCKDJEOEEC_OFFSET))(EGEGIMGMJHN, FCPCLIJNDLA);
	}
};
