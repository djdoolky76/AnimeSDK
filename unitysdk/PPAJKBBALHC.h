#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
namespace System { class String; }
template <typename T> class KCMIFNGABDC_1;

#define PPAJKBBALHC_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x1CB5D6D0)
#define PPAJKBBALHC_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x1CB5D590)
#define PPAJKBBALHC_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x1CB5D9E0)
#define PPAJKBBALHC__CTOR_OFFSET UNITYSDK_OFFSET(0x1CB5D8E0)

inline static constexpr unsigned int PPAJKBBALHC_TypeDefinitionIndex = 51390;

class PPAJKBBALHC : public ::CGJEMKCKIJG
{
public:
	::KCMIFNGABDC_1<::System::String*>* BHKFLHHEFCL; // 0x18
	::HOFAIFGAHGJ* LOJEMALELOH; // 0x20
	::CPABOPKIGAL* LMDIMIIBPLD; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPAJKBBALHC__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPAJKBBALHC_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + PPAJKBBALHC_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPAJKBBALHC_GDEOPIBNOIN_OFFSET))(this);
	}
};
