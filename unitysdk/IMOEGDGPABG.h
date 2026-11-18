#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EEGNCADIMBJ.h"
#include "unitysdk/HFLADMCGDOG.h"

#define IMOEGDGPABG_FPJCBGDDECA_OFFSET UNITYSDK_OFFSET(0x13AAE1C0)
#define IMOEGDGPABG_HPJLFGGDCAA_OFFSET UNITYSDK_OFFSET(0x13AAE1E0)
#define IMOEGDGPABG_NANFCAFBJAF_OFFSET UNITYSDK_OFFSET(0x13AAE1D0)
#define IMOEGDGPABG_PKPLCKHEAAL_OFFSET UNITYSDK_OFFSET(0x13AAE1B0)
#define IMOEGDGPABG__CTOR_OFFSET UNITYSDK_OFFSET(0x13AAE1A0)

inline static constexpr unsigned int IMOEGDGPABG_TypeDefinitionIndex = 65579;

class IMOEGDGPABG : public ::EEGNCADIMBJ
{
public:
	::System::Void _ctor(::HFLADMCGDOG CIAHAAKLADN)
	{
		return ((::System::Void(*)(::PVOID, ::HFLADMCGDOG))((::PBYTE)hIl2Cpp + IMOEGDGPABG__CTOR_OFFSET))(this, CIAHAAKLADN);
	}

	::System::Boolean PKPLCKHEAAL()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IMOEGDGPABG_PKPLCKHEAAL_OFFSET))(this);
	}

	::System::Boolean FPJCBGDDECA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IMOEGDGPABG_FPJCBGDDECA_OFFSET))(this);
	}

	::System::Boolean NANFCAFBJAF()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IMOEGDGPABG_NANFCAFBJAF_OFFSET))(this);
	}

	::System::Boolean HPJLFGGDCAA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IMOEGDGPABG_HPJLFGGDCAA_OFFSET))(this);
	}
};
