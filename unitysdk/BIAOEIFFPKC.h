#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

template <typename T> class AAMKEDEDHPD_1;
template <typename T> class KCMIFNGABDC_1;

#define BIAOEIFFPKC_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x115060A0)
#define BIAOEIFFPKC_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x11505FD0)
#define BIAOEIFFPKC_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x11506300)
#define BIAOEIFFPKC__CTOR_OFFSET UNITYSDK_OFFSET(0x11506210)

inline static constexpr unsigned int BIAOEIFFPKC_TypeDefinitionIndex = 73018;

class BIAOEIFFPKC : public ::CGJEMKCKIJG
{
public:
	::KCMIFNGABDC_1<::System::Int32>* ANIKPPNMKPH; // 0x18
	::AAMKEDEDHPD_1<::System::Boolean>* GOIGJBOHGJN; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIAOEIFFPKC__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIAOEIFFPKC_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + BIAOEIFFPKC_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIAOEIFFPKC_GDEOPIBNOIN_OFFSET))(this);
	}
};
