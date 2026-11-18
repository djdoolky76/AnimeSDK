#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/LGCNEDCMPKM.h"

template <typename T> class AAMKEDEDHPD_1;
template <typename T> class KCMIFNGABDC_1;

#define NJFLPIELBCH_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x1AE26030)
#define NJFLPIELBCH_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x1AE25E80)
#define NJFLPIELBCH_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x1AE26340)
#define NJFLPIELBCH__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE261E0)

inline static constexpr unsigned int NJFLPIELBCH_TypeDefinitionIndex = 60959;

class NJFLPIELBCH : public ::CGJEMKCKIJG
{
public:
	::AAMKEDEDHPD_1<::System::Single>* GCNFJGFOPFG; // 0x18
	::KCMIFNGABDC_1<::UnityEngine::Vector3>* ADABBEEDEHP; // 0x20
	::AAMKEDEDHPD_1<::System::Single>* HPNPCPELJPE; // 0x28
	::KCMIFNGABDC_1<::UnityEngine::Vector3>* ICFDMNGFAMH; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJFLPIELBCH__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJFLPIELBCH_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + NJFLPIELBCH_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJFLPIELBCH_GDEOPIBNOIN_OFFSET))(this);
	}
};
