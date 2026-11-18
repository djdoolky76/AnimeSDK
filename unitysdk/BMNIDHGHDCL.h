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

#define BMNIDHGHDCL_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x14EF8A30)
#define BMNIDHGHDCL_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x14EF8780)
#define BMNIDHGHDCL_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x14EF9350)
#define BMNIDHGHDCL_LHLLFJDCOOF_OFFSET UNITYSDK_OFFSET(0x14EF8980)
#define BMNIDHGHDCL__CTOR_OFFSET UNITYSDK_OFFSET(0x14EF9190)

inline static constexpr unsigned int BMNIDHGHDCL_TypeDefinitionIndex = 69983;

class BMNIDHGHDCL : public ::BKCJAIFHNKF
{
public:
	::AAMKEDEDHPD_1<::System::Boolean>* ENCLBDHNPDM; // 0x18
	::KCMIFNGABDC_1<::System::String*>* KFLGMJMDNCN; // 0x20
	::AAMKEDEDHPD_1<::System::Int32>* OGFPEPEEHLP; // 0x28
	::MKBBPOFGLOF* LMDIMIIBPLD; // 0x30
	::AAMKEDEDHPD_1<::System::String*>* IMGHMLIAJDI; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMNIDHGHDCL__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMNIDHGHDCL_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void LHLLFJDCOOF(::KCBEGMCCKCA* MHPNGBGGMMN, ::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::KCBEGMCCKCA*, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + BMNIDHGHDCL_LHLLFJDCOOF_OFFSET))(this, MHPNGBGGMMN, BKBGPKNGNMF);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF, ::NEIGJHNJNFL DIHNFECKHMD)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&, ::NEIGJHNJNFL))((::PBYTE)hIl2Cpp + BMNIDHGHDCL_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF, DIHNFECKHMD);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMNIDHGHDCL_GDEOPIBNOIN_OFFSET))(this);
	}
};
