#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HOCDHMEPPEG.h"
#include "unitysdk/System/Object.h"

#define OCFHJEKFPON_AKNMBJHEFCL_LIDNPLMPHAL_OFFSET UNITYSDK_OFFSET(0x15F5AAC0)
#define OCFHJEKFPON_AKNMBJHEFCL__CTOR_OFFSET UNITYSDK_OFFSET(0x15F5AAB0)

inline static constexpr unsigned int OCFHJEKFPON_AKNMBJHEFCL_TypeDefinitionIndex = 71643;

class OCFHJEKFPON_AKNMBJHEFCL : public ::System::Object
{
public:
	::HOCDHMEPPEG PABLEDCGDGM; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCFHJEKFPON_AKNMBJHEFCL__CTOR_OFFSET))(this);
	}

	::System::Void LIDNPLMPHAL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCFHJEKFPON_AKNMBJHEFCL_LIDNPLMPHAL_OFFSET))(this);
	}
};
