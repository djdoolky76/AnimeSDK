#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

class LGAFMFNMCOG;
namespace System { class String; }
template <typename T> class KCMIFNGABDC_1;

#define IMCAMFPFJCC_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x16AAAC50)
#define IMCAMFPFJCC_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x16AAAAA0)
#define IMCAMFPFJCC_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x16AAB1C0)
#define IMCAMFPFJCC_JFBDALLPLBA_OFFSET UNITYSDK_OFFSET(0x16AAB130)
#define IMCAMFPFJCC_MLAAFFHCOJE_OFFSET UNITYSDK_OFFSET(0x16AAA8C0)
#define IMCAMFPFJCC__CTOR_OFFSET UNITYSDK_OFFSET(0x16AAAFD0)

inline static constexpr unsigned int IMCAMFPFJCC_TypeDefinitionIndex = 58631;

class IMCAMFPFJCC : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::System::String*>* NAELJIFAIDD; // 0x28
	::KCMIFNGABDC_1<::System::Boolean>* AJKNEHLMKOI; // 0x30
	::KCMIFNGABDC_1<::System::Boolean>* FMDCCMLPJDM; // 0x38
	::KCMIFNGABDC_1<::System::Int32>* LFPCKGNFIME; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMCAMFPFJCC__CTOR_OFFSET))(this);
	}

	::System::Void MLAAFFHCOJE(::LGAFMFNMCOG* ONBDAIKININ)
	{
		return ((::System::Void(*)(::PVOID, ::LGAFMFNMCOG*))((::PBYTE)hIl2Cpp + IMCAMFPFJCC_MLAAFFHCOJE_OFFSET))(this, ONBDAIKININ);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMCAMFPFJCC_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + IMCAMFPFJCC_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void JFBDALLPLBA(::LGAFMFNMCOG* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::LGAFMFNMCOG*))((::PBYTE)hIl2Cpp + IMCAMFPFJCC_JFBDALLPLBA_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMCAMFPFJCC_GDEOPIBNOIN_OFFSET))(this);
	}
};
