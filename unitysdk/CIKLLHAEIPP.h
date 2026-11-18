#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

template <typename T> class KCMIFNGABDC_1;

#define CIKLLHAEIPP_ALHHNOIENBA_OFFSET UNITYSDK_OFFSET(0x145C69A0)
#define CIKLLHAEIPP_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x145C6930)
#define CIKLLHAEIPP_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x145C68A0)
#define CIKLLHAEIPP_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x145C6B10)
#define CIKLLHAEIPP__CTOR_OFFSET UNITYSDK_OFFSET(0x145C6A70)

inline static constexpr unsigned int CIKLLHAEIPP_TypeDefinitionIndex = 82729;

class CIKLLHAEIPP : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::System::Int32>* HDIEABKPPNF; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIKLLHAEIPP__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIKLLHAEIPP_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + CIKLLHAEIPP_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Boolean ALHHNOIENBA(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Boolean(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + CIKLLHAEIPP_ALHHNOIENBA_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIKLLHAEIPP_GDEOPIBNOIN_OFFSET))(this);
	}
};
