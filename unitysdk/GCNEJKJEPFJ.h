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

#define GCNEJKJEPFJ_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x175211C0)
#define GCNEJKJEPFJ_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x17520F10)
#define GCNEJKJEPFJ_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x17521640)
#define GCNEJKJEPFJ_LHLLFJDCOOF_OFFSET UNITYSDK_OFFSET(0x17521110)
#define GCNEJKJEPFJ__CTOR_OFFSET UNITYSDK_OFFSET(0x17521480)

inline static constexpr unsigned int GCNEJKJEPFJ_TypeDefinitionIndex = 78335;

class GCNEJKJEPFJ : public ::BKCJAIFHNKF
{
public:
	::KCMIFNGABDC_1<::System::Int32>* NHKNILFDKGG; // 0x18
	::AAMKEDEDHPD_1<::System::Boolean>* BJNLMKPONKM; // 0x20
	::KCMIFNGABDC_1<::System::String*>* IFIBPAELOPK; // 0x28
	::MKBBPOFGLOF* MMFNFINOFPN; // 0x30
	::AAMKEDEDHPD_1<::System::Int32>* OOKLPDKJAJJ; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCNEJKJEPFJ__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCNEJKJEPFJ_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void LHLLFJDCOOF(::KCBEGMCCKCA* MHPNGBGGMMN, ::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::KCBEGMCCKCA*, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + GCNEJKJEPFJ_LHLLFJDCOOF_OFFSET))(this, MHPNGBGGMMN, BKBGPKNGNMF);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF, ::NEIGJHNJNFL DIHNFECKHMD)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&, ::NEIGJHNJNFL))((::PBYTE)hIl2Cpp + GCNEJKJEPFJ_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF, DIHNFECKHMD);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCNEJKJEPFJ_GDEOPIBNOIN_OFFSET))(this);
	}
};
