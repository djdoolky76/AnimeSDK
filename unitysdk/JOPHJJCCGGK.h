#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/LGCNEDCMPKM.h"

template <typename T> class AAMKEDEDHPD_1;
template <typename T> class KCMIFNGABDC_1;

#define JOPHJJCCGGK_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x1A48B4E0)
#define JOPHJJCCGGK_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x1A48B3A0)
#define JOPHJJCCGGK_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x1A48B710)
#define JOPHJJCCGGK__CTOR_OFFSET UNITYSDK_OFFSET(0x1A48B5F0)

inline static constexpr unsigned int JOPHJJCCGGK_TypeDefinitionIndex = 73849;

class JOPHJJCCGGK : public ::CGJEMKCKIJG
{
public:
	::KCMIFNGABDC_1<::UnityEngine::Vector3>* CJBFOAKEPFP; // 0x18
	::KCMIFNGABDC_1<::System::Single>* DIIIPFBEPKH; // 0x20
	::AAMKEDEDHPD_1<::UnityEngine::Vector3>* FDPMDEJANJH; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOPHJJCCGGK__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOPHJJCCGGK_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + JOPHJJCCGGK_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOPHJJCCGGK_GDEOPIBNOIN_OFFSET))(this);
	}
};
