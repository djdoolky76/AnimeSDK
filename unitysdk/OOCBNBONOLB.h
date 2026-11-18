#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
template <typename T> class AAMKEDEDHPD_1;
template <typename T> class KCMIFNGABDC_1;

#define OOCBNBONOLB_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x16F8A1A0)
#define OOCBNBONOLB_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x16F89FF0)
#define OOCBNBONOLB_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x16F8A450)
#define OOCBNBONOLB__CTOR_OFFSET UNITYSDK_OFFSET(0x16F8A310)

inline static constexpr unsigned int OOCBNBONOLB_TypeDefinitionIndex = 57572;

class OOCBNBONOLB : public ::CGJEMKCKIJG
{
public:
	::KCMIFNGABDC_1<::UnityEngine::Vector3>* KFPMNPHKKFK; // 0x18
	::CPABOPKIGAL* LMDIMIIBPLD; // 0x20
	::AAMKEDEDHPD_1<::UnityEngine::Vector3>* OBPOGGNBKPE; // 0x28
	::HOFAIFGAHGJ* LOJEMALELOH; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOCBNBONOLB__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOCBNBONOLB_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + OOCBNBONOLB_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOCBNBONOLB_GDEOPIBNOIN_OFFSET))(this);
	}
};
