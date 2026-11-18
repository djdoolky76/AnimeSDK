#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

template <typename T> class AAMKEDEDHPD_1;
template <typename T> class KCMIFNGABDC_1;

#define BNKLMLAPMIB_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x1692ECC0)
#define BNKLMLAPMIB_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x1692EB80)
#define BNKLMLAPMIB_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x1692EFF0)
#define BNKLMLAPMIB__CTOR_OFFSET UNITYSDK_OFFSET(0x1692EED0)

inline static constexpr unsigned int BNKLMLAPMIB_TypeDefinitionIndex = 78265;

class BNKLMLAPMIB : public ::CGJEMKCKIJG
{
public:
	::KCMIFNGABDC_1<::System::Int32>* ELAADEDGEIL; // 0x18
	::KCMIFNGABDC_1<::System::Int32>* FJMNMKPGFIF; // 0x20
	::AAMKEDEDHPD_1<::System::Boolean>* GJMOGOHPOCH; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNKLMLAPMIB__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNKLMLAPMIB_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + BNKLMLAPMIB_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNKLMLAPMIB_GDEOPIBNOIN_OFFSET))(this);
	}
};
