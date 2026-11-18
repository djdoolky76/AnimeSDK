#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

namespace System { class String; }
template <typename T> class KCMIFNGABDC_1;

#define EEJMDPDNKFF_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x1549E640)
#define EEJMDPDNKFF_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x1549E5B0)
#define EEJMDPDNKFF_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x1549E8F0)
#define EEJMDPDNKFF__CTOR_OFFSET UNITYSDK_OFFSET(0x1549E850)

inline static constexpr unsigned int EEJMDPDNKFF_TypeDefinitionIndex = 85658;

class EEJMDPDNKFF : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::System::String*>* HFEIPMCNCNI; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEJMDPDNKFF__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEJMDPDNKFF_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + EEJMDPDNKFF_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEJMDPDNKFF_GDEOPIBNOIN_OFFSET))(this);
	}
};
