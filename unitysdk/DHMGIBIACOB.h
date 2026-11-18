#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/LGCNEDCMPKM.h"

template <typename T> class AAMKEDEDHPD_1;
template <typename T> class KCMIFNGABDC_1;

#define DHMGIBIACOB_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x16BA0C00)
#define DHMGIBIACOB_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x16BA0AB0)
#define DHMGIBIACOB_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x16BA0E50)
#define DHMGIBIACOB__CTOR_OFFSET UNITYSDK_OFFSET(0x16BA0D20)

inline static constexpr unsigned int DHMGIBIACOB_TypeDefinitionIndex = 83919;

class DHMGIBIACOB : public ::MHMFINLCNFN
{
public:
	::AAMKEDEDHPD_1<::UnityEngine::Vector3>* HGNHKDJDFME; // 0x28
	::KCMIFNGABDC_1<::UnityEngine::Vector3>* CJBFOAKEPFP; // 0x30
	::KCMIFNGABDC_1<::System::Single>* DIIIPFBEPKH; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHMGIBIACOB__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHMGIBIACOB_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + DHMGIBIACOB_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHMGIBIACOB_GDEOPIBNOIN_OFFSET))(this);
	}
};
