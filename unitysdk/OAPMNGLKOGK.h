#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BKCJAIFHNKF.h"
#include "unitysdk/LGCNEDCMPKM.h"
#include "unitysdk/NEIGJHNJNFL.h"

class CPABOPKIGAL;
class KCBEGMCCKCA;
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class KCMIFNGABDC_1;

#define OAPMNGLKOGK_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x1291B220)
#define OAPMNGLKOGK_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x1291AF60)
#define OAPMNGLKOGK_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x1291B800)
#define OAPMNGLKOGK_LBNCMOHHOPB_OFFSET UNITYSDK_OFFSET(0x1291B310)
#define OAPMNGLKOGK_LHLLFJDCOOF_OFFSET UNITYSDK_OFFSET(0x1291B110)
#define OAPMNGLKOGK__CTOR_OFFSET UNITYSDK_OFFSET(0x1291B630)

inline static constexpr unsigned int OAPMNGLKOGK_TypeDefinitionIndex = 80942;

class OAPMNGLKOGK : public ::BKCJAIFHNKF
{
public:
	::KCMIFNGABDC_1<::System::Int32>* MDIBPONEICF; // 0x18
	::KCMIFNGABDC_1<::System::Collections::Generic::List_1<::System::Int32>*>* LPKHFBGOJKF; // 0x20
	::CPABOPKIGAL* EGCCIODCJIA; // 0x28
	::CPABOPKIGAL* EKJHPHAOJIK; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OAPMNGLKOGK__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OAPMNGLKOGK_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void LHLLFJDCOOF(::KCBEGMCCKCA* MHPNGBGGMMN, ::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::KCBEGMCCKCA*, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + OAPMNGLKOGK_LHLLFJDCOOF_OFFSET))(this, MHPNGBGGMMN, BKBGPKNGNMF);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF, ::NEIGJHNJNFL DIHNFECKHMD)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&, ::NEIGJHNJNFL))((::PBYTE)hIl2Cpp + OAPMNGLKOGK_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF, DIHNFECKHMD);
	}

	::System::Boolean LBNCMOHHOPB(::LGCNEDCMPKM& BKBGPKNGNMF, ::System::Int32 OLLJMIFJLFH)
	{
		return ((::System::Boolean(*)(::PVOID, ::LGCNEDCMPKM&, ::System::Int32))((::PBYTE)hIl2Cpp + OAPMNGLKOGK_LBNCMOHHOPB_OFFSET))(this, BKBGPKNGNMF, OLLJMIFJLFH);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OAPMNGLKOGK_GDEOPIBNOIN_OFFSET))(this);
	}
};
