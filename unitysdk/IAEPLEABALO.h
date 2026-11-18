#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BKCJAIFHNKF.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/LGCNEDCMPKM.h"
#include "unitysdk/NEIGJHNJNFL.h"

class CPABOPKIGAL;
class KCBEGMCCKCA;
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class AAMKEDEDHPD_1;

#define IAEPLEABALO_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x160894B0)
#define IAEPLEABALO_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x160891A0)
#define IAEPLEABALO_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x1608A030)
#define IAEPLEABALO_LHLLFJDCOOF_OFFSET UNITYSDK_OFFSET(0x16089400)
#define IAEPLEABALO__CTOR_OFFSET UNITYSDK_OFFSET(0x16089E30)

inline static constexpr unsigned int IAEPLEABALO_TypeDefinitionIndex = 60356;

class IAEPLEABALO : public ::BKCJAIFHNKF
{
public:
	::AAMKEDEDHPD_1<::System::Int32>* PIIDJDMCMDE; // 0x18
	::AAMKEDEDHPD_1<::System::Collections::Generic::List_1<::System::Object*>*>* CPJPCCOCBPL; // 0x20
	::AAMKEDEDHPD_1<::System::Int32>* MEPIJGIEJCP; // 0x28
	::AAMKEDEDHPD_1<::Foundation::ViewObject::ViewObjectHandle>* NMEJEACBGBP; // 0x30
	::AAMKEDEDHPD_1<::System::Int32>* OIJFBFAKGLD; // 0x38
	::CPABOPKIGAL* MMFNFINOFPN; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAEPLEABALO__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAEPLEABALO_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void LHLLFJDCOOF(::KCBEGMCCKCA* MHPNGBGGMMN, ::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::KCBEGMCCKCA*, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + IAEPLEABALO_LHLLFJDCOOF_OFFSET))(this, MHPNGBGGMMN, BKBGPKNGNMF);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF, ::NEIGJHNJNFL DIHNFECKHMD)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&, ::NEIGJHNJNFL))((::PBYTE)hIl2Cpp + IAEPLEABALO_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF, DIHNFECKHMD);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAEPLEABALO_GDEOPIBNOIN_OFFSET))(this);
	}
};
