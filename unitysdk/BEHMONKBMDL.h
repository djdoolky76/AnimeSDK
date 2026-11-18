#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DJPBMMDAFKB.h"
#include "unitysdk/System/Object.h"

#define BEHMONKBMDL_DHEJAIJHPJL_OFFSET UNITYSDK_OFFSET(0x169EA550)
#define BEHMONKBMDL_PEHNMCBBNGP_OFFSET UNITYSDK_OFFSET(0x169EA500)

inline static constexpr unsigned int BEHMONKBMDL_TypeDefinitionIndex = 73343;

class BEHMONKBMDL : public ::System::Object
{
public:
	static ::System::Boolean PEHNMCBBNGP(::DJPBMMDAFKB FNCIDGGOECA)
	{
		return ((::System::Boolean(*)(::DJPBMMDAFKB))((::PBYTE)hIl2Cpp + BEHMONKBMDL_PEHNMCBBNGP_OFFSET))(FNCIDGGOECA);
	}

	static ::System::Boolean DHEJAIJHPJL(::DJPBMMDAFKB OBNIAHNMHPF)
	{
		return ((::System::Boolean(*)(::DJPBMMDAFKB))((::PBYTE)hIl2Cpp + BEHMONKBMDL_DHEJAIJHPJL_OFFSET))(OBNIAHNMHPF);
	}
};
