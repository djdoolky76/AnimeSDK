#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BKCJAIFHNKF.h"
#include "unitysdk/LGCNEDCMPKM.h"
#include "unitysdk/NEIGJHNJNFL.h"

class KCBEGMCCKCA;
class MKBBPOFGLOF;
namespace System { class String; }
template <typename T> class KCMIFNGABDC_1;

#define FFBGOCCNAOJ_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x156B7DA0)
#define FFBGOCCNAOJ_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x156B7C20)
#define FFBGOCCNAOJ_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x156B8160)
#define FFBGOCCNAOJ_LHLLFJDCOOF_OFFSET UNITYSDK_OFFSET(0x156B7CF0)
#define FFBGOCCNAOJ__CTOR_OFFSET UNITYSDK_OFFSET(0x156B8060)

inline static constexpr unsigned int FFBGOCCNAOJ_TypeDefinitionIndex = 82933;

class FFBGOCCNAOJ : public ::BKCJAIFHNKF
{
public:
	::KCMIFNGABDC_1<::System::String*>* EICHHECGHIM; // 0x18
	::MKBBPOFGLOF* MMFNFINOFPN; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFBGOCCNAOJ__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFBGOCCNAOJ_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void LHLLFJDCOOF(::KCBEGMCCKCA* MHPNGBGGMMN, ::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::KCBEGMCCKCA*, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + FFBGOCCNAOJ_LHLLFJDCOOF_OFFSET))(this, MHPNGBGGMMN, BKBGPKNGNMF);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF, ::NEIGJHNJNFL DIHNFECKHMD)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&, ::NEIGJHNJNFL))((::PBYTE)hIl2Cpp + FFBGOCCNAOJ_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF, DIHNFECKHMD);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFBGOCCNAOJ_GDEOPIBNOIN_OFFSET))(this);
	}
};
