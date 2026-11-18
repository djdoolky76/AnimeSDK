#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ILBBIFCOEDP;

#define ILBBIFCOEDP_MOHGGDODMCB_ABJPKGKKNNG_OFFSET UNITYSDK_OFFSET(0x13817280)
#define ILBBIFCOEDP_MOHGGDODMCB__CTOR_OFFSET UNITYSDK_OFFSET(0x13817270)

inline static constexpr unsigned int ILBBIFCOEDP_MOHGGDODMCB_TypeDefinitionIndex = 86858;

class ILBBIFCOEDP_MOHGGDODMCB : public ::System::Object
{
public:
	::ILBBIFCOEDP* KLHPEBKNIFB; // 0x10
	::System::Single CIIPCCLOHLH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILBBIFCOEDP_MOHGGDODMCB__CTOR_OFFSET))(this);
	}

	::System::Boolean ABJPKGKKNNG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ILBBIFCOEDP_MOHGGDODMCB_ABJPKGKKNNG_OFFSET))(this);
	}
};
