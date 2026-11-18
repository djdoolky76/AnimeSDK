#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

namespace System { class String; }
template <typename T> class AAMKEDEDHPD_1;
template <typename T> class KCMIFNGABDC_1;

#define DOKLNJPNFOE_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x132A6220)
#define DOKLNJPNFOE_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x132A60D0)
#define DOKLNJPNFOE_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x132A66D0)
#define DOKLNJPNFOE__CTOR_OFFSET UNITYSDK_OFFSET(0x132A65A0)

inline static constexpr unsigned int DOKLNJPNFOE_TypeDefinitionIndex = 78481;

class DOKLNJPNFOE : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::System::String*>* FMMECCNEOCO; // 0x28
	::AAMKEDEDHPD_1<::System::Single>* CDKDDDKKPPE; // 0x30
	::AAMKEDEDHPD_1<::System::Single>* MOILJAKPMHN; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOKLNJPNFOE__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOKLNJPNFOE_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + DOKLNJPNFOE_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOKLNJPNFOE_GDEOPIBNOIN_OFFSET))(this);
	}
};
