#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

template <typename T> class AAMKEDEDHPD_1;

#define MDGDCKLIJHF_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x151C1C10)
#define MDGDCKLIJHF_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x151C1B80)
#define MDGDCKLIJHF_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x151C1D70)
#define MDGDCKLIJHF__CTOR_OFFSET UNITYSDK_OFFSET(0x151C1CD0)

inline static constexpr unsigned int MDGDCKLIJHF_TypeDefinitionIndex = 75015;

class MDGDCKLIJHF : public ::CGJEMKCKIJG
{
public:
	::AAMKEDEDHPD_1<::System::Single>* BMJBDKMOOLM; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDGDCKLIJHF__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDGDCKLIJHF_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + MDGDCKLIJHF_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDGDCKLIJHF_GDEOPIBNOIN_OFFSET))(this);
	}
};
