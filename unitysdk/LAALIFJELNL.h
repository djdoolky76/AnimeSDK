#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BKCJAIFHNKF.h"
#include "unitysdk/LGCNEDCMPKM.h"
#include "unitysdk/NEIGJHNJNFL.h"

class KCBEGMCCKCA;
class MKBBPOFGLOF;
namespace System { class String; }
template <typename T> class KCMIFNGABDC_1;

#define LAALIFJELNL_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x129B1440)
#define LAALIFJELNL_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x129B12C0)
#define LAALIFJELNL_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x129B1600)
#define LAALIFJELNL_LHLLFJDCOOF_OFFSET UNITYSDK_OFFSET(0x129B1390)
#define LAALIFJELNL__CTOR_OFFSET UNITYSDK_OFFSET(0x129B1500)

inline static constexpr unsigned int LAALIFJELNL_TypeDefinitionIndex = 43386;

class LAALIFJELNL : public ::BKCJAIFHNKF
{
public:
	::MKBBPOFGLOF* MMFNFINOFPN; // 0x18
	::KCMIFNGABDC_1<::System::String*>* NCJOBBPFMNH; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAALIFJELNL__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAALIFJELNL_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void LHLLFJDCOOF(::KCBEGMCCKCA* MHPNGBGGMMN, ::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::KCBEGMCCKCA*, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + LAALIFJELNL_LHLLFJDCOOF_OFFSET))(this, MHPNGBGGMMN, BKBGPKNGNMF);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF, ::NEIGJHNJNFL DIHNFECKHMD)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&, ::NEIGJHNJNFL))((::PBYTE)hIl2Cpp + LAALIFJELNL_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF, DIHNFECKHMD);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAALIFJELNL_GDEOPIBNOIN_OFFSET))(this);
	}
};
