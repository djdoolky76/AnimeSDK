#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

template <typename T> class KCMIFNGABDC_1;

#define NGBJKOPKDNO_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x12FE5710)
#define NGBJKOPKDNO_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x12FE5680)
#define NGBJKOPKDNO_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x12FE5950)
#define NGBJKOPKDNO__CTOR_OFFSET UNITYSDK_OFFSET(0x12FE58B0)

inline static constexpr unsigned int NGBJKOPKDNO_TypeDefinitionIndex = 48021;

class NGBJKOPKDNO : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::System::Boolean>* AJOJJAECIDO; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGBJKOPKDNO__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGBJKOPKDNO_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + NGBJKOPKDNO_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGBJKOPKDNO_GDEOPIBNOIN_OFFSET))(this);
	}
};
