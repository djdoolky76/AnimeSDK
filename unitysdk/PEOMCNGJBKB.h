#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

class NJDHJGDFLDI;
template <typename T> class KCMIFNGABDC_1;

#define PEOMCNGJBKB_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x1949BF90)
#define PEOMCNGJBKB_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x1949BEB0)
#define PEOMCNGJBKB_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x1949C290)
#define PEOMCNGJBKB__CTOR_OFFSET UNITYSDK_OFFSET(0x1949C1F0)

inline static constexpr unsigned int PEOMCNGJBKB_TypeDefinitionIndex = 91624;

class PEOMCNGJBKB : public ::MHMFINLCNFN
{
public:
	::NJDHJGDFLDI* OAJIELDIGNH; // 0x28
	::KCMIFNGABDC_1<::System::Boolean>* CIFLENFEEGN; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEOMCNGJBKB__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEOMCNGJBKB_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + PEOMCNGJBKB_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEOMCNGJBKB_GDEOPIBNOIN_OFFSET))(this);
	}
};
