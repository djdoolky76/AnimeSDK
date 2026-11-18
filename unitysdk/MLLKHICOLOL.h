#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BKCJAIFHNKF.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/LGCNEDCMPKM.h"
#include "unitysdk/NEIGJHNJNFL.h"

class KCBEGMCCKCA;
class MKBBPOFGLOF;
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class AAMKEDEDHPD_1;
template <typename T> class KCMIFNGABDC_1;

#define MLLKHICOLOL_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x11A1E490)
#define MLLKHICOLOL_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x11A1E230)
#define MLLKHICOLOL_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x11A1E950)
#define MLLKHICOLOL_IGJIGJCLNKJ_OFFSET UNITYSDK_OFFSET(0x11A1E6C0)
#define MLLKHICOLOL_LHLLFJDCOOF_OFFSET UNITYSDK_OFFSET(0x11A1E3E0)
#define MLLKHICOLOL__CTOR_OFFSET UNITYSDK_OFFSET(0x11A1E7D0)

inline static constexpr unsigned int MLLKHICOLOL_TypeDefinitionIndex = 44096;

class MLLKHICOLOL : public ::BKCJAIFHNKF
{
public:
	::AAMKEDEDHPD_1<::System::Int32>* ELAADEDGEIL; // 0x18
	::AAMKEDEDHPD_1<::Foundation::ViewObject::ViewObjectHandle>* EJLOPJOMHHN; // 0x20
	::MKBBPOFGLOF* MMFNFINOFPN; // 0x28
	::KCMIFNGABDC_1<::System::Collections::Generic::List_1<::System::Int32>*>* JLACDANBCAN; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLLKHICOLOL__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLLKHICOLOL_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void LHLLFJDCOOF(::KCBEGMCCKCA* MHPNGBGGMMN, ::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::KCBEGMCCKCA*, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + MLLKHICOLOL_LHLLFJDCOOF_OFFSET))(this, MHPNGBGGMMN, BKBGPKNGNMF);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF, ::NEIGJHNJNFL DIHNFECKHMD)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&, ::NEIGJHNJNFL))((::PBYTE)hIl2Cpp + MLLKHICOLOL_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF, DIHNFECKHMD);
	}

	::System::Void IGJIGJCLNKJ(::LGCNEDCMPKM& BKBGPKNGNMF, ::System::UInt32 NKIPEHLEECP, ::Foundation::ViewObject::ViewObjectHandle DBMEFDJPDCB)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&, ::System::UInt32, ::Foundation::ViewObject::ViewObjectHandle))((::PBYTE)hIl2Cpp + MLLKHICOLOL_IGJIGJCLNKJ_OFFSET))(this, BKBGPKNGNMF, NKIPEHLEECP, DBMEFDJPDCB);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLLKHICOLOL_GDEOPIBNOIN_OFFSET))(this);
	}
};
