#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ABHBAPCNEHF_LPLPOMMJAPE.h"
#include "unitysdk/System/ValueType.h"

#define ABHBAPCNEHF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x6F1C20)
#define ABHBAPCNEHF_HLPHPBAODIF_OFFSET UNITYSDK_OFFSET(0x6F1C70)
#define ABHBAPCNEHF__CTOR_OFFSET UNITYSDK_OFFSET(0x3D9940)

inline static constexpr unsigned int ABHBAPCNEHF_TypeDefinitionIndex = 46569;

struct alignas(4) ABHBAPCNEHF
{
	::System::UInt32 GEMIFAPKIEL; // 0x10
	::System::Int32 CHEIBJEJOCL; // 0x14
	::ABHBAPCNEHF_LPLPOMMJAPE CPGCCNALGHC; // 0x18

	::System::Void _ctor(::System::UInt32 GEMIFAPKIEL, ::System::Int32 CHEIBJEJOCL, ::ABHBAPCNEHF_LPLPOMMJAPE OKMHHECJDCM)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32, ::ABHBAPCNEHF_LPLPOMMJAPE))((::PBYTE)hIl2Cpp + ABHBAPCNEHF__CTOR_OFFSET))(this, GEMIFAPKIEL, CHEIBJEJOCL, OKMHHECJDCM);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ABHBAPCNEHF_GETHASHCODE_OFFSET))(this);
	}

	::System::Int32 HLPHPBAODIF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ABHBAPCNEHF_HLPHPBAODIF_OFFSET))(this);
	}
};
