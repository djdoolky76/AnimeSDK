#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

class MKBBPOFGLOF;
template <typename T> class KCMIFNGABDC_1;

#define KLGNACJKFME_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x129A31A0)
#define KLGNACJKFME_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x129A3050)
#define KLGNACJKFME_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x129A35B0)
#define KLGNACJKFME__CTOR_OFFSET UNITYSDK_OFFSET(0x129A3420)

inline static constexpr unsigned int KLGNACJKFME_TypeDefinitionIndex = 87358;

class KLGNACJKFME : public ::MHMFINLCNFN
{
public:
	::MKBBPOFGLOF* BOHNBOELHDG; // 0x28
	::MKBBPOFGLOF* JAIGFKHCMPE; // 0x30
	::KCMIFNGABDC_1<::System::Int32>* GFCGFJINEHA; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLGNACJKFME__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLGNACJKFME_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + KLGNACJKFME_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLGNACJKFME_GDEOPIBNOIN_OFFSET))(this);
	}
};
