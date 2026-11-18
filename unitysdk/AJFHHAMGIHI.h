#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class AAMKEDEDHPD_1;
template <typename T> class KCMIFNGABDC_1;

#define AJFHHAMGIHI_ALHHNOIENBA_OFFSET UNITYSDK_OFFSET(0x144E2550)
#define AJFHHAMGIHI_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x144E24E0)
#define AJFHHAMGIHI_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x144E2330)
#define AJFHHAMGIHI_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x144E2D60)
#define AJFHHAMGIHI__CTOR_OFFSET UNITYSDK_OFFSET(0x144E2B90)

inline static constexpr unsigned int AJFHHAMGIHI_TypeDefinitionIndex = 81030;

class AJFHHAMGIHI : public ::MHMFINLCNFN
{
public:
	::AAMKEDEDHPD_1<::System::Collections::Generic::List_1<::System::Int32>*>* HDLCAMGBPGH; // 0x28
	::CPABOPKIGAL* JAIGFKHCMPE; // 0x30
	::KCMIFNGABDC_1<::System::Boolean>* AGPHAHHIKMA; // 0x38
	::CPABOPKIGAL* BOHNBOELHDG; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJFHHAMGIHI__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJFHHAMGIHI_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + AJFHHAMGIHI_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void ALHHNOIENBA(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + AJFHHAMGIHI_ALHHNOIENBA_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJFHHAMGIHI_GDEOPIBNOIN_OFFSET))(this);
	}
};
