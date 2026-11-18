#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

template <typename T> class KCMIFNGABDC_1;

#define EKPHNLNCKII_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x14176EB0)
#define EKPHNLNCKII_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x14176DD0)
#define EKPHNLNCKII_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x14177070)
#define EKPHNLNCKII__CTOR_OFFSET UNITYSDK_OFFSET(0x14176F80)

inline static constexpr unsigned int EKPHNLNCKII_TypeDefinitionIndex = 67290;

class EKPHNLNCKII : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::System::Boolean>* JFGBIJEAOCB; // 0x28
	::KCMIFNGABDC_1<::System::Int32>* CJBGPFBENFE; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKPHNLNCKII__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKPHNLNCKII_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + EKPHNLNCKII_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKPHNLNCKII_GDEOPIBNOIN_OFFSET))(this);
	}
};
