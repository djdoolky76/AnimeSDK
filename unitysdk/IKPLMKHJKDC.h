#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BKCJAIFHNKF.h"
#include "unitysdk/LGCNEDCMPKM.h"
#include "unitysdk/NEIGJHNJNFL.h"

class CPABOPKIGAL;
class KCBEGMCCKCA;
namespace System { class String; }
template <typename T> class AAMKEDEDHPD_1;

#define IKPLMKHJKDC_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x141F0B80)
#define IKPLMKHJKDC_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x141F0990)
#define IKPLMKHJKDC_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x141F0E80)
#define IKPLMKHJKDC_LHLLFJDCOOF_OFFSET UNITYSDK_OFFSET(0x141F0AD0)
#define IKPLMKHJKDC__CTOR_OFFSET UNITYSDK_OFFSET(0x141F0D30)

inline static constexpr unsigned int IKPLMKHJKDC_TypeDefinitionIndex = 75795;

class IKPLMKHJKDC : public ::BKCJAIFHNKF
{
public:
	::AAMKEDEDHPD_1<::System::String*>* IBNLAAIELGL; // 0x18
	::CPABOPKIGAL* MMFNFINOFPN; // 0x20
	::AAMKEDEDHPD_1<::System::Int32>* CBJICLLDJDF; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKPLMKHJKDC__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKPLMKHJKDC_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void LHLLFJDCOOF(::KCBEGMCCKCA* MHPNGBGGMMN, ::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::KCBEGMCCKCA*, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + IKPLMKHJKDC_LHLLFJDCOOF_OFFSET))(this, MHPNGBGGMMN, BKBGPKNGNMF);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF, ::NEIGJHNJNFL DIHNFECKHMD)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&, ::NEIGJHNJNFL))((::PBYTE)hIl2Cpp + IKPLMKHJKDC_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF, DIHNFECKHMD);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKPLMKHJKDC_GDEOPIBNOIN_OFFSET))(this);
	}
};
