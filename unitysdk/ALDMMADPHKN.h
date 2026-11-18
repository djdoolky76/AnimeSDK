#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
template <typename T> class AAMKEDEDHPD_1;
template <typename T> class KCMIFNGABDC_1;

#define ALDMMADPHKN_ALHHNOIENBA_OFFSET UNITYSDK_OFFSET(0x144F7780)
#define ALDMMADPHKN_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x144F7710)
#define ALDMMADPHKN_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x144F7560)
#define ALDMMADPHKN_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x144F7A30)
#define ALDMMADPHKN__CTOR_OFFSET UNITYSDK_OFFSET(0x144F7860)

inline static constexpr unsigned int ALDMMADPHKN_TypeDefinitionIndex = 66452;

class ALDMMADPHKN : public ::MHMFINLCNFN
{
public:
	::CPABOPKIGAL* JAIGFKHCMPE; // 0x28
	::AAMKEDEDHPD_1<::System::Int32>* EJNAGGJLLLD; // 0x30
	::CPABOPKIGAL* BOHNBOELHDG; // 0x38
	::KCMIFNGABDC_1<::System::Int32>* JOECHPCHKFM; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALDMMADPHKN__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALDMMADPHKN_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + ALDMMADPHKN_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALDMMADPHKN_GDEOPIBNOIN_OFFSET))(this);
	}

	::System::Void ALHHNOIENBA(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + ALDMMADPHKN_ALHHNOIENBA_OFFSET))(this, BKBGPKNGNMF);
	}
};
