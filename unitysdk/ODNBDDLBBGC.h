#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

template <typename T> class AAMKEDEDHPD_1;
template <typename T> class KCMIFNGABDC_1;

#define ODNBDDLBBGC_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x114E9420)
#define ODNBDDLBBGC_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x114E9350)
#define ODNBDDLBBGC_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x114E96B0)
#define ODNBDDLBBGC__CTOR_OFFSET UNITYSDK_OFFSET(0x114E95C0)

inline static constexpr unsigned int ODNBDDLBBGC_TypeDefinitionIndex = 86883;

class ODNBDDLBBGC : public ::CGJEMKCKIJG
{
public:
	::AAMKEDEDHPD_1<::System::Boolean>* OJAMPHDOBJA; // 0x18
	::KCMIFNGABDC_1<::System::Int32>* AGOKMCFDJIA; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODNBDDLBBGC__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODNBDDLBBGC_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + ODNBDDLBBGC_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODNBDDLBBGC_GDEOPIBNOIN_OFFSET))(this);
	}
};
