#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define KHCHJCAIPPF_FJOLPGBLBBH_OFFSET UNITYSDK_OFFSET(0x78C190)

inline static constexpr unsigned int KHCHJCAIPPF_TypeDefinitionIndex = 69424;

struct alignas(4) KHCHJCAIPPF
{
	::System::Int32 PMFAEAHBHKL; // 0x10
	::System::Int32 IBPGPKFLKEC; // 0x14
	::System::Int32 PKGFLFLBFLE; // 0x18
	::System::Int32 DBGJNFKBEJK; // 0x1C
	::System::Int32 DGDFFNHJKJG; // 0x20

	::System::Int32 FJOLPGBLBBH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KHCHJCAIPPF_FJOLPGBLBBH_OFFSET))(this);
	}
};
