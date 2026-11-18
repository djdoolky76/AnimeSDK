#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
template <typename T> class KCMIFNGABDC_1;

#define JIOPHFNBDJK_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x198CDD30)
#define JIOPHFNBDJK_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x198CDA10)
#define JIOPHFNBDJK_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x198CE760)
#define JIOPHFNBDJK__CTOR_OFFSET UNITYSDK_OFFSET(0x198CE4A0)

inline static constexpr unsigned int JIOPHFNBDJK_TypeDefinitionIndex = 44531;

class JIOPHFNBDJK : public ::CGJEMKCKIJG
{
public:
	::KCMIFNGABDC_1<::System::Int32>* KOCGFPNEPJM; // 0x18
	::KCMIFNGABDC_1<::System::Int32>* EFFNOHHKAPP; // 0x20
	::HOFAIFGAHGJ* KLKEIADHCPG; // 0x28
	::CPABOPKIGAL* DGLPCINAMAC; // 0x30
	::CPABOPKIGAL* JAIGFKHCMPE; // 0x38
	::CPABOPKIGAL* MMFNFINOFPN; // 0x40
	::KCMIFNGABDC_1<::System::Int32>* BFPOCNCJFCP; // 0x48
	::KCMIFNGABDC_1<::System::Boolean>* CAICOFKDKJD; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIOPHFNBDJK__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIOPHFNBDJK_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + JIOPHFNBDJK_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIOPHFNBDJK_GDEOPIBNOIN_OFFSET))(this);
	}
};
