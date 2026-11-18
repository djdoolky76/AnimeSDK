#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"

#define CENKLEAGEFP_OOPGCNBCJLG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FF6BB70)
#define CENKLEAGEFP_OOPGCNBCJLG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FF6BD40)
#define CENKLEAGEFP_OOPGCNBCJLG__CTOR_OFFSET UNITYSDK_OFFSET(0x1FF6BEC0)

inline static constexpr unsigned int CENKLEAGEFP_OOPGCNBCJLG_TypeDefinitionIndex = 18273;

class CENKLEAGEFP_OOPGCNBCJLG
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CENKLEAGEFP_OOPGCNBCJLG__CTOR_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Nullable_1<::System::Double> HAAEBCOBKFF, ::System::Nullable_1<::System::Double> BFMMEICFNCD)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Nullable_1<::System::Double>, ::System::Nullable_1<::System::Double>))((::PBYTE)hIl2Cpp + CENKLEAGEFP_OOPGCNBCJLG_EQUALS_OFFSET))(this, HAAEBCOBKFF, BFMMEICFNCD);
	}

	::System::Int32 GetHashCode(::System::Nullable_1<::System::Double> EIFONLCJOPG)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Nullable_1<::System::Double>))((::PBYTE)hIl2Cpp + CENKLEAGEFP_OOPGCNBCJLG_GETHASHCODE_OFFSET))(this, EIFONLCJOPG);
	}
};
