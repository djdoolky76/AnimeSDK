#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

template <typename T> class AAMKEDEDHPD_1;

#define GDPGLHDAGFC_ALHHNOIENBA_OFFSET UNITYSDK_OFFSET(0x189F6D20)
#define GDPGLHDAGFC_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x189F6CD0)
#define GDPGLHDAGFC_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x189F6C40)
#define GDPGLHDAGFC_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x189F71E0)
#define GDPGLHDAGFC__CTOR_OFFSET UNITYSDK_OFFSET(0x189F7140)

inline static constexpr unsigned int GDPGLHDAGFC_TypeDefinitionIndex = 70609;

class GDPGLHDAGFC : public ::CGJEMKCKIJG
{
public:
	::AAMKEDEDHPD_1<::System::Int32>* PKGOJPNNFPJ; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDPGLHDAGFC__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDPGLHDAGFC_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + GDPGLHDAGFC_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDPGLHDAGFC_GDEOPIBNOIN_OFFSET))(this);
	}

	::System::Void ALHHNOIENBA(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + GDPGLHDAGFC_ALHHNOIENBA_OFFSET))(this, BKBGPKNGNMF);
	}
};
