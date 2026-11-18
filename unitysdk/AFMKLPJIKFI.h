#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BBKFNNHAKBP.h"

#define AFMKLPJIKFI_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x16D72F10)
#define AFMKLPJIKFI_OKJCHFGIKBH_OFFSET UNITYSDK_OFFSET(0x16D72E70)
#define AFMKLPJIKFI__CTOR_OFFSET UNITYSDK_OFFSET(0x16D72F50)

inline static constexpr unsigned int AFMKLPJIKFI_TypeDefinitionIndex = 52617;

class AFMKLPJIKFI : public ::BBKFNNHAKBP
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFMKLPJIKFI__CTOR_OFFSET))(this);
	}

	::System::Void OKJCHFGIKBH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFMKLPJIKFI_OKJCHFGIKBH_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFMKLPJIKFI_OJENCMOGDKL_OFFSET))(this);
	}
};
