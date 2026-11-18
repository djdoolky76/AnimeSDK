#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

template <typename T> class KCMIFNGABDC_1;

#define AAMABKDJHFK_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x142095F0)
#define AAMABKDJHFK_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x14209560)
#define AAMABKDJHFK_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x142098C0)
#define AAMABKDJHFK__CTOR_OFFSET UNITYSDK_OFFSET(0x14209820)

inline static constexpr unsigned int AAMABKDJHFK_TypeDefinitionIndex = 74321;

class AAMABKDJHFK : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::System::Boolean>* JPJHAJKJOHN; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAMABKDJHFK__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAMABKDJHFK_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + AAMABKDJHFK_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAMABKDJHFK_GDEOPIBNOIN_OFFSET))(this);
	}
};
