#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
template <typename T> class KCMIFNGABDC_1;

#define IPBLOOJJHBI_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x160C2F80)
#define IPBLOOJJHBI_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x160C2DD0)
#define IPBLOOJJHBI_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x160C3290)
#define IPBLOOJJHBI__CTOR_OFFSET UNITYSDK_OFFSET(0x160C3150)

inline static constexpr unsigned int IPBLOOJJHBI_TypeDefinitionIndex = 84417;

class IPBLOOJJHBI : public ::CGJEMKCKIJG
{
public:
	::CPABOPKIGAL* LMDIMIIBPLD; // 0x18
	::KCMIFNGABDC_1<::System::Int32>* GOFMMIFLMPN; // 0x20
	::HOFAIFGAHGJ* LOJEMALELOH; // 0x28
	::KCMIFNGABDC_1<::System::Int32>* JPIHKNPJKPH; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPBLOOJJHBI__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPBLOOJJHBI_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + IPBLOOJJHBI_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPBLOOJJHBI_GDEOPIBNOIN_OFFSET))(this);
	}
};
