#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
template <typename T> class KCMIFNGABDC_1;

#define CAGKECCOJHN_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x1693B830)
#define CAGKECCOJHN_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x1693B680)
#define CAGKECCOJHN_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x1693BCB0)
#define CAGKECCOJHN__CTOR_OFFSET UNITYSDK_OFFSET(0x1693BB70)

inline static constexpr unsigned int CAGKECCOJHN_TypeDefinitionIndex = 58846;

class CAGKECCOJHN : public ::CGJEMKCKIJG
{
public:
	::KCMIFNGABDC_1<::System::Single>* IHPPGEIHMPL; // 0x18
	::HOFAIFGAHGJ* KLKEIADHCPG; // 0x20
	::KCMIFNGABDC_1<::System::Single>* NLLBANODGHC; // 0x28
	::CPABOPKIGAL* MMFNFINOFPN; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAGKECCOJHN__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAGKECCOJHN_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + CAGKECCOJHN_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAGKECCOJHN_GDEOPIBNOIN_OFFSET))(this);
	}
};
