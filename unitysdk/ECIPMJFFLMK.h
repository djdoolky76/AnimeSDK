#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NHPFMFABMEC.h"

namespace System { class EventArgs; }

#define ECIPMJFFLMK_ANEOCOIFDDJ_OFFSET UNITYSDK_OFFSET(0x16BCEDF0)
#define ECIPMJFFLMK_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x16BCEF10)
#define ECIPMJFFLMK_FCMNHLDLJCI_OFFSET UNITYSDK_OFFSET(0x16BCED10)
#define ECIPMJFFLMK_NOGKIHLPJDO_OFFSET UNITYSDK_OFFSET(0x16BCEE80)
#define ECIPMJFFLMK_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x16BCE9A0)
#define ECIPMJFFLMK_PNIFINLBMOE_OFFSET UNITYSDK_OFFSET(0x16BCEA10)
#define ECIPMJFFLMK__CTOR_OFFSET UNITYSDK_OFFSET(0x16BCEDE0)

inline static constexpr unsigned int ECIPMJFFLMK_TypeDefinitionIndex = 40430;

class ECIPMJFFLMK : public ::NHPFMFABMEC
{
public:
	::System::Int32 EKDELEBLOAB; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECIPMJFFLMK__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECIPMJFFLMK_OJENCMOGDKL_OFFSET))(this);
	}

	::System::Void PNIFINLBMOE(::System::EventArgs* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + ECIPMJFFLMK_PNIFINLBMOE_OFFSET))(this, KOIBHLHLMFC);
	}

	::System::Void FCMNHLDLJCI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECIPMJFFLMK_FCMNHLDLJCI_OFFSET))(this);
	}

	::System::Void ANEOCOIFDDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECIPMJFFLMK_ANEOCOIFDDJ_OFFSET))(this);
	}

	::System::Void NOGKIHLPJDO(::System::EventArgs* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + ECIPMJFFLMK_NOGKIHLPJDO_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void ECNOGHHOPPF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECIPMJFFLMK_ECNOGHHOPPF_OFFSET))(this);
	}
};
