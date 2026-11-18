#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/LGCNEDCMPKM.h"

template <typename T> class AAMKEDEDHPD_1;
template <typename T> class KCMIFNGABDC_1;

#define JPHHJODHAJB_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x1947BFC0)
#define JPHHJODHAJB_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x1947BE80)
#define JPHHJODHAJB_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x1947C210)
#define JPHHJODHAJB__CTOR_OFFSET UNITYSDK_OFFSET(0x1947C0F0)

inline static constexpr unsigned int JPHHJODHAJB_TypeDefinitionIndex = 89531;

class JPHHJODHAJB : public ::CGJEMKCKIJG
{
public:
	::AAMKEDEDHPD_1<::UnityEngine::Vector3>* FDPMDEJANJH; // 0x18
	::KCMIFNGABDC_1<::UnityEngine::Vector3>* ICGBACLFMIL; // 0x20
	::KCMIFNGABDC_1<::UnityEngine::Vector3>* MEINJKFJIGE; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPHHJODHAJB__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPHHJODHAJB_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + JPHHJODHAJB_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPHHJODHAJB_GDEOPIBNOIN_OFFSET))(this);
	}
};
