#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define EOPBCBCMFGF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x8B80C0)
#define EOPBCBCMFGF_EQUALS_OFFSET UNITYSDK_OFFSET(0x8B8070)
#define EOPBCBCMFGF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x8B80D0)
#define EOPBCBCMFGF_HLPHPBAODIF_OFFSET UNITYSDK_OFFSET(0x8B8180)
#define EOPBCBCMFGF_JGBGPJACDOG_OFFSET UNITYSDK_OFFSET(0x8B8120)

inline static constexpr unsigned int EOPBCBCMFGF_TypeDefinitionIndex = 93746;

struct alignas(4) EOPBCBCMFGF
{
	::System::Int32 MMMFHGCEIGC; // 0x10

	/*
	::System::Boolean Equals(::EOPBCBCMFGF LIBPKNHDIGP)
	{
		return ((::System::Boolean(*)(::PVOID, ::EOPBCBCMFGF))((::PBYTE)hIl2Cpp + EOPBCBCMFGF_EQUALS_OFFSET))(this, LIBPKNHDIGP);
	}
	*/

	::System::Boolean Equals_1(::System::Object* EIFONLCJOPG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EOPBCBCMFGF_EQUALS_1_OFFSET))(this, EIFONLCJOPG);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EOPBCBCMFGF_GETHASHCODE_OFFSET))(this);
	}

	::System::Boolean JGBGPJACDOG(::System::Object* MIALFKCCCPI)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EOPBCBCMFGF_JGBGPJACDOG_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Int32 HLPHPBAODIF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EOPBCBCMFGF_HLPHPBAODIF_OFFSET))(this);
	}
};
