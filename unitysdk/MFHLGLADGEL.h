#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BKCJAIFHNKF.h"
#include "unitysdk/LGCNEDCMPKM.h"
#include "unitysdk/NEIGJHNJNFL.h"

class KCBEGMCCKCA;
class MKBBPOFGLOF;
namespace System { class String; }
template <typename T> class AAMKEDEDHPD_1;

#define MFHLGLADGEL_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x12D7C3C0)
#define MFHLGLADGEL_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x12D7C1D0)
#define MFHLGLADGEL_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x12D7C720)
#define MFHLGLADGEL_LHLLFJDCOOF_OFFSET UNITYSDK_OFFSET(0x12D7C310)
#define MFHLGLADGEL__CTOR_OFFSET UNITYSDK_OFFSET(0x12D7C5D0)

inline static constexpr unsigned int MFHLGLADGEL_TypeDefinitionIndex = 53456;

class MFHLGLADGEL : public ::BKCJAIFHNKF
{
public:
	::MKBBPOFGLOF* LMDIMIIBPLD; // 0x18
	::AAMKEDEDHPD_1<::System::String*>* OJLLEEAILNB; // 0x20
	::AAMKEDEDHPD_1<::System::String*>* KBKMFMNLJCL; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFHLGLADGEL__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFHLGLADGEL_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void LHLLFJDCOOF(::KCBEGMCCKCA* MHPNGBGGMMN, ::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::KCBEGMCCKCA*, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + MFHLGLADGEL_LHLLFJDCOOF_OFFSET))(this, MHPNGBGGMMN, BKBGPKNGNMF);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF, ::NEIGJHNJNFL DIHNFECKHMD)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&, ::NEIGJHNJNFL))((::PBYTE)hIl2Cpp + MFHLGLADGEL_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF, DIHNFECKHMD);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFHLGLADGEL_GDEOPIBNOIN_OFFSET))(this);
	}
};
