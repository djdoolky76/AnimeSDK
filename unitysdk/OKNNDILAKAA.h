#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

template <typename T> class AAMKEDEDHPD_1;

#define OKNNDILAKAA_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x1844BE20)
#define OKNNDILAKAA_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x1844BC10)
#define OKNNDILAKAA_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x1844C230)
#define OKNNDILAKAA__CTOR_OFFSET UNITYSDK_OFFSET(0x1844C090)

inline static constexpr unsigned int OKNNDILAKAA_TypeDefinitionIndex = 85221;

class OKNNDILAKAA : public ::MHMFINLCNFN
{
public:
	::AAMKEDEDHPD_1<::System::Boolean>* PJDNIJBNKKD; // 0x28
	::AAMKEDEDHPD_1<::System::Boolean>* KAMMBDLBDDH; // 0x30
	::AAMKEDEDHPD_1<::System::Boolean>* ALHFNIEIFKE; // 0x38
	::AAMKEDEDHPD_1<::System::Boolean>* LCEOMOPJFPL; // 0x40
	::AAMKEDEDHPD_1<::System::Boolean>* EINKGNIIBHG; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKNNDILAKAA__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKNNDILAKAA_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + OKNNDILAKAA_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKNNDILAKAA_GDEOPIBNOIN_OFFSET))(this);
	}
};
