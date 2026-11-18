#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GPJMHAAEIKO.h"
#include "unitysdk/HJFKHEKOPBD.h"

class ANAPNFPOMNG;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PACCIFMPODN_ANEOCOIFDDJ_OFFSET UNITYSDK_OFFSET(0x172ECBF0)
#define PACCIFMPODN_BAEOMKCHECF_OFFSET UNITYSDK_OFFSET(0x172EC3B0)
#define PACCIFMPODN_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x172ECD10)
#define PACCIFMPODN_FCMNHLDLJCI_OFFSET UNITYSDK_OFFSET(0x172EC9E0)
#define PACCIFMPODN_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x172EC220)
#define PACCIFMPODN_OMEIBIPJGDH_OFFSET UNITYSDK_OFFSET(0x172ECC80)
#define PACCIFMPODN__CTOR_OFFSET UNITYSDK_OFFSET(0x172ECB20)

inline static constexpr unsigned int PACCIFMPODN_TypeDefinitionIndex = 57428;

class PACCIFMPODN : public ::HJFKHEKOPBD
{
public:
	::System::Collections::Generic::List_1<::GPJMHAAEIKO>* MCHENDBOHNJ; // 0x60
	::System::Collections::Generic::List_1<::GPJMHAAEIKO>* PGNAEOHNKJI; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PACCIFMPODN__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PACCIFMPODN_OJENCMOGDKL_OFFSET))(this);
	}

	::System::Void BAEOMKCHECF(::ANAPNFPOMNG* KANJODNFFOI)
	{
		return ((::System::Void(*)(::PVOID, ::ANAPNFPOMNG*))((::PBYTE)hIl2Cpp + PACCIFMPODN_BAEOMKCHECF_OFFSET))(this, KANJODNFFOI);
	}

	::System::Void FCMNHLDLJCI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PACCIFMPODN_FCMNHLDLJCI_OFFSET))(this);
	}

	::System::Void ANEOCOIFDDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PACCIFMPODN_ANEOCOIFDDJ_OFFSET))(this);
	}

	::System::Void OMEIBIPJGDH(::ANAPNFPOMNG* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::ANAPNFPOMNG*))((::PBYTE)hIl2Cpp + PACCIFMPODN_OMEIBIPJGDH_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void ECNOGHHOPPF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PACCIFMPODN_ECNOGHHOPPF_OFFSET))(this);
	}
};
