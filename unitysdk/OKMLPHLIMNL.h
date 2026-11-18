#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BKCJAIFHNKF.h"
#include "unitysdk/LGCNEDCMPKM.h"
#include "unitysdk/NEIGJHNJNFL.h"

class KCBEGMCCKCA;
class MKBBPOFGLOF;
namespace System { class String; }
template <typename T> class AAMKEDEDHPD_1;
template <typename T> class KCMIFNGABDC_1;

#define OKMLPHLIMNL_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x15FE8510)
#define OKMLPHLIMNL_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x15FE8320)
#define OKMLPHLIMNL_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x15FE88B0)
#define OKMLPHLIMNL_LHLLFJDCOOF_OFFSET UNITYSDK_OFFSET(0x15FE8460)
#define OKMLPHLIMNL__CTOR_OFFSET UNITYSDK_OFFSET(0x15FE8760)

inline static constexpr unsigned int OKMLPHLIMNL_TypeDefinitionIndex = 49368;

class OKMLPHLIMNL : public ::BKCJAIFHNKF
{
public:
	::KCMIFNGABDC_1<::System::String*>* LDOCEBILOBN; // 0x18
	::MKBBPOFGLOF* MMFNFINOFPN; // 0x20
	::AAMKEDEDHPD_1<::System::Int32>* DAEENJIGFBI; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKMLPHLIMNL__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKMLPHLIMNL_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void LHLLFJDCOOF(::KCBEGMCCKCA* MHPNGBGGMMN, ::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::KCBEGMCCKCA*, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + OKMLPHLIMNL_LHLLFJDCOOF_OFFSET))(this, MHPNGBGGMMN, BKBGPKNGNMF);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF, ::NEIGJHNJNFL DIHNFECKHMD)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&, ::NEIGJHNJNFL))((::PBYTE)hIl2Cpp + OKMLPHLIMNL_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF, DIHNFECKHMD);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKMLPHLIMNL_GDEOPIBNOIN_OFFSET))(this);
	}
};
