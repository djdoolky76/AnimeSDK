#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
template <typename T> class KCMIFNGABDC_1;

#define OKHEBLEAHMK_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0xFD8D340)
#define OKHEBLEAHMK_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0xFD8D200)
#define OKHEBLEAHMK_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0xFD8D710)
#define OKHEBLEAHMK__CTOR_OFFSET UNITYSDK_OFFSET(0xFD8D610)

inline static constexpr unsigned int OKHEBLEAHMK_TypeDefinitionIndex = 69088;

class OKHEBLEAHMK : public ::CGJEMKCKIJG
{
public:
	::HOFAIFGAHGJ* LOJEMALELOH; // 0x18
	::CPABOPKIGAL* LMDIMIIBPLD; // 0x20
	::KCMIFNGABDC_1<::System::Int32>* FJMNMKPGFIF; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKHEBLEAHMK__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKHEBLEAHMK_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + OKHEBLEAHMK_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKHEBLEAHMK_GDEOPIBNOIN_OFFSET))(this);
	}
};
