#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BKCJAIFHNKF.h"
#include "unitysdk/LGCNEDCMPKM.h"
#include "unitysdk/NEIGJHNJNFL.h"

class KCBEGMCCKCA;
class MKBBPOFGLOF;
namespace System { class String; }
template <typename T> class KCMIFNGABDC_1;

#define MMMJHDBPPOC_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x131A4E70)
#define MMMJHDBPPOC_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x131A4CF0)
#define MMMJHDBPPOC_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x131A51F0)
#define MMMJHDBPPOC_LHLLFJDCOOF_OFFSET UNITYSDK_OFFSET(0x131A4DC0)
#define MMMJHDBPPOC__CTOR_OFFSET UNITYSDK_OFFSET(0x131A50F0)

inline static constexpr unsigned int MMMJHDBPPOC_TypeDefinitionIndex = 46750;

class MMMJHDBPPOC : public ::BKCJAIFHNKF
{
public:
	::MKBBPOFGLOF* MMFNFINOFPN; // 0x18
	::KCMIFNGABDC_1<::System::String*>* BFPGMMGFBHD; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMMJHDBPPOC__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMMJHDBPPOC_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void LHLLFJDCOOF(::KCBEGMCCKCA* MHPNGBGGMMN, ::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::KCBEGMCCKCA*, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + MMMJHDBPPOC_LHLLFJDCOOF_OFFSET))(this, MHPNGBGGMMN, BKBGPKNGNMF);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF, ::NEIGJHNJNFL DIHNFECKHMD)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&, ::NEIGJHNJNFL))((::PBYTE)hIl2Cpp + MMMJHDBPPOC_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF, DIHNFECKHMD);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMMJHDBPPOC_GDEOPIBNOIN_OFFSET))(this);
	}
};
