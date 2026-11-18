#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define CBNOJPHIALB_BFLJGPENFNF_OFFSET UNITYSDK_OFFSET(0x6F95F0)
#define CBNOJPHIALB_DMOLIELPHPA_OFFSET UNITYSDK_OFFSET(0x7313E0)
#define CBNOJPHIALB_IEBLHGOPPFP_OFFSET UNITYSDK_OFFSET(0x42FDC0)
#define CBNOJPHIALB_PDFPILBJCMI_OFFSET UNITYSDK_OFFSET(0x7313D0)
#define CBNOJPHIALB__CTOR_OFFSET UNITYSDK_OFFSET(0x7313A0)

inline static constexpr unsigned int CBNOJPHIALB_TypeDefinitionIndex = 55168;

struct alignas(4) CBNOJPHIALB
{
	::System::Single CGHMDGKPHIC; // 0x10
	::System::Single BGLPJOAJEMP; // 0x14
	::System::Single HGGBECOKAHF; // 0x18
	::System::Single LEJOIDJKKAB; // 0x1C
	::System::Single LFGNKEBFFBB; // 0x20
	::System::Single BGBHKDIAHJH; // 0x24

	::System::Void _ctor(::System::Single NLIKLNNCMKN, ::System::Single NJAMGMDBCAA, ::System::Single IECJMNMEDPN, ::System::Single BJMMNDEKBJA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CBNOJPHIALB__CTOR_OFFSET))(this, NLIKLNNCMKN, NJAMGMDBCAA, IECJMNMEDPN, BJMMNDEKBJA);
	}

	::System::Single IEBLHGOPPFP()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CBNOJPHIALB_IEBLHGOPPFP_OFFSET))(this);
	}

	::System::Single BFLJGPENFNF()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CBNOJPHIALB_BFLJGPENFNF_OFFSET))(this);
	}

	::System::Single PDFPILBJCMI()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CBNOJPHIALB_PDFPILBJCMI_OFFSET))(this);
	}

	::System::Single DMOLIELPHPA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CBNOJPHIALB_DMOLIELPHPA_OFFSET))(this);
	}
};
