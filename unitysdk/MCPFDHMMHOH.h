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

#define MCPFDHMMHOH_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x12D50C80)
#define MCPFDHMMHOH_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x12D50970)
#define MCPFDHMMHOH_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x12D51440)
#define MCPFDHMMHOH_LHLLFJDCOOF_OFFSET UNITYSDK_OFFSET(0x12D50BD0)
#define MCPFDHMMHOH__CTOR_OFFSET UNITYSDK_OFFSET(0x12D51240)

inline static constexpr unsigned int MCPFDHMMHOH_TypeDefinitionIndex = 85847;

class MCPFDHMMHOH : public ::BKCJAIFHNKF
{
public:
	::AAMKEDEDHPD_1<::System::String*>* NNGAEMOAOGM; // 0x18
	::MKBBPOFGLOF* MMFNFINOFPN; // 0x20
	::KCMIFNGABDC_1<::System::Int32>* CPLAFHAFKBN; // 0x28
	::KCMIFNGABDC_1<::System::Int32>* KDHJONFMILC; // 0x30
	::KCMIFNGABDC_1<::System::String*>* EOCKEJDCCGL; // 0x38
	::AAMKEDEDHPD_1<::System::Int32>* JCICECIDGFD; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCPFDHMMHOH__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCPFDHMMHOH_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void LHLLFJDCOOF(::KCBEGMCCKCA* MHPNGBGGMMN, ::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::KCBEGMCCKCA*, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + MCPFDHMMHOH_LHLLFJDCOOF_OFFSET))(this, MHPNGBGGMMN, BKBGPKNGNMF);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF, ::NEIGJHNJNFL DIHNFECKHMD)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&, ::NEIGJHNJNFL))((::PBYTE)hIl2Cpp + MCPFDHMMHOH_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF, DIHNFECKHMD);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCPFDHMMHOH_GDEOPIBNOIN_OFFSET))(this);
	}
};
