#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define PIMCAAHJMHI_PPGBHNIJOIB_OFFSET UNITYSDK_OFFSET(0x1197FD80)
#define PIMCAAHJMHI__CTOR_OFFSET UNITYSDK_OFFSET(0x359150)

inline static constexpr unsigned int PIMCAAHJMHI_TypeDefinitionIndex = 82883;

struct alignas(4) PIMCAAHJMHI
{
	::System::Int32 BBMHCILJACC; // 0x10

	::System::Void _ctor(::System::Int32 NCJHNBIKEJC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PIMCAAHJMHI__CTOR_OFFSET))(this, NCJHNBIKEJC);
	}

	/*
	static ::PIMCAAHJMHI PPGBHNIJOIB()
	{
		return ((::PIMCAAHJMHI(*)())((::PBYTE)hIl2Cpp + PIMCAAHJMHI_PPGBHNIJOIB_OFFSET))();
	}
	*/
};
