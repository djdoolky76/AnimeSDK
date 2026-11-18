#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

template <typename T> class AAMKEDEDHPD_1;
template <typename T> class KCMIFNGABDC_1;

#define IOEJKLPHNJL_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x197E2CD0)
#define IOEJKLPHNJL_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x197E2B90)
#define IOEJKLPHNJL_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x197E2EC0)
#define IOEJKLPHNJL__CTOR_OFFSET UNITYSDK_OFFSET(0x197E2DA0)

inline static constexpr unsigned int IOEJKLPHNJL_TypeDefinitionIndex = 57146;

class IOEJKLPHNJL : public ::CGJEMKCKIJG
{
public:
	::AAMKEDEDHPD_1<::System::Int64>* FDPMDEJANJH; // 0x18
	::KCMIFNGABDC_1<::System::Int64>* ICGBACLFMIL; // 0x20
	::KCMIFNGABDC_1<::System::Int64>* MEINJKFJIGE; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOEJKLPHNJL__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOEJKLPHNJL_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + IOEJKLPHNJL_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOEJKLPHNJL_GDEOPIBNOIN_OFFSET))(this);
	}
};
