#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
template <typename T> class KCMIFNGABDC_1;

#define MEPEBKJGODE_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x14D73F90)
#define MEPEBKJGODE_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x14D73E40)
#define MEPEBKJGODE_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x14D745F0)
#define MEPEBKJGODE__CTOR_OFFSET UNITYSDK_OFFSET(0x14D74460)

inline static constexpr unsigned int MEPEBKJGODE_TypeDefinitionIndex = 82113;

class MEPEBKJGODE : public ::MHMFINLCNFN
{
public:
	::CPABOPKIGAL* BOHNBOELHDG; // 0x28
	::KCMIFNGABDC_1<::System::Int32>* FHGFOACNDPF; // 0x30
	::CPABOPKIGAL* JAIGFKHCMPE; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEPEBKJGODE__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEPEBKJGODE_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + MEPEBKJGODE_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEPEBKJGODE_GDEOPIBNOIN_OFFSET))(this);
	}
};
