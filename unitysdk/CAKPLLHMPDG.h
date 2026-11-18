#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FGECBJCAGBC.h"
#include "unitysdk/AGAFGMPKAFA.h"

class DJKHNKJFMJO;

#define CAKPLLHMPDG_BFCJILBJHFJ_OFFSET UNITYSDK_OFFSET(0x16A0ABD0)
#define CAKPLLHMPDG_DAGJHELFMJF_OFFSET UNITYSDK_OFFSET(0x16A0AC90)
#define CAKPLLHMPDG__CTOR_1_OFFSET UNITYSDK_OFFSET(0x16A0AA80)
#define CAKPLLHMPDG__CTOR_OFFSET UNITYSDK_OFFSET(0x16A0A990)

inline static constexpr unsigned int CAKPLLHMPDG_TypeDefinitionIndex = 57831;

class CAKPLLHMPDG : public ::FGECBJCAGBC
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAKPLLHMPDG__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::AGAFGMPKAFA HNOPAJLDCFB)
	{
		return ((::System::Void(*)(::PVOID, ::AGAFGMPKAFA))((::PBYTE)hIl2Cpp + CAKPLLHMPDG__CTOR_1_OFFSET))(this, HNOPAJLDCFB);
	}

	::System::Void BFCJILBJHFJ(::DJKHNKJFMJO* LBDJHIALDLB)
	{
		return ((::System::Void(*)(::PVOID, ::DJKHNKJFMJO*))((::PBYTE)hIl2Cpp + CAKPLLHMPDG_BFCJILBJHFJ_OFFSET))(this, LBDJHIALDLB);
	}

	::System::Void DAGJHELFMJF(::DJKHNKJFMJO* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::DJKHNKJFMJO*))((::PBYTE)hIl2Cpp + CAKPLLHMPDG_DAGJHELFMJF_OFFSET))(this, MIALFKCCCPI);
	}
};
