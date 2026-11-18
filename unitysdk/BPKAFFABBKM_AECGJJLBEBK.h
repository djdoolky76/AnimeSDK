#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HOCDHMEPPEG.h"
#include "unitysdk/System/Object.h"

#define BPKAFFABBKM_AECGJJLBEBK_LIDNPLMPHAL_OFFSET UNITYSDK_OFFSET(0x16859130)
#define BPKAFFABBKM_AECGJJLBEBK__CTOR_OFFSET UNITYSDK_OFFSET(0x16859120)

inline static constexpr unsigned int BPKAFFABBKM_AECGJJLBEBK_TypeDefinitionIndex = 79326;

class BPKAFFABBKM_AECGJJLBEBK : public ::System::Object
{
public:
	::HOCDHMEPPEG GPELAKKMLBG; // 0x10
	::HOCDHMEPPEG ABMKEFPKPMD; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPKAFFABBKM_AECGJJLBEBK__CTOR_OFFSET))(this);
	}

	::System::Void LIDNPLMPHAL(::System::Boolean DJCNCELJPOM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BPKAFFABBKM_AECGJJLBEBK_LIDNPLMPHAL_OFFSET))(this, DJCNCELJPOM);
	}
};
