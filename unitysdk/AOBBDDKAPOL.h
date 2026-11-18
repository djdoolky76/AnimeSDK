#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

template <typename T> class AAMKEDEDHPD_1;

#define AOBBDDKAPOL_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0xF777830)
#define AOBBDDKAPOL_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0xF777750)
#define AOBBDDKAPOL_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0xF777AB0)
#define AOBBDDKAPOL__CTOR_OFFSET UNITYSDK_OFFSET(0xF7779C0)

inline static constexpr unsigned int AOBBDDKAPOL_TypeDefinitionIndex = 77300;

class AOBBDDKAPOL : public ::CGJEMKCKIJG
{
public:
	::AAMKEDEDHPD_1<::System::Int32>* FOADNBFNDEL; // 0x18
	::AAMKEDEDHPD_1<::System::Int32>* LHHMLKFJNED; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOBBDDKAPOL__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOBBDDKAPOL_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + AOBBDDKAPOL_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOBBDDKAPOL_GDEOPIBNOIN_OFFSET))(this);
	}
};
