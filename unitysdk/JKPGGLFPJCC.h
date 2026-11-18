#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/LGCNEDCMPKM.h"

template <typename T> class AAMKEDEDHPD_1;
template <typename T> class KCMIFNGABDC_1;

#define JKPGGLFPJCC_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x13C2EE70)
#define JKPGGLFPJCC_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x13C2ECC0)
#define JKPGGLFPJCC_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x13C2F0F0)
#define JKPGGLFPJCC__CTOR_OFFSET UNITYSDK_OFFSET(0x13C2EF90)

inline static constexpr unsigned int JKPGGLFPJCC_TypeDefinitionIndex = 85829;

class JKPGGLFPJCC : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::UnityEngine::Vector3>* ABPHFHIDHCO; // 0x28
	::AAMKEDEDHPD_1<::System::Single>* FCEJJJPPLJN; // 0x30
	::AAMKEDEDHPD_1<::System::Single>* NMDKIJDPBHM; // 0x38
	::AAMKEDEDHPD_1<::System::Single>* NKADHAGEBKM; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKPGGLFPJCC__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKPGGLFPJCC_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + JKPGGLFPJCC_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKPGGLFPJCC_GDEOPIBNOIN_OFFSET))(this);
	}
};
