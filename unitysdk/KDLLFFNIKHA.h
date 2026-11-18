#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/LGCNEDCMPKM.h"

template <typename T> class AAMKEDEDHPD_1;
template <typename T> class KCMIFNGABDC_1;

#define KDLLFFNIKHA_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x178F91A0)
#define KDLLFFNIKHA_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x178F9060)
#define KDLLFFNIKHA_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x178F93F0)
#define KDLLFFNIKHA__CTOR_OFFSET UNITYSDK_OFFSET(0x178F92D0)

inline static constexpr unsigned int KDLLFFNIKHA_TypeDefinitionIndex = 42011;

class KDLLFFNIKHA : public ::CGJEMKCKIJG
{
public:
	::KCMIFNGABDC_1<::UnityEngine::Vector3>* MEINJKFJIGE; // 0x18
	::KCMIFNGABDC_1<::UnityEngine::Vector3>* ICGBACLFMIL; // 0x20
	::AAMKEDEDHPD_1<::UnityEngine::Vector3>* FDPMDEJANJH; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDLLFFNIKHA__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDLLFFNIKHA_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + KDLLFFNIKHA_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDLLFFNIKHA_GDEOPIBNOIN_OFFSET))(this);
	}
};
