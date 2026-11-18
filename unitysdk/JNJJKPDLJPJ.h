#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

template <typename T> class AAMKEDEDHPD_1;

#define JNJJKPDLJPJ_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x19465B80)
#define JNJJKPDLJPJ_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x19465AF0)
#define JNJJKPDLJPJ_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x19465E20)
#define JNJJKPDLJPJ__CTOR_OFFSET UNITYSDK_OFFSET(0x19465D80)

inline static constexpr unsigned int JNJJKPDLJPJ_TypeDefinitionIndex = 82244;

class JNJJKPDLJPJ : public ::CGJEMKCKIJG
{
public:
	::AAMKEDEDHPD_1<::System::Int32>* LNCLBIBKAAF; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNJJKPDLJPJ__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNJJKPDLJPJ_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + JNJJKPDLJPJ_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNJJKPDLJPJ_GDEOPIBNOIN_OFFSET))(this);
	}
};
