#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define ACFBAGGDNNH_AOPGPMDDDDI_OFFSET UNITYSDK_OFFSET(0x16FD4DE0)
#define ACFBAGGDNNH_IFMAMJPGMKM_OFFSET UNITYSDK_OFFSET(0x16FD4D50)
#define ACFBAGGDNNH_OMLFGENENBA_OFFSET UNITYSDK_OFFSET(0x16FD4DA0)
#define ACFBAGGDNNH__CTOR_OFFSET UNITYSDK_OFFSET(0x16FD4E20)

inline static constexpr unsigned int ACFBAGGDNNH_TypeDefinitionIndex = 59347;

class ACFBAGGDNNH : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACFBAGGDNNH__CTOR_OFFSET))(this);
	}

	::System::Void IFMAMJPGMKM(::System::Boolean DPOJBEEBGFG)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ACFBAGGDNNH_IFMAMJPGMKM_OFFSET))(this, DPOJBEEBGFG);
	}

	::System::Void OMLFGENENBA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACFBAGGDNNH_OMLFGENENBA_OFFSET))(this);
	}

	::System::Void AOPGPMDDDDI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACFBAGGDNNH_AOPGPMDDDDI_OFFSET))(this);
	}
};
