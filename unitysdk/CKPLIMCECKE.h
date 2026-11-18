#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CKPLIMCECKE_LNEOBHMKLCE_OFFSET UNITYSDK_OFFSET(0x16A33190)

inline static constexpr unsigned int CKPLIMCECKE_TypeDefinitionIndex = 62458;

class CKPLIMCECKE : public ::System::Object
{
public:
	static ::System::Void LNEOBHMKLCE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CKPLIMCECKE_LNEOBHMKLCE_OFFSET))();
	}
};
