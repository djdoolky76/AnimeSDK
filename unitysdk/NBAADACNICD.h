#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

template <typename T> class KCMIFNGABDC_1;

#define NBAADACNICD_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x16B50780)
#define NBAADACNICD_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x16B506F0)
#define NBAADACNICD_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x16B50A00)
#define NBAADACNICD__CTOR_OFFSET UNITYSDK_OFFSET(0x16B50960)

inline static constexpr unsigned int NBAADACNICD_TypeDefinitionIndex = 77341;

class NBAADACNICD : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::System::Boolean>* BDDFMFNEIBF; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBAADACNICD__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBAADACNICD_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + NBAADACNICD_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBAADACNICD_GDEOPIBNOIN_OFFSET))(this);
	}
};
