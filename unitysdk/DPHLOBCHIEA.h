#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class BNJCPKEEACF;
namespace System { class Object; }

#define DPHLOBCHIEA_BJANDJKKNCD_OFFSET UNITYSDK_OFFSET(0x7945E0)
#define DPHLOBCHIEA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x7944B0)
#define DPHLOBCHIEA_EQUALS_OFFSET UNITYSDK_OFFSET(0x794460)
#define DPHLOBCHIEA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x7944C0)
#define DPHLOBCHIEA_HLPHPBAODIF_OFFSET UNITYSDK_OFFSET(0x794570)
#define DPHLOBCHIEA_JGBGPJACDOG_OFFSET UNITYSDK_OFFSET(0x794510)
#define DPHLOBCHIEA_OMPFLKCBFHF_OFFSET UNITYSDK_OFFSET(0x7945D0)

inline static constexpr unsigned int DPHLOBCHIEA_TypeDefinitionIndex = 74243;

struct alignas(4) DPHLOBCHIEA
{
	::System::UInt32 DJJGLILJKEA; // 0x10

	/*
	::System::Boolean Equals(::DPHLOBCHIEA LIBPKNHDIGP)
	{
		return ((::System::Boolean(*)(::PVOID, ::DPHLOBCHIEA))((::PBYTE)hIl2Cpp + DPHLOBCHIEA_EQUALS_OFFSET))(this, LIBPKNHDIGP);
	}
	*/

	::System::Boolean Equals_1(::System::Object* EIFONLCJOPG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DPHLOBCHIEA_EQUALS_1_OFFSET))(this, EIFONLCJOPG);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DPHLOBCHIEA_GETHASHCODE_OFFSET))(this);
	}

	::System::Boolean JGBGPJACDOG(::System::Object* MIALFKCCCPI)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DPHLOBCHIEA_JGBGPJACDOG_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Int32 HLPHPBAODIF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DPHLOBCHIEA_HLPHPBAODIF_OFFSET))(this);
	}

	::BNJCPKEEACF* OMPFLKCBFHF()
	{
		return ((::BNJCPKEEACF*(*)(::PVOID))((::PBYTE)hIl2Cpp + DPHLOBCHIEA_OMPFLKCBFHF_OFFSET))(this);
	}

	::System::Void BJANDJKKNCD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPHLOBCHIEA_BJANDJKKNCD_OFFSET))(this);
	}
};
