#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/LGCNEDCMPKM.h"

template <typename T> class AAMKEDEDHPD_1;
template <typename T> class KCMIFNGABDC_1;

#define MMBDPNCLMJC_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x174A7CF0)
#define MMBDPNCLMJC_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x174A7BB0)
#define MMBDPNCLMJC_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x174A7F70)
#define MMBDPNCLMJC__CTOR_OFFSET UNITYSDK_OFFSET(0x174A7E50)

inline static constexpr unsigned int MMBDPNCLMJC_TypeDefinitionIndex = 48831;

class MMBDPNCLMJC : public ::CGJEMKCKIJG
{
public:
	::KCMIFNGABDC_1<::UnityEngine::Vector3>* ICGBACLFMIL; // 0x18
	::AAMKEDEDHPD_1<::UnityEngine::Vector3>* FDPMDEJANJH; // 0x20
	::KCMIFNGABDC_1<::UnityEngine::Vector3>* MEINJKFJIGE; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMBDPNCLMJC__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMBDPNCLMJC_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + MMBDPNCLMJC_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMBDPNCLMJC_GDEOPIBNOIN_OFFSET))(this);
	}
};
