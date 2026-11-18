#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MGNBLBCDFKP.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MMJOIDJIBKH_BJANDJKKNCD_OFFSET UNITYSDK_OFFSET(0x1302BDD0)
#define MMJOIDJIBKH_CDPANMHGFHE_OFFSET UNITYSDK_OFFSET(0x1302BE10)
#define MMJOIDJIBKH_COKNIICCODC_OFFSET UNITYSDK_OFFSET(0x1302BE20)
#define MMJOIDJIBKH_HPFGMFPNFCM_OFFSET UNITYSDK_OFFSET(0x1302C0C0)
#define MMJOIDJIBKH_KJMEPOCONJF_OFFSET UNITYSDK_OFFSET(0x1302BDC0)
#define MMJOIDJIBKH__CTOR_OFFSET UNITYSDK_OFFSET(0x1302BD30)

inline static constexpr unsigned int MMJOIDJIBKH_TypeDefinitionIndex = 73317;

class MMJOIDJIBKH : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::MGNBLBCDFKP, ::System::Double>* _JIIHAANPJOC_k__BackingField; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMJOIDJIBKH__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::MGNBLBCDFKP, ::System::Double>* KJMEPOCONJF()
	{
		return ((::System::Collections::Generic::Dictionary_2<::MGNBLBCDFKP, ::System::Double>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MMJOIDJIBKH_KJMEPOCONJF_OFFSET))(this);
	}

	::System::Void BJANDJKKNCD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMJOIDJIBKH_BJANDJKKNCD_OFFSET))(this);
	}

	::System::Void CDPANMHGFHE(::System::Collections::Generic::Dictionary_2<::MGNBLBCDFKP, ::System::Double>* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::MGNBLBCDFKP, ::System::Double>*))((::PBYTE)hIl2Cpp + MMJOIDJIBKH_CDPANMHGFHE_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void COKNIICCODC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMJOIDJIBKH_COKNIICCODC_OFFSET))(this);
	}

	::System::Void HPFGMFPNFCM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMJOIDJIBKH_HPFGMFPNFCM_OFFSET))(this);
	}
};
