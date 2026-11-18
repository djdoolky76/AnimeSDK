#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BKCJAIFHNKF.h"
#include "unitysdk/LGCNEDCMPKM.h"
#include "unitysdk/NEIGJHNJNFL.h"

class KCBEGMCCKCA;
class MKBBPOFGLOF;
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class AAMKEDEDHPD_1;

#define OBLCMDLBLGA_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x15FBF280)
#define OBLCMDLBLGA_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x15FBF090)
#define OBLCMDLBLGA_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x15FBF550)
#define OBLCMDLBLGA_LHLLFJDCOOF_OFFSET UNITYSDK_OFFSET(0x15FBF1D0)
#define OBLCMDLBLGA__CTOR_OFFSET UNITYSDK_OFFSET(0x15FBF400)

inline static constexpr unsigned int OBLCMDLBLGA_TypeDefinitionIndex = 81568;

class OBLCMDLBLGA : public ::BKCJAIFHNKF
{
public:
	::AAMKEDEDHPD_1<::System::Int32>* MODKIKCLIGJ; // 0x18
	::MKBBPOFGLOF* MMFNFINOFPN; // 0x20
	::AAMKEDEDHPD_1<::System::Collections::Generic::List_1<::System::Int32>*>* NGCHMJBMLAI; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBLCMDLBLGA__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBLCMDLBLGA_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void LHLLFJDCOOF(::KCBEGMCCKCA* MHPNGBGGMMN, ::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::KCBEGMCCKCA*, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + OBLCMDLBLGA_LHLLFJDCOOF_OFFSET))(this, MHPNGBGGMMN, BKBGPKNGNMF);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF, ::NEIGJHNJNFL DIHNFECKHMD)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&, ::NEIGJHNJNFL))((::PBYTE)hIl2Cpp + OBLCMDLBLGA_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF, DIHNFECKHMD);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBLCMDLBLGA_GDEOPIBNOIN_OFFSET))(this);
	}
};
