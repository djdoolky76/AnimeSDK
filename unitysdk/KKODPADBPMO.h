#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
template <typename T> class KCMIFNGABDC_1;

#define KKODPADBPMO_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x1995F3D0)
#define KKODPADBPMO_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x1995F290)
#define KKODPADBPMO_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x1995F830)
#define KKODPADBPMO__CTOR_OFFSET UNITYSDK_OFFSET(0x1995F730)

inline static constexpr unsigned int KKODPADBPMO_TypeDefinitionIndex = 90321;

class KKODPADBPMO : public ::CGJEMKCKIJG
{
public:
	::HOFAIFGAHGJ* LOJEMALELOH; // 0x18
	::CPABOPKIGAL* LMDIMIIBPLD; // 0x20
	::KCMIFNGABDC_1<::System::Boolean>* OOAKDNPODPM; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKODPADBPMO__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKODPADBPMO_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + KKODPADBPMO_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKODPADBPMO_GDEOPIBNOIN_OFFSET))(this);
	}
};
