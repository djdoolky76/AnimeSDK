#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
template <typename T> class AAMKEDEDHPD_1;
template <typename T> class KCMIFNGABDC_1;

#define GNPDHNNANAE_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x13D6E500)
#define GNPDHNNANAE_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x13D6E350)
#define GNPDHNNANAE_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x13D6E890)
#define GNPDHNNANAE__CTOR_OFFSET UNITYSDK_OFFSET(0x13D6E750)

inline static constexpr unsigned int GNPDHNNANAE_TypeDefinitionIndex = 61932;

class GNPDHNNANAE : public ::CGJEMKCKIJG
{
public:
	::AAMKEDEDHPD_1<::UnityEngine::Vector3>* CJHGOOPHALO; // 0x18
	::HOFAIFGAHGJ* LOJEMALELOH; // 0x20
	::KCMIFNGABDC_1<::UnityEngine::Vector3>* IAIGNDIOBAC; // 0x28
	::CPABOPKIGAL* LMDIMIIBPLD; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNPDHNNANAE__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNPDHNNANAE_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + GNPDHNNANAE_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNPDHNNANAE_GDEOPIBNOIN_OFFSET))(this);
	}
};
