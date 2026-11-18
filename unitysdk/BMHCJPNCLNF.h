#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
class MKBBPOFGLOF;
template <typename T> class KCMIFNGABDC_1;

#define BMHCJPNCLNF_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x128B3500)
#define BMHCJPNCLNF_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x128B3350)
#define BMHCJPNCLNF_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x128B3A60)
#define BMHCJPNCLNF__CTOR_OFFSET UNITYSDK_OFFSET(0x128B38D0)

inline static constexpr unsigned int BMHCJPNCLNF_TypeDefinitionIndex = 49874;

class BMHCJPNCLNF : public ::CGJEMKCKIJG
{
public:
	::KCMIFNGABDC_1<::System::Int32>* OHGBEGOCNDC; // 0x18
	::HOFAIFGAHGJ* LOJEMALELOH; // 0x20
	::CPABOPKIGAL* LMDIMIIBPLD; // 0x28
	::MKBBPOFGLOF* EDALDICDKFC; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMHCJPNCLNF__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMHCJPNCLNF_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + BMHCJPNCLNF_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMHCJPNCLNF_GDEOPIBNOIN_OFFSET))(this);
	}
};
