#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BKCJAIFHNKF.h"
#include "unitysdk/LGCNEDCMPKM.h"
#include "unitysdk/NEIGJHNJNFL.h"

class CPABOPKIGAL;
class KCBEGMCCKCA;
namespace System { class String; }
template <typename T> class AAMKEDEDHPD_1;

#define OBMONFAABHE_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x15F58300)
#define OBMONFAABHE_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x15F58110)
#define OBMONFAABHE_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x15F58590)
#define OBMONFAABHE_LHLLFJDCOOF_OFFSET UNITYSDK_OFFSET(0x15F58250)
#define OBMONFAABHE__CTOR_OFFSET UNITYSDK_OFFSET(0x15F58440)

inline static constexpr unsigned int OBMONFAABHE_TypeDefinitionIndex = 64074;

class OBMONFAABHE : public ::BKCJAIFHNKF
{
public:
	::AAMKEDEDHPD_1<::System::String*>* KPBEHONFCPJ; // 0x18
	::CPABOPKIGAL* MMFNFINOFPN; // 0x20
	::AAMKEDEDHPD_1<::System::Boolean>* GLBHDPPOAAC; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBMONFAABHE__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBMONFAABHE_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void LHLLFJDCOOF(::KCBEGMCCKCA* MHPNGBGGMMN, ::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::KCBEGMCCKCA*, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + OBMONFAABHE_LHLLFJDCOOF_OFFSET))(this, MHPNGBGGMMN, BKBGPKNGNMF);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF, ::NEIGJHNJNFL DIHNFECKHMD)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&, ::NEIGJHNJNFL))((::PBYTE)hIl2Cpp + OBMONFAABHE_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF, DIHNFECKHMD);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBMONFAABHE_GDEOPIBNOIN_OFFSET))(this);
	}
};
