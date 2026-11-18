#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/LGCNEDCMPKM.h"

template <typename T> class AAMKEDEDHPD_1;
template <typename T> class KCMIFNGABDC_1;

#define GIHCFDAJIKI_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x179F32C0)
#define GIHCFDAJIKI_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x179F3110)
#define GIHCFDAJIKI_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x179F35E0)
#define GIHCFDAJIKI__CTOR_OFFSET UNITYSDK_OFFSET(0x179F3480)

inline static constexpr unsigned int GIHCFDAJIKI_TypeDefinitionIndex = 40016;

class GIHCFDAJIKI : public ::CGJEMKCKIJG
{
public:
	::KCMIFNGABDC_1<::System::Single>* PHMIDIMJCCM; // 0x18
	::AAMKEDEDHPD_1<::UnityEngine::Vector3>* FDPMDEJANJH; // 0x20
	::KCMIFNGABDC_1<::UnityEngine::Vector3>* FNBEIAJEJGD; // 0x28
	::KCMIFNGABDC_1<::UnityEngine::Vector3>* JHLGFPBDJIL; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIHCFDAJIKI__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIHCFDAJIKI_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + GIHCFDAJIKI_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIHCFDAJIKI_GDEOPIBNOIN_OFFSET))(this);
	}
};
