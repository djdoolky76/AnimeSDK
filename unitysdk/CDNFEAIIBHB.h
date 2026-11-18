#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BKCJAIFHNKF.h"
#include "unitysdk/LGCNEDCMPKM.h"
#include "unitysdk/NEIGJHNJNFL.h"

class KCBEGMCCKCA;
class MKBBPOFGLOF;
namespace System { class String; }
template <typename T> class KCMIFNGABDC_1;

#define CDNFEAIIBHB_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x15326380)
#define CDNFEAIIBHB_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x15326200)
#define CDNFEAIIBHB_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x15326540)
#define CDNFEAIIBHB_LHLLFJDCOOF_OFFSET UNITYSDK_OFFSET(0x153262D0)
#define CDNFEAIIBHB__CTOR_OFFSET UNITYSDK_OFFSET(0x15326440)

inline static constexpr unsigned int CDNFEAIIBHB_TypeDefinitionIndex = 82909;

class CDNFEAIIBHB : public ::BKCJAIFHNKF
{
public:
	::MKBBPOFGLOF* MMFNFINOFPN; // 0x18
	::KCMIFNGABDC_1<::System::String*>* NCJOBBPFMNH; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDNFEAIIBHB__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDNFEAIIBHB_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void LHLLFJDCOOF(::KCBEGMCCKCA* MHPNGBGGMMN, ::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::KCBEGMCCKCA*, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + CDNFEAIIBHB_LHLLFJDCOOF_OFFSET))(this, MHPNGBGGMMN, BKBGPKNGNMF);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF, ::NEIGJHNJNFL DIHNFECKHMD)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&, ::NEIGJHNJNFL))((::PBYTE)hIl2Cpp + CDNFEAIIBHB_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF, DIHNFECKHMD);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDNFEAIIBHB_GDEOPIBNOIN_OFFSET))(this);
	}
};
