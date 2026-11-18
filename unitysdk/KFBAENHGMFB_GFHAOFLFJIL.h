#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define KFBAENHGMFB_GFHAOFLFJIL_EACBJOOHNIB_OFFSET UNITYSDK_OFFSET(0x14FD5820)
#define KFBAENHGMFB_GFHAOFLFJIL_LCKNBGELODA_OFFSET UNITYSDK_OFFSET(0x14FD5810)
#define KFBAENHGMFB_GFHAOFLFJIL__CTOR_OFFSET UNITYSDK_OFFSET(0x14FD5800)

inline static constexpr unsigned int KFBAENHGMFB_GFHAOFLFJIL_TypeDefinitionIndex = 78577;

class KFBAENHGMFB_GFHAOFLFJIL : public ::System::Object
{
public:
	::System::Action* IHLBALNBGKM; // 0x10
	::System::Action* AFKOOINGNAK; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFBAENHGMFB_GFHAOFLFJIL__CTOR_OFFSET))(this);
	}

	::System::Void LCKNBGELODA(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + KFBAENHGMFB_GFHAOFLFJIL_LCKNBGELODA_OFFSET))(this, BHDNBGLCNOM);
	}

	::System::Void EACBJOOHNIB(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + KFBAENHGMFB_GFHAOFLFJIL_EACBJOOHNIB_OFFSET))(this, BHDNBGLCNOM);
	}
};
