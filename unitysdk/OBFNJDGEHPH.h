#pragma once
#include "unitysdk/unitysdk.h"

#define OBFNJDGEHPH_CJHKJHFFJJA_OFFSET UNITYSDK_OFFSET(0x22E10)
#define OBFNJDGEHPH_JLDAKDAMPAK_OFFSET UNITYSDK_OFFSET(0x22DB0)
#define OBFNJDGEHPH_KHDKKKNHOMA_OFFSET UNITYSDK_OFFSET(0x22E00)
#define OBFNJDGEHPH_LJNNDBLCCIH_OFFSET UNITYSDK_OFFSET(0x22E20)

inline static constexpr unsigned int OBFNJDGEHPH_TypeDefinitionIndex = 56896;

	struct alignas(4) OBFNJDGEHPH
	{
		::System::Int32 GMAPGCLKDFF; // 0x10
		::System::Int32 NPBKNGHPMGP; // 0x14
		::System::Int32 MIAHHJGBKJD; // 0x18
		::System::Int32 APAALANJLED; // 0x1C
		::System::Int32 JLDAKDAMPAK()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OBFNJDGEHPH_JLDAKDAMPAK_OFFSET))(this);
		}

		::System::Int32 KHDKKKNHOMA()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OBFNJDGEHPH_KHDKKKNHOMA_OFFSET))(this);
		}

		::System::Int32 CJHKJHFFJJA()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OBFNJDGEHPH_CJHKJHFFJJA_OFFSET))(this);
		}

		::System::Int32 LJNNDBLCCIH()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OBFNJDGEHPH_LJNNDBLCCIH_OFFSET))(this);
		}

	};
