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

#define HCPGMMLGBAI_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x15D9E850)
#define HCPGMMLGBAI_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x15D9E4E0)
#define HCPGMMLGBAI_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x15D9EE50)
#define HCPGMMLGBAI_LHLLFJDCOOF_OFFSET UNITYSDK_OFFSET(0x15D9E740)
#define HCPGMMLGBAI__CTOR_OFFSET UNITYSDK_OFFSET(0x15D9EC50)

inline static constexpr unsigned int HCPGMMLGBAI_TypeDefinitionIndex = 78006;

class HCPGMMLGBAI : public ::BKCJAIFHNKF
{
public:
	::MKBBPOFGLOF* MMFNFINOFPN; // 0x18
	::KCMIFNGABDC_1<::System::String*>* IFIBPAELOPK; // 0x20
	::KCMIFNGABDC_1<::System::Int32>* NHKNILFDKGG; // 0x28
	::AAMKEDEDHPD_1<::System::Int32>* OOKLPDKJAJJ; // 0x30
	::KCMIFNGABDC_1<::System::Int32>* JKGCLPKEEDB; // 0x38
	::AAMKEDEDHPD_1<::System::Boolean>* BJNLMKPONKM; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCPGMMLGBAI__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCPGMMLGBAI_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void LHLLFJDCOOF(::KCBEGMCCKCA* MHPNGBGGMMN, ::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::KCBEGMCCKCA*, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + HCPGMMLGBAI_LHLLFJDCOOF_OFFSET))(this, MHPNGBGGMMN, BKBGPKNGNMF);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF, ::NEIGJHNJNFL DIHNFECKHMD)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&, ::NEIGJHNJNFL))((::PBYTE)hIl2Cpp + HCPGMMLGBAI_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF, DIHNFECKHMD);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCPGMMLGBAI_GDEOPIBNOIN_OFFSET))(this);
	}
};
