#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class HCDDIPKLECL;
class HGIDAMPAOGK;
class JDDHAHBFBMI;
class OMMLNBDIGOJ;

#define AGAEFOGEGAB_AAECDJBGOJC_OFFSET UNITYSDK_OFFSET(0x135DBE40)
#define AGAEFOGEGAB_FFCPIEDHBDP_OFFSET UNITYSDK_OFFSET(0x135DBBA0)
#define AGAEFOGEGAB_HLJPINPGIJN_OFFSET UNITYSDK_OFFSET(0x135DBBF0)
#define AGAEFOGEGAB_OKBJOIDEOCH_OFFSET UNITYSDK_OFFSET(0x135DBC70)
#define AGAEFOGEGAB__CTOR_OFFSET UNITYSDK_OFFSET(0x135DBB90)

inline static constexpr unsigned int AGAEFOGEGAB_TypeDefinitionIndex = 71437;

class AGAEFOGEGAB : public ::System::Object
{
public:
	::JDDHAHBFBMI* MHACFCHPBMC; // 0x10
	::HCDDIPKLECL* NNFOBEFOHHL; // 0x18
	::OMMLNBDIGOJ* FADOGHGKPEG; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGAEFOGEGAB__CTOR_OFFSET))(this);
	}

	::System::Boolean FFCPIEDHBDP()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AGAEFOGEGAB_FFCPIEDHBDP_OFFSET))(this);
	}

	::System::Boolean HLJPINPGIJN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AGAEFOGEGAB_HLJPINPGIJN_OFFSET))(this);
	}

	::System::Void OKBJOIDEOCH(::HGIDAMPAOGK* DJHBINAJILL)
	{
		return ((::System::Void(*)(::PVOID, ::HGIDAMPAOGK*))((::PBYTE)hIl2Cpp + AGAEFOGEGAB_OKBJOIDEOCH_OFFSET))(this, DJHBINAJILL);
	}

	::System::Void AAECDJBGOJC(::HGIDAMPAOGK* DJHBINAJILL)
	{
		return ((::System::Void(*)(::PVOID, ::HGIDAMPAOGK*))((::PBYTE)hIl2Cpp + AGAEFOGEGAB_AAECDJBGOJC_OFFSET))(this, DJHBINAJILL);
	}
};
