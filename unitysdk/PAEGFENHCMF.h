#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define PAEGFENHCMF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x7A4F80)
#define PAEGFENHCMF_EQUALS_OFFSET UNITYSDK_OFFSET(0x7A4F30)
#define PAEGFENHCMF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x7A4F90)
#define PAEGFENHCMF_HLPHPBAODIF_OFFSET UNITYSDK_OFFSET(0x7A4FE0)
#define PAEGFENHCMF_JGBGPJACDOG_OFFSET UNITYSDK_OFFSET(0x7A5040)

inline static constexpr unsigned int PAEGFENHCMF_TypeDefinitionIndex = 45899;

struct alignas(4) PAEGFENHCMF
{
	::System::Int32 GIEIBEMEPMH; // 0x10
	::System::Boolean NHCHDDLMODN; // 0x14

	/*
	::System::Boolean Equals(::PAEGFENHCMF LIBPKNHDIGP)
	{
		return ((::System::Boolean(*)(::PVOID, ::PAEGFENHCMF))((::PBYTE)hIl2Cpp + PAEGFENHCMF_EQUALS_OFFSET))(this, LIBPKNHDIGP);
	}
	*/

	::System::Boolean Equals_1(::System::Object* EIFONLCJOPG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PAEGFENHCMF_EQUALS_1_OFFSET))(this, EIFONLCJOPG);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PAEGFENHCMF_GETHASHCODE_OFFSET))(this);
	}

	::System::Int32 HLPHPBAODIF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PAEGFENHCMF_HLPHPBAODIF_OFFSET))(this);
	}

	::System::Boolean JGBGPJACDOG(::System::Object* MIALFKCCCPI)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PAEGFENHCMF_JGBGPJACDOG_OFFSET))(this, MIALFKCCCPI);
	}
};
