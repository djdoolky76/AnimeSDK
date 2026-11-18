#pragma once
#include "unitysdk/unitysdk.h"

#define CENKLEAGEFP_KJMJDIACIEO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FF6BB20)
#define CENKLEAGEFP_KJMJDIACIEO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FF6BB40)
#define CENKLEAGEFP_KJMJDIACIEO__CTOR_OFFSET UNITYSDK_OFFSET(0x1FF6BB50)

inline static constexpr unsigned int CENKLEAGEFP_KJMJDIACIEO_TypeDefinitionIndex = 18275;

class CENKLEAGEFP_KJMJDIACIEO
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CENKLEAGEFP_KJMJDIACIEO__CTOR_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Double HAAEBCOBKFF, ::System::Double BFMMEICFNCD)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + CENKLEAGEFP_KJMJDIACIEO_EQUALS_OFFSET))(this, HAAEBCOBKFF, BFMMEICFNCD);
	}

	::System::Int32 GetHashCode(::System::Double EIFONLCJOPG)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + CENKLEAGEFP_KJMJDIACIEO_GETHASHCODE_OFFSET))(this, EIFONLCJOPG);
	}
};
