#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BKCJAIFHNKF.h"
#include "unitysdk/LGCNEDCMPKM.h"
#include "unitysdk/NEIGJHNJNFL.h"

class KCBEGMCCKCA;
class MKBBPOFGLOF;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class AAMKEDEDHPD_1;
template <typename T> class KCMIFNGABDC_1;

#define LNGEJDJHDBG_CEHGINMCFNP_OFFSET UNITYSDK_OFFSET(0x11F24380)
#define LNGEJDJHDBG_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x11F240A0)
#define LNGEJDJHDBG_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x11F23DF0)
#define LNGEJDJHDBG_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x11F244D0)
#define LNGEJDJHDBG_LHLLFJDCOOF_OFFSET UNITYSDK_OFFSET(0x11F23FA0)
#define LNGEJDJHDBG__CTOR_OFFSET UNITYSDK_OFFSET(0x11F24200)

inline static constexpr unsigned int LNGEJDJHDBG_TypeDefinitionIndex = 79469;

class LNGEJDJHDBG : public ::BKCJAIFHNKF
{
public:
	::AAMKEDEDHPD_1<::System::Collections::Generic::List_1<::System::Int32>*>* IKMAOEJGPGJ; // 0x18
	::AAMKEDEDHPD_1<::System::Collections::Generic::List_1<::System::String*>*>* KLHMGGCJGII; // 0x20
	::MKBBPOFGLOF* MMFNFINOFPN; // 0x28
	::KCMIFNGABDC_1<::System::String*>* JFHLOIOCKFG; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNGEJDJHDBG__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNGEJDJHDBG_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void LHLLFJDCOOF(::KCBEGMCCKCA* MHPNGBGGMMN, ::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::KCBEGMCCKCA*, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + LNGEJDJHDBG_LHLLFJDCOOF_OFFSET))(this, MHPNGBGGMMN, BKBGPKNGNMF);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF, ::NEIGJHNJNFL DIHNFECKHMD)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&, ::NEIGJHNJNFL))((::PBYTE)hIl2Cpp + LNGEJDJHDBG_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF, DIHNFECKHMD);
	}

	::System::Boolean CEHGINMCFNP(::LGCNEDCMPKM AAOCANGHBDG, ::NEIGJHNJNFL LJBPECKCCEA)
	{
		return ((::System::Boolean(*)(::PVOID, ::LGCNEDCMPKM, ::NEIGJHNJNFL))((::PBYTE)hIl2Cpp + LNGEJDJHDBG_CEHGINMCFNP_OFFSET))(this, AAOCANGHBDG, LJBPECKCCEA);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNGEJDJHDBG_GDEOPIBNOIN_OFFSET))(this);
	}
};
