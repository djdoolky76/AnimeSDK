#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;

#define EIJPAPBGINH_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0xFE15AA0)
#define EIJPAPBGINH_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0xFE159D0)
#define EIJPAPBGINH_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0xFE15D50)
#define EIJPAPBGINH__CTOR_OFFSET UNITYSDK_OFFSET(0xFE15CB0)

inline static constexpr unsigned int EIJPAPBGINH_TypeDefinitionIndex = 54417;

class EIJPAPBGINH : public ::CGJEMKCKIJG
{
public:
	::HOFAIFGAHGJ* LOJEMALELOH; // 0x18
	::CPABOPKIGAL* LMDIMIIBPLD; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIJPAPBGINH__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIJPAPBGINH_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + EIJPAPBGINH_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIJPAPBGINH_GDEOPIBNOIN_OFFSET))(this);
	}
};
