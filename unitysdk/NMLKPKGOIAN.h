#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define NMLKPKGOIAN_HKIBFNGGLLP_OFFSET UNITYSDK_OFFSET(0x7A3E20)
#define NMLKPKGOIAN_NDMOJHHCIPC_OFFSET UNITYSDK_OFFSET(0x7A3DB0)

inline static constexpr unsigned int NMLKPKGOIAN_TypeDefinitionIndex = 50207;

struct alignas(4) NMLKPKGOIAN
{
	::System::UInt16 EOLABDOAPKF; // 0x10
	::System::Byte _padding0[0x2];
	::System::Int32 NKCPGFNPLOH; // 0x14
	::System::Int32 BNDPIKFJDNN; // 0x18
	::System::Byte _padding1[0x4];
	::System::Double CLGENNCFJJO; // 0x20
	::System::Single EKCEOBJKGOA; // 0x28
	::System::Single JJPBJCCGNDC; // 0x2C

	::System::Single NDMOJHHCIPC()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NMLKPKGOIAN_NDMOJHHCIPC_OFFSET))(this);
	}

	::System::Single HKIBFNGGLLP()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NMLKPKGOIAN_HKIBFNGGLLP_OFFSET))(this);
	}
};
