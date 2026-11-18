#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BKCJAIFHNKF.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/LGCNEDCMPKM.h"
#include "unitysdk/NEIGJHNJNFL.h"

class KCBEGMCCKCA;
class MKBBPOFGLOF;
template <typename T> class AAMKEDEDHPD_1;

#define NNPBOINEHGN_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x1376EBC0)
#define NNPBOINEHGN_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x1376EA30)
#define NNPBOINEHGN_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x1376EFD0)
#define NNPBOINEHGN_LHLLFJDCOOF_OFFSET UNITYSDK_OFFSET(0x1376EB10)
#define NNPBOINEHGN__CTOR_OFFSET UNITYSDK_OFFSET(0x1376EED0)

inline static constexpr unsigned int NNPBOINEHGN_TypeDefinitionIndex = 47083;

class NNPBOINEHGN : public ::BKCJAIFHNKF
{
public:
	::AAMKEDEDHPD_1<::UnityEngine::Vector3>* OLLFNNGJCFN; // 0x18
	::MKBBPOFGLOF* LMDIMIIBPLD; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNPBOINEHGN__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNPBOINEHGN_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void LHLLFJDCOOF(::KCBEGMCCKCA* MHPNGBGGMMN, ::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::KCBEGMCCKCA*, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + NNPBOINEHGN_LHLLFJDCOOF_OFFSET))(this, MHPNGBGGMMN, BKBGPKNGNMF);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF, ::NEIGJHNJNFL DIHNFECKHMD)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&, ::NEIGJHNJNFL))((::PBYTE)hIl2Cpp + NNPBOINEHGN_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF, DIHNFECKHMD);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNPBOINEHGN_GDEOPIBNOIN_OFFSET))(this);
	}
};
