#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

template <typename T> class AAMKEDEDHPD_1;
template <typename T> class KCMIFNGABDC_1;

#define DKDOPLFNAGB_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0xFDC1F10)
#define DKDOPLFNAGB_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0xFDC1E40)
#define DKDOPLFNAGB_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0xFDC20A0)
#define DKDOPLFNAGB__CTOR_OFFSET UNITYSDK_OFFSET(0xFDC1FB0)

inline static constexpr unsigned int DKDOPLFNAGB_TypeDefinitionIndex = 83384;

class DKDOPLFNAGB : public ::CGJEMKCKIJG
{
public:
	::AAMKEDEDHPD_1<::System::Int32>* HHNDCFNGILH; // 0x18
	::KCMIFNGABDC_1<::System::Int32>* GPJCGPEGFIG; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKDOPLFNAGB__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKDOPLFNAGB_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + DKDOPLFNAGB_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKDOPLFNAGB_GDEOPIBNOIN_OFFSET))(this);
	}
};
