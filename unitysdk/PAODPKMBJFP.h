#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

template <typename T> class KCMIFNGABDC_1;

#define PAODPKMBJFP_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x16F9AAC0)
#define PAODPKMBJFP_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x16F9A970)
#define PAODPKMBJFP_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x16F9AF60)
#define PAODPKMBJFP__CTOR_OFFSET UNITYSDK_OFFSET(0x16F9AE30)

inline static constexpr unsigned int PAODPKMBJFP_TypeDefinitionIndex = 79673;

class PAODPKMBJFP : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::System::Int32>* PAPJFKFCPLK; // 0x28
	::KCMIFNGABDC_1<::System::Int32>* AGILNMCOKOD; // 0x30
	::KCMIFNGABDC_1<::System::Int32>* GOLMFBANFHE; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAODPKMBJFP__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAODPKMBJFP_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + PAODPKMBJFP_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAODPKMBJFP_GDEOPIBNOIN_OFFSET))(this);
	}
};
