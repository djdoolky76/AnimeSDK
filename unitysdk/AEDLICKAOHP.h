#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AEFABLGCLOI.h"
#include "unitysdk/System/Object.h"

#define AEDLICKAOHP_PKCKDJEOEEC_OFFSET UNITYSDK_OFFSET(0x1646AA50)

inline static constexpr unsigned int AEDLICKAOHP_TypeDefinitionIndex = 87533;

class AEDLICKAOHP : public ::System::Object
{
public:
	static ::System::Boolean PKCKDJEOEEC(::AEFABLGCLOI FCPCLIJNDLA, ::AEFABLGCLOI LBPIPEAKPDG)
	{
		return ((::System::Boolean(*)(::AEFABLGCLOI, ::AEFABLGCLOI))((::PBYTE)hIl2Cpp + AEDLICKAOHP_PKCKDJEOEEC_OFFSET))(FCPCLIJNDLA, LBPIPEAKPDG);
	}
};
