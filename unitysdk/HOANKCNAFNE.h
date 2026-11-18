#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

template <typename T> class KCMIFNGABDC_1;

#define HOANKCNAFNE_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x15383C50)
#define HOANKCNAFNE_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x15383BC0)
#define HOANKCNAFNE_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x15384140)
#define HOANKCNAFNE__CTOR_OFFSET UNITYSDK_OFFSET(0x153840A0)

inline static constexpr unsigned int HOANKCNAFNE_TypeDefinitionIndex = 47444;

class HOANKCNAFNE : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::System::Boolean>* PNFLIAAKFDF; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOANKCNAFNE__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOANKCNAFNE_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + HOANKCNAFNE_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOANKCNAFNE_GDEOPIBNOIN_OFFSET))(this);
	}
};
