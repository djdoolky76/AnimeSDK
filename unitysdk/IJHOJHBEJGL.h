#pragma once
#include "unitysdk/unitysdk.h"

#define IJHOJHBEJGL_HADLEOMNCJC_OFFSET UNITYSDK_OFFSET(0x3C33A70)

inline static constexpr unsigned int IJHOJHBEJGL_TypeDefinitionIndex = 43381;

	struct alignas(4) IJHOJHBEJGL
	{
		::System::Boolean PLFHGJJCOHJ; // 0x10
		::System::Byte _padding0[0x3];
		::System::Int32 BHAMKIAKGEB; // 0x14
		::System::Int32 KGCDOPFEHBF; // 0x18
		::System::Single GAFENHHEBPG; // 0x1C
		::System::Int32 MGBDFKKMNOL; // 0x20
		::System::Single GJKLJFEKNHI; // 0x24
		::System::Boolean FGCFCPJLOHA; // 0x28
		::System::Byte _padding1[0x3];
		::System::Single JAPBBDENKGM; // 0x2C
		::System::Boolean OJCGODCHLGC; // 0x30
		::System::Int32 HADLEOMNCJC()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IJHOJHBEJGL_HADLEOMNCJC_OFFSET))(this);
		}

	};
