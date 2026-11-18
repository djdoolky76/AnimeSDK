#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

template <typename T> class AAMKEDEDHPD_1;
template <typename T> class KCMIFNGABDC_1;

#define CGEMJIGDEDH_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x139C45E0)
#define CGEMJIGDEDH_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x139C4510)
#define CGEMJIGDEDH_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x139C4960)
#define CGEMJIGDEDH__CTOR_OFFSET UNITYSDK_OFFSET(0x139C4870)

inline static constexpr unsigned int CGEMJIGDEDH_TypeDefinitionIndex = 69284;

class CGEMJIGDEDH : public ::CGJEMKCKIJG
{
public:
	::AAMKEDEDHPD_1<::System::Boolean>* FDPMDEJANJH; // 0x18
	::KCMIFNGABDC_1<::System::Int32>* ALNAEIJIHBO; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGEMJIGDEDH__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGEMJIGDEDH_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + CGEMJIGDEDH_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGEMJIGDEDH_GDEOPIBNOIN_OFFSET))(this);
	}
};
