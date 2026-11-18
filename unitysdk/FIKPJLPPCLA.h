#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IADDHANFKPG.h"

#define FIKPJLPPCLA_CMFOIAAGPFL_OFFSET UNITYSDK_OFFSET(0x1429A1D0)
#define FIKPJLPPCLA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1429A130)
#define FIKPJLPPCLA_OCEHMFHIFKL_OFFSET UNITYSDK_OFFSET(0x1429A0E0)
#define FIKPJLPPCLA__CTOR_OFFSET UNITYSDK_OFFSET(0x1429A1C0)

inline static constexpr unsigned int FIKPJLPPCLA_TypeDefinitionIndex = 70606;

class FIKPJLPPCLA : public ::IADDHANFKPG
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIKPJLPPCLA__CTOR_OFFSET))(this);
	}

	::System::Void OCEHMFHIFKL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIKPJLPPCLA_OCEHMFHIFKL_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIKPJLPPCLA_DISPOSE_OFFSET))(this);
	}

	::System::Void CMFOIAAGPFL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIKPJLPPCLA_CMFOIAAGPFL_OFFSET))(this);
	}
};
