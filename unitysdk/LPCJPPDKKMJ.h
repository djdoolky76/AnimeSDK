#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BKCJAIFHNKF.h"
#include "unitysdk/LGCNEDCMPKM.h"
#include "unitysdk/NEIGJHNJNFL.h"

class KCBEGMCCKCA;
class MKBBPOFGLOF;
namespace System { class String; }
template <typename T> class AAMKEDEDHPD_1;

#define LPCJPPDKKMJ_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x125A3BE0)
#define LPCJPPDKKMJ_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x125A3A50)
#define LPCJPPDKKMJ_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x125A3E40)
#define LPCJPPDKKMJ_LHLLFJDCOOF_OFFSET UNITYSDK_OFFSET(0x125A3B30)
#define LPCJPPDKKMJ__CTOR_OFFSET UNITYSDK_OFFSET(0x125A3D40)

inline static constexpr unsigned int LPCJPPDKKMJ_TypeDefinitionIndex = 80497;

class LPCJPPDKKMJ : public ::BKCJAIFHNKF
{
public:
	::MKBBPOFGLOF* LMDIMIIBPLD; // 0x18
	::AAMKEDEDHPD_1<::System::String*>* APFCBJJMMFE; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPCJPPDKKMJ__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPCJPPDKKMJ_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void LHLLFJDCOOF(::KCBEGMCCKCA* MHPNGBGGMMN, ::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::KCBEGMCCKCA*, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + LPCJPPDKKMJ_LHLLFJDCOOF_OFFSET))(this, MHPNGBGGMMN, BKBGPKNGNMF);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF, ::NEIGJHNJNFL DIHNFECKHMD)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&, ::NEIGJHNJNFL))((::PBYTE)hIl2Cpp + LPCJPPDKKMJ_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF, DIHNFECKHMD);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPCJPPDKKMJ_GDEOPIBNOIN_OFFSET))(this);
	}
};
