#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OLHFONBEAAN.h"

#define NCJKDKLGPAM_CCIFDCBKPPJ_OFFSET UNITYSDK_OFFSET(0x13B58010)
#define NCJKDKLGPAM_EFDHFPDKKGD_OFFSET UNITYSDK_OFFSET(0x13B580C0)
#define NCJKDKLGPAM_OAGNMOOJCCJ_OFFSET UNITYSDK_OFFSET(0x13B58000)
#define NCJKDKLGPAM_OHDPCOIOMGF_OFFSET UNITYSDK_OFFSET(0x13B57FF0)
#define NCJKDKLGPAM__CTOR_OFFSET UNITYSDK_OFFSET(0x13B57FB0)

inline static constexpr unsigned int NCJKDKLGPAM_TypeDefinitionIndex = 68678;

class NCJKDKLGPAM : public ::OLHFONBEAAN
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCJKDKLGPAM__CTOR_OFFSET))(this);
	}

	::System::Boolean OHDPCOIOMGF()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NCJKDKLGPAM_OHDPCOIOMGF_OFFSET))(this);
	}

	::System::Int32 OAGNMOOJCCJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NCJKDKLGPAM_OAGNMOOJCCJ_OFFSET))(this);
	}

	::System::Void CCIFDCBKPPJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCJKDKLGPAM_CCIFDCBKPPJ_OFFSET))(this);
	}

	::System::Void EFDHFPDKKGD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCJKDKLGPAM_EFDHFPDKKGD_OFFSET))(this);
	}
};
