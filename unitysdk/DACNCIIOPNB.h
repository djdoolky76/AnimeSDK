#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/LGCNEDCMPKM.h"
#include "unitysdk/OBBFELCMLJM.h"

template <typename T> class KCMIFNGABDC_1;

#define DACNCIIOPNB_ELIDKAAHODP_OFFSET UNITYSDK_OFFSET(0x19A2D400)
#define DACNCIIOPNB_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x19A2D0F0)
#define DACNCIIOPNB_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x19A2CEE0)
#define DACNCIIOPNB_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x19A2D3F0)
#define DACNCIIOPNB_NHMCOMKOBBP_OFFSET UNITYSDK_OFFSET(0x19A2D160)
#define DACNCIIOPNB__CTOR_OFFSET UNITYSDK_OFFSET(0x19A2D250)

inline static constexpr unsigned int DACNCIIOPNB_TypeDefinitionIndex = 62031;

class DACNCIIOPNB : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::UnityEngine::Vector3>* ONDOABKFMKG; // 0x28
	::KCMIFNGABDC_1<::UnityEngine::Vector3>* MAMPHOBNANN; // 0x30
	::KCMIFNGABDC_1<::UnityEngine::Vector3>* NDJKJFFLABC; // 0x38
	::KCMIFNGABDC_1<::System::Boolean>* MKFINBEAKPJ; // 0x40
	::KCMIFNGABDC_1<::UnityEngine::Vector3>* JFAFNCAJEEF; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DACNCIIOPNB__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DACNCIIOPNB_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + DACNCIIOPNB_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DACNCIIOPNB_GDEOPIBNOIN_OFFSET))(this);
	}

	::OBBFELCMLJM ELIDKAAHODP(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::OBBFELCMLJM(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + DACNCIIOPNB_ELIDKAAHODP_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void NHMCOMKOBBP(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + DACNCIIOPNB_NHMCOMKOBBP_OFFSET))(this, BKBGPKNGNMF);
	}
};
