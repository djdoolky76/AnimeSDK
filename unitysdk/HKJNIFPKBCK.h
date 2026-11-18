#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KDCOHGFJLCM.h"
#include "unitysdk/System/Object.h"

#define HKJNIFPKBCK_PKCKDJEOEEC_OFFSET UNITYSDK_OFFSET(0x181956E0)

inline static constexpr unsigned int HKJNIFPKBCK_TypeDefinitionIndex = 67165;

class HKJNIFPKBCK : public ::System::Object
{
public:
	static ::System::Boolean PKCKDJEOEEC(::KDCOHGFJLCM FCPCLIJNDLA, ::KDCOHGFJLCM LBPIPEAKPDG)
	{
		return ((::System::Boolean(*)(::KDCOHGFJLCM, ::KDCOHGFJLCM))((::PBYTE)hIl2Cpp + HKJNIFPKBCK_PKCKDJEOEEC_OFFSET))(FCPCLIJNDLA, LBPIPEAKPDG);
	}
};
