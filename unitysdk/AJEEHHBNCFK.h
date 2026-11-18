#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/LGCNEDCMPKM.h"

template <typename T> class AAMKEDEDHPD_1;

#define AJEEHHBNCFK_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x144E1FE0)
#define AJEEHHBNCFK_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x144E1F50)
#define AJEEHHBNCFK_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x144E22A0)
#define AJEEHHBNCFK__CTOR_OFFSET UNITYSDK_OFFSET(0x144E2200)

inline static constexpr unsigned int AJEEHHBNCFK_TypeDefinitionIndex = 50823;

class AJEEHHBNCFK : public ::CGJEMKCKIJG
{
public:
	::AAMKEDEDHPD_1<::UnityEngine::Vector3>* EBDHCPALMLP; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJEEHHBNCFK__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJEEHHBNCFK_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + AJEEHHBNCFK_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJEEHHBNCFK_GDEOPIBNOIN_OFFSET))(this);
	}
};
