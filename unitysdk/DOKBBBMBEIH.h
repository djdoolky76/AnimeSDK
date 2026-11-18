#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/LGCNEDCMPKM.h"

template <typename T> class AAMKEDEDHPD_1;
template <typename T> class KCMIFNGABDC_1;

#define DOKBBBMBEIH_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x1697B7A0)
#define DOKBBBMBEIH_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x1697B5F0)
#define DOKBBBMBEIH_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x1697BA40)
#define DOKBBBMBEIH__CTOR_OFFSET UNITYSDK_OFFSET(0x1697B8E0)

inline static constexpr unsigned int DOKBBBMBEIH_TypeDefinitionIndex = 82619;

class DOKBBBMBEIH : public ::CGJEMKCKIJG
{
public:
	::KCMIFNGABDC_1<::System::Single>* NKADHAGEBKM; // 0x18
	::KCMIFNGABDC_1<::System::Single>* FCEJJJPPLJN; // 0x20
	::AAMKEDEDHPD_1<::UnityEngine::Vector3>* FDPMDEJANJH; // 0x28
	::KCMIFNGABDC_1<::System::Single>* NMDKIJDPBHM; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOKBBBMBEIH__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOKBBBMBEIH_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + DOKBBBMBEIH_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOKBBBMBEIH_GDEOPIBNOIN_OFFSET))(this);
	}
};
