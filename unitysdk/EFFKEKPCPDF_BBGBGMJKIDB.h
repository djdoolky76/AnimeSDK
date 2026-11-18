#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define EFFKEKPCPDF_BBGBGMJKIDB_KFEDJIBNOKE_OFFSET UNITYSDK_OFFSET(0x13543F50)
#define EFFKEKPCPDF_BBGBGMJKIDB_PBFPOMDEPOB_OFFSET UNITYSDK_OFFSET(0x13543F10)

inline static constexpr unsigned int EFFKEKPCPDF_BBGBGMJKIDB_TypeDefinitionIndex = 70750;

struct alignas(4) EFFKEKPCPDF_BBGBGMJKIDB
{
	::System::Int32 HBJOLKHGGDD; // 0x10
	::System::Single FEKJMJOPFJC; // 0x10

	static ::System::Single PBFPOMDEPOB(::System::Int32 HBJOLKHGGDD)
	{
		return ((::System::Single(*)(::System::Int32))((::PBYTE)hIl2Cpp + EFFKEKPCPDF_BBGBGMJKIDB_PBFPOMDEPOB_OFFSET))(HBJOLKHGGDD);
	}

	static ::System::Int32 KFEDJIBNOKE(::System::Single FEKJMJOPFJC)
	{
		return ((::System::Int32(*)(::System::Single))((::PBYTE)hIl2Cpp + EFFKEKPCPDF_BBGBGMJKIDB_KFEDJIBNOKE_OFFSET))(FEKJMJOPFJC);
	}
};
