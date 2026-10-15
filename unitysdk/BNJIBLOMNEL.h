#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OMMDKIBILJE.h"

#define BNJIBLOMNEL_CTOR_OFFSET UNITYSDK_OFFSET(0xBDD8D50)
#define BNJIBLOMNEL_KLGKGCEDHFD_OFFSET UNITYSDK_OFFSET(0xBDD8C40)
#define BNJIBLOMNEL_POPDGIDPFAK_OFFSET UNITYSDK_OFFSET(0xBDD8CD0)

inline static constexpr unsigned int BNJIBLOMNEL_TypeDefinitionIndex = 53548;

	class BNJIBLOMNEL : public ::OMMDKIBILJE
	{
	public:
		::System::Single DKJHMPAELJD; // 0x28
		::System::Single EJKJIMKBCGC; // 0x2C
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
