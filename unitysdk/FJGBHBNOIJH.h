#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

template <typename T> class KCMIFNGABDC_1;

#define FJGBHBNOIJH_ALHHNOIENBA_OFFSET UNITYSDK_OFFSET(0x141000B0)
#define FJGBHBNOIJH_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x14100040)
#define FJGBHBNOIJH_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x140FFFB0)
#define FJGBHBNOIJH_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x14100390)
#define FJGBHBNOIJH__CTOR_OFFSET UNITYSDK_OFFSET(0x141002F0)

inline static constexpr unsigned int FJGBHBNOIJH_TypeDefinitionIndex = 63884;

class FJGBHBNOIJH : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::Foundation::ViewObject::ViewObjectHandle>* EJLOPJOMHHN; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJGBHBNOIJH__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJGBHBNOIJH_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + FJGBHBNOIJH_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJGBHBNOIJH_GDEOPIBNOIN_OFFSET))(this);
	}

	::System::Boolean ALHHNOIENBA(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Boolean(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + FJGBHBNOIJH_ALHHNOIENBA_OFFSET))(this, BKBGPKNGNMF);
	}
};
