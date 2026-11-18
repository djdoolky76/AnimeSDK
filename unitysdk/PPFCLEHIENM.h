#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

template <typename T> class KCMIFNGABDC_1;

#define PPFCLEHIENM_ALHHNOIENBA_OFFSET UNITYSDK_OFFSET(0x1BF3A7F0)
#define PPFCLEHIENM_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x1BF3A780)
#define PPFCLEHIENM_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x1BF3A6F0)
#define PPFCLEHIENM_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x1BF3AF10)
#define PPFCLEHIENM__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF3AE70)

inline static constexpr unsigned int PPFCLEHIENM_TypeDefinitionIndex = 62248;

class PPFCLEHIENM : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::System::Boolean>* GJDOFCMHDEG; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPFCLEHIENM__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPFCLEHIENM_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + PPFCLEHIENM_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPFCLEHIENM_GDEOPIBNOIN_OFFSET))(this);
	}

	::System::Boolean ALHHNOIENBA(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Boolean(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + PPFCLEHIENM_ALHHNOIENBA_OFFSET))(this, BKBGPKNGNMF);
	}
};
