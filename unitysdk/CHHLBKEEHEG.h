#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BKCJAIFHNKF.h"
#include "unitysdk/LGCNEDCMPKM.h"
#include "unitysdk/NEIGJHNJNFL.h"

class CPABOPKIGAL;
class KCBEGMCCKCA;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class AAMKEDEDHPD_1;
template <typename T> class KCMIFNGABDC_1;

#define CHHLBKEEHEG_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x14F2B390)
#define CHHLBKEEHEG_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x14F2B030)
#define CHHLBKEEHEG_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x14F2B920)
#define CHHLBKEEHEG_IPIPKJGPLOD_OFFSET UNITYSDK_OFFSET(0x14F2B9B0)
#define CHHLBKEEHEG_LHLLFJDCOOF_OFFSET UNITYSDK_OFFSET(0x14F2B290)
#define CHHLBKEEHEG__CTOR_OFFSET UNITYSDK_OFFSET(0x14F2B720)

inline static constexpr unsigned int CHHLBKEEHEG_TypeDefinitionIndex = 38657;

class CHHLBKEEHEG : public ::BKCJAIFHNKF
{
public:
	::AAMKEDEDHPD_1<::System::Collections::Generic::List_1<::System::String*>*>* KHDNJCMPDOF; // 0x18
	::CPABOPKIGAL* LMDIMIIBPLD; // 0x20
	::AAMKEDEDHPD_1<::System::Collections::Generic::List_1<::System::Int32>*>* BPJNDNHDFDH; // 0x28
	::KCMIFNGABDC_1<::System::String*>* OPNFMCBPBLH; // 0x30
	::AAMKEDEDHPD_1<::System::Collections::Generic::List_1<::System::Boolean>*>* CKMLCIGGLLH; // 0x38
	::AAMKEDEDHPD_1<::System::Collections::Generic::List_1<::System::Single>*>* MFLLMOHCONB; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHHLBKEEHEG__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHHLBKEEHEG_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void LHLLFJDCOOF(::KCBEGMCCKCA* MHPNGBGGMMN, ::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::KCBEGMCCKCA*, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + CHHLBKEEHEG_LHLLFJDCOOF_OFFSET))(this, MHPNGBGGMMN, BKBGPKNGNMF);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF, ::NEIGJHNJNFL DIHNFECKHMD)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&, ::NEIGJHNJNFL))((::PBYTE)hIl2Cpp + CHHLBKEEHEG_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF, DIHNFECKHMD);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHHLBKEEHEG_GDEOPIBNOIN_OFFSET))(this);
	}

	::System::Boolean IPIPKJGPLOD(::LGCNEDCMPKM BKBGPKNGNMF, ::NEIGJHNJNFL DIHNFECKHMD)
	{
		return ((::System::Boolean(*)(::PVOID, ::LGCNEDCMPKM, ::NEIGJHNJNFL))((::PBYTE)hIl2Cpp + CHHLBKEEHEG_IPIPKJGPLOD_OFFSET))(this, BKBGPKNGNMF, DIHNFECKHMD);
	}
};
