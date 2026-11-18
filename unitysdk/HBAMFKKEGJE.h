#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
template <typename T> class KCMIFNGABDC_1;

#define HBAMFKKEGJE_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x13D7DD80)
#define HBAMFKKEGJE_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x13D7DBD0)
#define HBAMFKKEGJE_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x13D7E580)
#define HBAMFKKEGJE__CTOR_OFFSET UNITYSDK_OFFSET(0x13D7E370)

inline static constexpr unsigned int HBAMFKKEGJE_TypeDefinitionIndex = 66980;

class HBAMFKKEGJE : public ::MHMFINLCNFN
{
public:
	// static const ::System::String* FBAAMKFLDHB; // 0x0
	::CPABOPKIGAL* GFPOFNEEMBL; // 0x28
	::CPABOPKIGAL* JAIGFKHCMPE; // 0x30
	::CPABOPKIGAL* BOHNBOELHDG; // 0x38
	::KCMIFNGABDC_1<::System::Int32>* JOECHPCHKFM; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBAMFKKEGJE__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBAMFKKEGJE_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + HBAMFKKEGJE_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBAMFKKEGJE_GDEOPIBNOIN_OFFSET))(this);
	}
};
