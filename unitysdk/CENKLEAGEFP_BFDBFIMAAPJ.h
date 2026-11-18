#pragma once
#include "unitysdk/unitysdk.h"

#define CENKLEAGEFP_BFDBFIMAAPJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FCDC650)
#define CENKLEAGEFP_BFDBFIMAAPJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FCDC670)
#define CENKLEAGEFP_BFDBFIMAAPJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1FCDC690)

inline static constexpr unsigned int CENKLEAGEFP_BFDBFIMAAPJ_TypeDefinitionIndex = 18276;

class CENKLEAGEFP_BFDBFIMAAPJ
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CENKLEAGEFP_BFDBFIMAAPJ__CTOR_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Single HAAEBCOBKFF, ::System::Single BFMMEICFNCD)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CENKLEAGEFP_BFDBFIMAAPJ_EQUALS_OFFSET))(this, HAAEBCOBKFF, BFMMEICFNCD);
	}

	::System::Int32 GetHashCode(::System::Single EIFONLCJOPG)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CENKLEAGEFP_BFDBFIMAAPJ_GETHASHCODE_OFFSET))(this, EIFONLCJOPG);
	}
};
