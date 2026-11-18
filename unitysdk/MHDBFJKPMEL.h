#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

template <typename T> class AAMKEDEDHPD_1;

#define MHDBFJKPMEL_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x1853D0E0)
#define MHDBFJKPMEL_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x1853D050)
#define MHDBFJKPMEL_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x1853D2D0)
#define MHDBFJKPMEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1853D230)

inline static constexpr unsigned int MHDBFJKPMEL_TypeDefinitionIndex = 45967;

class MHDBFJKPMEL : public ::CGJEMKCKIJG
{
public:
	::AAMKEDEDHPD_1<::System::Int32>* OOOOENAJJEP; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHDBFJKPMEL__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHDBFJKPMEL_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + MHDBFJKPMEL_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHDBFJKPMEL_GDEOPIBNOIN_OFFSET))(this);
	}
};
