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

#define IPCFMJABBHB_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x142025B0)
#define IPCFMJABBHB_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x14202350)
#define IPCFMJABBHB_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x14202980)
#define IPCFMJABBHB_LHLLFJDCOOF_OFFSET UNITYSDK_OFFSET(0x14202500)
#define IPCFMJABBHB__CTOR_OFFSET UNITYSDK_OFFSET(0x14202800)

inline static constexpr unsigned int IPCFMJABBHB_TypeDefinitionIndex = 73494;

class IPCFMJABBHB : public ::BKCJAIFHNKF
{
public:
	::KCMIFNGABDC_1<::System::String*>* LAFJDOMBEPG; // 0x18
	::MKBBPOFGLOF* MMFNFINOFPN; // 0x20
	::AAMKEDEDHPD_1<::System::Int32>* KHFOCNEDGJJ; // 0x28
	::AAMKEDEDHPD_1<::System::Int32>* JFLMCCJCAMJ; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPCFMJABBHB__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPCFMJABBHB_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void LHLLFJDCOOF(::KCBEGMCCKCA* MHPNGBGGMMN, ::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::KCBEGMCCKCA*, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + IPCFMJABBHB_LHLLFJDCOOF_OFFSET))(this, MHPNGBGGMMN, BKBGPKNGNMF);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF, ::NEIGJHNJNFL DIHNFECKHMD)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&, ::NEIGJHNJNFL))((::PBYTE)hIl2Cpp + IPCFMJABBHB_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF, DIHNFECKHMD);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPCFMJABBHB_GDEOPIBNOIN_OFFSET))(this);
	}
};
