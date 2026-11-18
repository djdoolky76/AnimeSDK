#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

template <typename T> class AAMKEDEDHPD_1;

#define PDKEIPFIMPI_ALHHNOIENBA_OFFSET UNITYSDK_OFFSET(0x16F9ECF0)
#define PDKEIPFIMPI_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x16F9ECA0)
#define PDKEIPFIMPI_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x16F9EC10)
#define PDKEIPFIMPI_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x16F9EF30)
#define PDKEIPFIMPI__CTOR_OFFSET UNITYSDK_OFFSET(0x16F9EE90)

inline static constexpr unsigned int PDKEIPFIMPI_TypeDefinitionIndex = 52204;

class PDKEIPFIMPI : public ::CGJEMKCKIJG
{
public:
	::AAMKEDEDHPD_1<::System::Int32>* DJJIPJDLADK; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDKEIPFIMPI__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDKEIPFIMPI_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + PDKEIPFIMPI_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDKEIPFIMPI_GDEOPIBNOIN_OFFSET))(this);
	}

	::System::Void ALHHNOIENBA(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + PDKEIPFIMPI_ALHHNOIENBA_OFFSET))(this, BKBGPKNGNMF);
	}
};
