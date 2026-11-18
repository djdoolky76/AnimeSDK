#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
template <typename T> class KCMIFNGABDC_1;

#define AFKCLHBCCCI_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x144D6F30)
#define AFKCLHBCCCI_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x144D6D80)
#define AFKCLHBCCCI_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x144D75F0)
#define AFKCLHBCCCI__CTOR_OFFSET UNITYSDK_OFFSET(0x144D74B0)

inline static constexpr unsigned int AFKCLHBCCCI_TypeDefinitionIndex = 59938;

class AFKCLHBCCCI : public ::CGJEMKCKIJG
{
public:
	::KCMIFNGABDC_1<::System::Int32>* FJMNMKPGFIF; // 0x18
	::HOFAIFGAHGJ* LOJEMALELOH; // 0x20
	::CPABOPKIGAL* LMDIMIIBPLD; // 0x28
	::KCMIFNGABDC_1<::System::Int32>* ELAADEDGEIL; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFKCLHBCCCI__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFKCLHBCCCI_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + AFKCLHBCCCI_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFKCLHBCCCI_GDEOPIBNOIN_OFFSET))(this);
	}
};
