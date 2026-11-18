#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class IOEFCGGLDKK;
template <typename T> class AAMKEDEDHPD_1;
template <typename T> class KCMIFNGABDC_1;

#define DCGDJEABINJ_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x1205FFB0)
#define DCGDJEABINJ_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x1205FEE0)
#define DCGDJEABINJ_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x12060210)
#define DCGDJEABINJ__CTOR_OFFSET UNITYSDK_OFFSET(0x12060120)

inline static constexpr unsigned int DCGDJEABINJ_TypeDefinitionIndex = 78026;

class DCGDJEABINJ : public ::CGJEMKCKIJG
{
public:
	::KCMIFNGABDC_1<::System::Int32>* ELEGHNLJEFC; // 0x18
	::AAMKEDEDHPD_1<::IOEFCGGLDKK*>* PDNPLIGBCEJ; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCGDJEABINJ__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCGDJEABINJ_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + DCGDJEABINJ_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCGDJEABINJ_GDEOPIBNOIN_OFFSET))(this);
	}
};
