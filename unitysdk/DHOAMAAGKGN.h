#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define DHOAMAAGKGN_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x6EEC30)

inline static constexpr unsigned int DHOAMAAGKGN_TypeDefinitionIndex = 57760;

struct alignas(4) DHOAMAAGKGN
{
	::System::Single CAILAHOEDLB; // 0x10
	::System::Single PMHEECGGALJ; // 0x14
	::System::Single MHNBFOHIOLG; // 0x18
	::System::Single OOPDIGGFOJF; // 0x1C
	::System::Single FPMCJPIGPKI; // 0x20
	::System::Single CPEKHBDMILA; // 0x24
	::System::Single KEDGGBLKHHL; // 0x28
	::System::Single ODAMAMPFFOA; // 0x2C
	::System::Single FLJLLHOODCE; // 0x30

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHOAMAAGKGN_NPOLNFDBOOD_OFFSET))(this);
	}
};
