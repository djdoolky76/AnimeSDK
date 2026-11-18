#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

template <typename T> class KCMIFNGABDC_1;

#define GDIHJNIHMCK_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x16CAE0D0)
#define GDIHJNIHMCK_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x16CAE040)
#define GDIHJNIHMCK_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x16CAE250)
#define GDIHJNIHMCK__CTOR_OFFSET UNITYSDK_OFFSET(0x16CAE1B0)

inline static constexpr unsigned int GDIHJNIHMCK_TypeDefinitionIndex = 61305;

class GDIHJNIHMCK : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::System::Int32>* NHHLNICOMJA; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDIHJNIHMCK__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDIHJNIHMCK_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + GDIHJNIHMCK_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDIHJNIHMCK_GDEOPIBNOIN_OFFSET))(this);
	}
};
