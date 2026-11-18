#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KNLHFLFKGMP.h"
#include "unitysdk/PJJCGDEKPFO.h"

#define FCFMPAMNAAF_BNJHEKFGHLD_OFFSET UNITYSDK_OFFSET(0x1E2EB040)
#define FCFMPAMNAAF_DPIICAPLPID_OFFSET UNITYSDK_OFFSET(0x1E2EB030)
#define FCFMPAMNAAF_EHOBNEDGAGJ_OFFSET UNITYSDK_OFFSET(0x1E2EB010)
#define FCFMPAMNAAF_HEMOHDFDKEG_OFFSET UNITYSDK_OFFSET(0x1E2EB020)
#define FCFMPAMNAAF__CTOR_OFFSET UNITYSDK_OFFSET(0x1E2EB000)

inline static constexpr unsigned int FCFMPAMNAAF_TypeDefinitionIndex = 93727;

class FCFMPAMNAAF : public ::KNLHFLFKGMP
{
public:
	::System::Boolean _IOGNHACBEBE_k__BackingField; // 0x68
	::System::Byte _padding0[0x3];
	::PJJCGDEKPFO _EEFGOAJIPNI_k__BackingField; // 0x6C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCFMPAMNAAF__CTOR_OFFSET))(this);
	}

	::System::Boolean EHOBNEDGAGJ()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FCFMPAMNAAF_EHOBNEDGAGJ_OFFSET))(this);
	}

	::PJJCGDEKPFO HEMOHDFDKEG()
	{
		return ((::PJJCGDEKPFO(*)(::PVOID))((::PBYTE)hIl2Cpp + FCFMPAMNAAF_HEMOHDFDKEG_OFFSET))(this);
	}

	::System::Void DPIICAPLPID(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FCFMPAMNAAF_DPIICAPLPID_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void BNJHEKFGHLD(::PJJCGDEKPFO EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::PJJCGDEKPFO))((::PBYTE)hIl2Cpp + FCFMPAMNAAF_BNJHEKFGHLD_OFFSET))(this, EGEGIMGMJHN);
	}
};
