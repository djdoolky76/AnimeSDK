#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
template <typename T> class KCMIFNGABDC_1;

#define IHCABCLJJJH_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x1A466870)
#define IHCABCLJJJH_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x1A466730)
#define IHCABCLJJJH_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x1A466A90)
#define IHCABCLJJJH__CTOR_OFFSET UNITYSDK_OFFSET(0x1A466990)

inline static constexpr unsigned int IHCABCLJJJH_TypeDefinitionIndex = 45456;

class IHCABCLJJJH : public ::CGJEMKCKIJG
{
public:
	::KCMIFNGABDC_1<::System::Boolean>* CGDDAIOFHPN; // 0x18
	::CPABOPKIGAL* LMDIMIIBPLD; // 0x20
	::HOFAIFGAHGJ* LOJEMALELOH; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHCABCLJJJH__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHCABCLJJJH_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + IHCABCLJJJH_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHCABCLJJJH_GDEOPIBNOIN_OFFSET))(this);
	}
};
