#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NCIAOKMBKED.h"

class ANAPNFPOMNG;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FIPHPDABGAM_ANEOCOIFDDJ_OFFSET UNITYSDK_OFFSET(0x1DE4B080)
#define FIPHPDABGAM_BAEOMKCHECF_OFFSET UNITYSDK_OFFSET(0x1DE4A820)
#define FIPHPDABGAM_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1DE4AFF0)
#define FIPHPDABGAM_FCMNHLDLJCI_OFFSET UNITYSDK_OFFSET(0x1DE4AB00)
#define FIPHPDABGAM_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1DE4A760)
#define FIPHPDABGAM_OMEIBIPJGDH_OFFSET UNITYSDK_OFFSET(0x1DE4AF60)
#define FIPHPDABGAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1DE4AF50)

inline static constexpr unsigned int FIPHPDABGAM_TypeDefinitionIndex = 93374;

class FIPHPDABGAM : public ::NCIAOKMBKED
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* LCADINDIHFI; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIPHPDABGAM__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIPHPDABGAM_OJENCMOGDKL_OFFSET))(this);
	}

	::System::Void BAEOMKCHECF(::ANAPNFPOMNG* DACKALLJNNF)
	{
		return ((::System::Void(*)(::PVOID, ::ANAPNFPOMNG*))((::PBYTE)hIl2Cpp + FIPHPDABGAM_BAEOMKCHECF_OFFSET))(this, DACKALLJNNF);
	}

	::System::Void FCMNHLDLJCI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIPHPDABGAM_FCMNHLDLJCI_OFFSET))(this);
	}

	::System::Void OMEIBIPJGDH(::ANAPNFPOMNG* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::ANAPNFPOMNG*))((::PBYTE)hIl2Cpp + FIPHPDABGAM_OMEIBIPJGDH_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void ECNOGHHOPPF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIPHPDABGAM_ECNOGHHOPPF_OFFSET))(this);
	}

	::System::Void ANEOCOIFDDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIPHPDABGAM_ANEOCOIFDDJ_OFFSET))(this);
	}
};
