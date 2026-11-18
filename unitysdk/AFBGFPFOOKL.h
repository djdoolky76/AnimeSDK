#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
template <typename T> class KCMIFNGABDC_1;

#define AFBGFPFOOKL_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x16D6C0D0)
#define AFBGFPFOOKL_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x16D6BF80)
#define AFBGFPFOOKL_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x16D6C4C0)
#define AFBGFPFOOKL__CTOR_OFFSET UNITYSDK_OFFSET(0x16D6C330)

inline static constexpr unsigned int AFBGFPFOOKL_TypeDefinitionIndex = 92308;

class AFBGFPFOOKL : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::System::Int32>* FJMNMKPGFIF; // 0x28
	::CPABOPKIGAL* JAIGFKHCMPE; // 0x30
	::CPABOPKIGAL* BOHNBOELHDG; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFBGFPFOOKL__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFBGFPFOOKL_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + AFBGFPFOOKL_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFBGFPFOOKL_GDEOPIBNOIN_OFFSET))(this);
	}
};
