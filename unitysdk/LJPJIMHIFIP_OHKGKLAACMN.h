#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class LJPJIMHIFIP;
class PJNHLNABMDA;

#define LJPJIMHIFIP_OHKGKLAACMN_GDLACOPGPJE_OFFSET UNITYSDK_OFFSET(0x16C5F2A0)
#define LJPJIMHIFIP_OHKGKLAACMN_KBCCCINOEBD_OFFSET UNITYSDK_OFFSET(0x16C5F2D0)
#define LJPJIMHIFIP_OHKGKLAACMN__CTOR_OFFSET UNITYSDK_OFFSET(0x16C5F290)

inline static constexpr unsigned int LJPJIMHIFIP_OHKGKLAACMN_TypeDefinitionIndex = 55693;

class LJPJIMHIFIP_OHKGKLAACMN : public ::System::Object
{
public:
	::LJPJIMHIFIP* KLHPEBKNIFB; // 0x10
	::PJNHLNABMDA* CGICDEAAEKJ; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJPJIMHIFIP_OHKGKLAACMN__CTOR_OFFSET))(this);
	}

	::System::Void GDLACOPGPJE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJPJIMHIFIP_OHKGKLAACMN_GDLACOPGPJE_OFFSET))(this);
	}

	::System::Void KBCCCINOEBD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJPJIMHIFIP_OHKGKLAACMN_KBCCCINOEBD_OFFSET))(this);
	}
};
