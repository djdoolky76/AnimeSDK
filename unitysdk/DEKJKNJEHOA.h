#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EGPBNANFAPC_PBEMFMCCLIO.h"
#include "unitysdk/System/Object.h"

#define DEKJKNJEHOA_PKCKDJEOEEC_OFFSET UNITYSDK_OFFSET(0x149A0C80)

inline static constexpr unsigned int DEKJKNJEHOA_TypeDefinitionIndex = 65558;

class DEKJKNJEHOA : public ::System::Object
{
public:
	static ::System::Boolean PKCKDJEOEEC(::EGPBNANFAPC_PBEMFMCCLIO FCPCLIJNDLA, ::EGPBNANFAPC_PBEMFMCCLIO LBPIPEAKPDG)
	{
		return ((::System::Boolean(*)(::EGPBNANFAPC_PBEMFMCCLIO, ::EGPBNANFAPC_PBEMFMCCLIO))((::PBYTE)hIl2Cpp + DEKJKNJEHOA_PKCKDJEOEEC_OFFSET))(FCPCLIJNDLA, LBPIPEAKPDG);
	}
};
