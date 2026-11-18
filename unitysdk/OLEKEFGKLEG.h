#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

template <typename T> class AAMKEDEDHPD_1;
template <typename T> class KCMIFNGABDC_1;

#define OLEKEFGKLEG_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x1B7A54F0)
#define OLEKEFGKLEG_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x1B7A5420)
#define OLEKEFGKLEG_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x1B7A57C0)
#define OLEKEFGKLEG__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7A56D0)

inline static constexpr unsigned int OLEKEFGKLEG_TypeDefinitionIndex = 42309;

class OLEKEFGKLEG : public ::CGJEMKCKIJG
{
public:
	::AAMKEDEDHPD_1<::System::Int32>* MBBIHIBOJHB; // 0x18
	::KCMIFNGABDC_1<::System::Int32>* KFBIKMPCLMI; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLEKEFGKLEG__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLEKEFGKLEG_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + OLEKEFGKLEG_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLEKEFGKLEG_GDEOPIBNOIN_OFFSET))(this);
	}
};
