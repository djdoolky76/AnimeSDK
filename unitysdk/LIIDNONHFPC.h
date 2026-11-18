#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/LGCNEDCMPKM.h"

template <typename T> class AAMKEDEDHPD_1;

#define LIIDNONHFPC_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x12567360)
#define LIIDNONHFPC_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x125672D0)
#define LIIDNONHFPC_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x12567650)
#define LIIDNONHFPC__CTOR_OFFSET UNITYSDK_OFFSET(0x125675B0)

inline static constexpr unsigned int LIIDNONHFPC_TypeDefinitionIndex = 65706;

class LIIDNONHFPC : public ::CGJEMKCKIJG
{
public:
	::AAMKEDEDHPD_1<::UnityEngine::Vector3>* FDPMDEJANJH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIIDNONHFPC__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIIDNONHFPC_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + LIIDNONHFPC_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIIDNONHFPC_GDEOPIBNOIN_OFFSET))(this);
	}
};
