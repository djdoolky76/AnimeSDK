#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OMMDKIBILJE.h"

#define BNJIBLOMNEL_CTOR_OFFSET UNITYSDK_OFFSET(0xC75B790)
#define BNJIBLOMNEL_KLGKGCEDHFD_OFFSET UNITYSDK_OFFSET(0xC75B680)
#define BNJIBLOMNEL_POPDGIDPFAK_OFFSET UNITYSDK_OFFSET(0xC75B710)

inline static constexpr unsigned int BNJIBLOMNEL_TypeDefinitionIndex = 54711;

	class BNJIBLOMNEL : public ::OMMDKIBILJE
	{
	public:
		::System::Single EJKJIMKBCGC; // 0x28
		::System::Single DKJHMPAELJD; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNJIBLOMNEL_CTOR_OFFSET))(this);
		}

		::System::Single KLGKGCEDHFD()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + BNJIBLOMNEL_KLGKGCEDHFD_OFFSET))(this);
		}

		::System::Void POPDGIDPFAK(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BNJIBLOMNEL_POPDGIDPFAK_OFFSET))(this, a1);
		}

	};
