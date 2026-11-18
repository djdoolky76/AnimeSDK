#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HDJFCFCNKJH.h"

class AKHELNKOPEB;

#define GPJEIDIELGO_GCJOLEAPAPD_OFFSET UNITYSDK_OFFSET(0x17A2E650)
#define GPJEIDIELGO_KFICAEGELFE_OFFSET UNITYSDK_OFFSET(0x17A2E4A0)
#define GPJEIDIELGO__CTOR_OFFSET UNITYSDK_OFFSET(0x17A2E490)

inline static constexpr unsigned int GPJEIDIELGO_TypeDefinitionIndex = 63751;

class GPJEIDIELGO : public ::HDJFCFCNKJH
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPJEIDIELGO__CTOR_OFFSET))(this);
	}

	::System::Boolean KFICAEGELFE(::AKHELNKOPEB* IGCMCCAPHCI)
	{
		return ((::System::Boolean(*)(::PVOID, ::AKHELNKOPEB*))((::PBYTE)hIl2Cpp + GPJEIDIELGO_KFICAEGELFE_OFFSET))(this, IGCMCCAPHCI);
	}

	::System::Boolean GCJOLEAPAPD(::AKHELNKOPEB* MIALFKCCCPI)
	{
		return ((::System::Boolean(*)(::PVOID, ::AKHELNKOPEB*))((::PBYTE)hIl2Cpp + GPJEIDIELGO_GCJOLEAPAPD_OFFSET))(this, MIALFKCCCPI);
	}
};
