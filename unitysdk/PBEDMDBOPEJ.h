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

#define PBEDMDBOPEJ_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x178AE590)
#define PBEDMDBOPEJ_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x178AE230)
#define PBEDMDBOPEJ_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x178AEB50)
#define PBEDMDBOPEJ_HBDHHOLKBIN_OFFSET UNITYSDK_OFFSET(0x178AE8F0)
#define PBEDMDBOPEJ_LHLLFJDCOOF_OFFSET UNITYSDK_OFFSET(0x178AE490)
#define PBEDMDBOPEJ__CTOR_OFFSET UNITYSDK_OFFSET(0x178AE6F0)

inline static constexpr unsigned int PBEDMDBOPEJ_TypeDefinitionIndex = 45773;

class PBEDMDBOPEJ : public ::BKCJAIFHNKF
{
public:
	::KCMIFNGABDC_1<::System::String*>* NCJOBBPFMNH; // 0x18
	::KCMIFNGABDC_1<::System::Collections::Generic::List_1<::System::Int32>*>* DMOLHEFPBGB; // 0x20
	::AAMKEDEDHPD_1<::System::Int32>* FJMNMKPGFIF; // 0x28
	::AAMKEDEDHPD_1<::System::Int32>* ELAADEDGEIL; // 0x30
	::AAMKEDEDHPD_1<::System::Int32>* AFBOLOHADAG; // 0x38
	::CPABOPKIGAL* LMDIMIIBPLD; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBEDMDBOPEJ__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBEDMDBOPEJ_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void LHLLFJDCOOF(::KCBEGMCCKCA* MHPNGBGGMMN, ::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::KCBEGMCCKCA*, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + PBEDMDBOPEJ_LHLLFJDCOOF_OFFSET))(this, MHPNGBGGMMN, BKBGPKNGNMF);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF, ::NEIGJHNJNFL DIHNFECKHMD)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&, ::NEIGJHNJNFL))((::PBYTE)hIl2Cpp + PBEDMDBOPEJ_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF, DIHNFECKHMD);
	}

	::System::Boolean HBDHHOLKBIN(::LGCNEDCMPKM AAOCANGHBDG, ::NEIGJHNJNFL LJBPECKCCEA)
	{
		return ((::System::Boolean(*)(::PVOID, ::LGCNEDCMPKM, ::NEIGJHNJNFL))((::PBYTE)hIl2Cpp + PBEDMDBOPEJ_HBDHHOLKBIN_OFFSET))(this, AAOCANGHBDG, LJBPECKCCEA);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBEDMDBOPEJ_GDEOPIBNOIN_OFFSET))(this);
	}
};
