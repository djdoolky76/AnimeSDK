#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BBGMJICNHFO;
class EPMNEBIHEHI;

#define HKEGBNKMCLH_AOPGPMDDDDI_OFFSET UNITYSDK_OFFSET(0x14953890)
#define HKEGBNKMCLH_IFMAMJPGMKM_OFFSET UNITYSDK_OFFSET(0x14953650)
#define HKEGBNKMCLH_OMLFGENENBA_OFFSET UNITYSDK_OFFSET(0x14953800)
#define HKEGBNKMCLH__CTOR_OFFSET UNITYSDK_OFFSET(0x14953640)

inline static constexpr unsigned int HKEGBNKMCLH_TypeDefinitionIndex = 55208;

class HKEGBNKMCLH : public ::System::Object
{
public:
	::EPMNEBIHEHI* EJJKKPOPCCD; // 0x10
	::BBGMJICNHFO* FEFFFPGCIIO; // 0x18

	::System::Void _ctor(::BBGMJICNHFO* AMNIHACKELI)
	{
		return ((::System::Void(*)(::PVOID, ::BBGMJICNHFO*))((::PBYTE)hIl2Cpp + HKEGBNKMCLH__CTOR_OFFSET))(this, AMNIHACKELI);
	}

	::System::Void IFMAMJPGMKM(::System::Boolean DPOJBEEBGFG)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HKEGBNKMCLH_IFMAMJPGMKM_OFFSET))(this, DPOJBEEBGFG);
	}

	::System::Void OMLFGENENBA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKEGBNKMCLH_OMLFGENENBA_OFFSET))(this);
	}

	::System::Void AOPGPMDDDDI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKEGBNKMCLH_AOPGPMDDDDI_OFFSET))(this);
	}
};
