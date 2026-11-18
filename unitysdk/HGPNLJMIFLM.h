#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class EBNPOEHOAGD;
template <typename T> class AAMKEDEDHPD_1;

#define HGPNLJMIFLM_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x140A65E0)
#define HGPNLJMIFLM_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x140A6510)
#define HGPNLJMIFLM_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x140A67F0)
#define HGPNLJMIFLM__CTOR_OFFSET UNITYSDK_OFFSET(0x140A6750)

inline static constexpr unsigned int HGPNLJMIFLM_TypeDefinitionIndex = 58260;

class HGPNLJMIFLM : public ::CGJEMKCKIJG
{
public:
	::AAMKEDEDHPD_1<::System::Int32>* FDPMDEJANJH; // 0x18
	::EBNPOEHOAGD* ACDKKCINLON; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGPNLJMIFLM__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGPNLJMIFLM_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + HGPNLJMIFLM_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGPNLJMIFLM_GDEOPIBNOIN_OFFSET))(this);
	}
};
