#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GNKKDGGFNBO.h"

class IOPHHFOHCHJ;
class KPKPLEMCCJG;

#define LJAPDJJPINK_JGBPCGNHEJA_OFFSET UNITYSDK_OFFSET(0x184FB360)
#define LJAPDJJPINK_JOGDJOODGJF_OFFSET UNITYSDK_OFFSET(0x184FB370)
#define LJAPDJJPINK__CTOR_1_OFFSET UNITYSDK_OFFSET(0x184FB300)
#define LJAPDJJPINK__CTOR_OFFSET UNITYSDK_OFFSET(0x184FB2E0)

inline static constexpr unsigned int LJAPDJJPINK_TypeDefinitionIndex = 87570;

class LJAPDJJPINK : public ::GNKKDGGFNBO
{
public:
	::IOPHHFOHCHJ* _DCNOGENHNPP_k__BackingField; // 0x30
	::KPKPLEMCCJG* _NMCPABLHNAB_k__BackingField; // 0x38

	::System::Void _ctor(::System::UInt64 JGFGBMHHGFA)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + LJAPDJJPINK__CTOR_OFFSET))(this, JGFGBMHHGFA);
	}

	::System::Void _ctor_1(::IOPHHFOHCHJ* HEJIBNEHLIG)
	{
		return ((::System::Void(*)(::PVOID, ::IOPHHFOHCHJ*))((::PBYTE)hIl2Cpp + LJAPDJJPINK__CTOR_1_OFFSET))(this, HEJIBNEHLIG);
	}

	::IOPHHFOHCHJ* JGBPCGNHEJA()
	{
		return ((::IOPHHFOHCHJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + LJAPDJJPINK_JGBPCGNHEJA_OFFSET))(this);
	}

	::KPKPLEMCCJG* JOGDJOODGJF()
	{
		return ((::KPKPLEMCCJG*(*)(::PVOID))((::PBYTE)hIl2Cpp + LJAPDJJPINK_JOGDJOODGJF_OFFSET))(this);
	}
};
