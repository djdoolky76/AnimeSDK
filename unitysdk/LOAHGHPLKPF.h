#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BKCJAIFHNKF.h"
#include "unitysdk/LGCNEDCMPKM.h"
#include "unitysdk/NEIGJHNJNFL.h"

class CPABOPKIGAL;
class KCBEGMCCKCA;
namespace System { class String; }
template <typename T> class AAMKEDEDHPD_1;

#define LOAHGHPLKPF_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0xD43B9D0)
#define LOAHGHPLKPF_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0xD43B7E0)
#define LOAHGHPLKPF_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0xD43BC50)
#define LOAHGHPLKPF_LHLLFJDCOOF_OFFSET UNITYSDK_OFFSET(0xD43B920)
#define LOAHGHPLKPF__CTOR_OFFSET UNITYSDK_OFFSET(0xD43BB00)

inline static constexpr unsigned int LOAHGHPLKPF_TypeDefinitionIndex = 39229;

class LOAHGHPLKPF : public ::BKCJAIFHNKF
{
public:
	::AAMKEDEDHPD_1<::System::Int32>* DODBIMJDPFC; // 0x18
	::AAMKEDEDHPD_1<::System::String*>* LDLHHFJOGMI; // 0x20
	::CPABOPKIGAL* MMFNFINOFPN; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOAHGHPLKPF__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOAHGHPLKPF_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void LHLLFJDCOOF(::KCBEGMCCKCA* MHPNGBGGMMN, ::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::KCBEGMCCKCA*, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + LOAHGHPLKPF_LHLLFJDCOOF_OFFSET))(this, MHPNGBGGMMN, BKBGPKNGNMF);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF, ::NEIGJHNJNFL DIHNFECKHMD)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&, ::NEIGJHNJNFL))((::PBYTE)hIl2Cpp + LOAHGHPLKPF_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF, DIHNFECKHMD);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOAHGHPLKPF_GDEOPIBNOIN_OFFSET))(this);
	}
};
