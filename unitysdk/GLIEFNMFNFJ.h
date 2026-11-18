#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LNEPKEJAAMC.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define GLIEFNMFNFJ_DPIHOJBBGLA_OFFSET UNITYSDK_OFFSET(0x987730)
#define GLIEFNMFNFJ_ENEANKJMDJD_OFFSET UNITYSDK_OFFSET(0x9876E0)
#define GLIEFNMFNFJ_OCECKNBLIDE_OFFSET UNITYSDK_OFFSET(0x9877C0)
#define GLIEFNMFNFJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9876D0)
#define GLIEFNMFNFJ__CTOR_OFFSET UNITYSDK_OFFSET(0x987690)

inline static constexpr unsigned int GLIEFNMFNFJ_TypeDefinitionIndex = 29107;

struct alignas(4) GLIEFNMFNFJ
{
	// static const ::System::UInt16 IHLEMPFENMH = 0xFFFF; // 0x0
	// static const ::System::Byte LNPJLJAFHKG = 0x1; // 0x0
	::System::UInt16 BEENMOPBJDO; // 0x10
	::System::UInt16 CPJEIAMJFJN; // 0x12
	::System::Byte OCHFOPAGKEG; // 0x14
	::System::Byte EOBJDEADDBE; // 0x15
	::System::UInt16 IGHHEEDJPCN; // 0x16
	::LNEPKEJAAMC MCEFALDMNMC; // 0x18
	::LNEPKEJAAMC HGLEMBFNEED; // 0x1C
	::LNEPKEJAAMC OFPFDPNHEOP; // 0x20
	::LNEPKEJAAMC JBHCOOKJKAO; // 0x24

	::System::Void _ctor(::System::UInt16 JAEEFFMIABP, ::System::UInt16 IIBJDOEHMOM, ::System::Byte CNGLGMJJIMI, ::System::Boolean JPDGPELJNGJ, ::LNEPKEJAAMC MJJOMIBJMAI, ::LNEPKEJAAMC GMEGKDACGKM, ::LNEPKEJAAMC OCCACOIBFCE, ::LNEPKEJAAMC BPJNHFEEOGM)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::UInt16, ::System::Byte, ::System::Boolean, ::LNEPKEJAAMC, ::LNEPKEJAAMC, ::LNEPKEJAAMC, ::LNEPKEJAAMC))((::PBYTE)hIl2Cpp + GLIEFNMFNFJ__CTOR_OFFSET))(this, JAEEFFMIABP, IIBJDOEHMOM, CNGLGMJJIMI, JPDGPELJNGJ, MJJOMIBJMAI, GMEGKDACGKM, OCCACOIBFCE, BPJNHFEEOGM);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GLIEFNMFNFJ_TOSTRING_OFFSET))(this);
	}

	::System::Boolean ENEANKJMDJD()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GLIEFNMFNFJ_ENEANKJMDJD_OFFSET))(this);
	}

	::System::String* DPIHOJBBGLA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GLIEFNMFNFJ_DPIHOJBBGLA_OFFSET))(this);
	}

	::System::Boolean OCECKNBLIDE()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GLIEFNMFNFJ_OCECKNBLIDE_OFFSET))(this);
	}
};
