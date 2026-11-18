#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
template <typename T> class AAMKEDEDHPD_1;

#define DKLHEGNIDHG_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x18347E70)
#define DKLHEGNIDHG_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x18347CC0)
#define DKLHEGNIDHG_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x183483C0)
#define DKLHEGNIDHG__CTOR_OFFSET UNITYSDK_OFFSET(0x18348280)

inline static constexpr unsigned int DKLHEGNIDHG_TypeDefinitionIndex = 56487;

class DKLHEGNIDHG : public ::CGJEMKCKIJG
{
public:
	::CPABOPKIGAL* LMDIMIIBPLD; // 0x18
	::AAMKEDEDHPD_1<::UnityEngine::Vector3>* AFDJFBKFBEE; // 0x20
	::AAMKEDEDHPD_1<::UnityEngine::Vector3>* ANMLNKJFGHM; // 0x28
	::HOFAIFGAHGJ* LOJEMALELOH; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKLHEGNIDHG__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKLHEGNIDHG_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + DKLHEGNIDHG_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKLHEGNIDHG_GDEOPIBNOIN_OFFSET))(this);
	}
};
