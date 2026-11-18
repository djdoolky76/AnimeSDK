#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define NHHKNFMCPKD_FLEBFGGGGFE_OFFSET UNITYSDK_OFFSET(0x6C9F10)
#define NHHKNFMCPKD__CTOR_OFFSET UNITYSDK_OFFSET(0x6C9EF0)

inline static constexpr unsigned int NHHKNFMCPKD_TypeDefinitionIndex = 43000;

struct alignas(4) NHHKNFMCPKD
{
	::System::Int32 ABHBKFJKINO; // 0x10
	::System::Single HFMFECKMPMH; // 0x14
	::System::Single GEMPIFOPGKB; // 0x18
	::System::Single NPCNAAHDPPN; // 0x1C

	::System::Void _ctor(::System::Int32 ABHBKFJKINO, ::System::Single HFMFECKMPMH, ::System::Single GEMPIFOPGKB, ::System::Single NPCNAAHDPPN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + NHHKNFMCPKD__CTOR_OFFSET))(this, ABHBKFJKINO, HFMFECKMPMH, GEMPIFOPGKB, NPCNAAHDPPN);
	}

	/*
	::System::Boolean FLEBFGGGGFE(::NHHKNFMCPKD LIBPKNHDIGP)
	{
		return ((::System::Boolean(*)(::PVOID, ::NHHKNFMCPKD))((::PBYTE)hIl2Cpp + NHHKNFMCPKD_FLEBFGGGGFE_OFFSET))(this, LIBPKNHDIGP);
	}
	*/
};
