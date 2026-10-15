#pragma once
#include "unitysdk/unitysdk.h"
class BALMEHEPCDM;
namespace System { class IFormatProvider; }
namespace System { class String; }

#define PKHNHEBKPPI_AKOKDAOHHCA_OFFSET UNITYSDK_OFFSET(0xC2BB240)
#define PKHNHEBKPPI_BCOGIJJBHFP_OFFSET UNITYSDK_OFFSET(0xDE880)
#define PKHNHEBKPPI_CTOR_OFFSET UNITYSDK_OFFSET(0xB310)
#define PKHNHEBKPPI_GJFMBFAAJEA_OFFSET UNITYSDK_OFFSET(0xC2BB1C0)
#define PKHNHEBKPPI_LAMDCHCLEAA_OFFSET UNITYSDK_OFFSET(0xDE8D0)
#define PKHNHEBKPPI_MPHNMOGNEHL_OFFSET UNITYSDK_OFFSET(0xDE830)

inline static constexpr unsigned int PKHNHEBKPPI_TypeDefinitionIndex = 73369;

	struct alignas(8) PKHNHEBKPPI
	{
		::System::String* DKEFJBAMMIO; // 0x10
		::System::IFormatProvider* NHFLLHIFMDI; // 0x18
		::BALMEHEPCDM* BPOKGBHHPIO; // 0x20
		::System::Void _ctor(::System::String* a1, ::System::IFormatProvider* a2, ::BALMEHEPCDM* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::IFormatProvider*, ::BALMEHEPCDM*))((::PBYTE)hIl2Cpp + PKHNHEBKPPI_CTOR_OFFSET))(this, a1, a2, a3);
		}

		/*
		static ::PKHNHEBKPPI GJFMBFAAJEA(::System::String* a1, ::System::IFormatProvider* a2)
		{
			return ((::PKHNHEBKPPI(*)(::System::String*, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + PKHNHEBKPPI_GJFMBFAAJEA_OFFSET))(a1, a2);
		}
		*/

		static ::BALMEHEPCDM* AKOKDAOHHCA(::System::String* a1)
		{
			return ((::BALMEHEPCDM*(*)(::System::String*))((::PBYTE)hIl2Cpp + PKHNHEBKPPI_AKOKDAOHHCA_OFFSET))(a1);
		}

		::System::String* MPHNMOGNEHL()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PKHNHEBKPPI_MPHNMOGNEHL_OFFSET))(this);
		}

		::System::IFormatProvider* BCOGIJJBHFP()
		{
			return ((::System::IFormatProvider*(*)(::PVOID))((::PBYTE)hIl2Cpp + PKHNHEBKPPI_BCOGIJJBHFP_OFFSET))(this);
		}

		::BALMEHEPCDM* LAMDCHCLEAA()
		{
			return ((::BALMEHEPCDM*(*)(::PVOID))((::PBYTE)hIl2Cpp + PKHNHEBKPPI_LAMDCHCLEAA_OFFSET))(this);
		}

	};
