#pragma once
#include "unitysdk/unitysdk.h"

#define PDOOHMMHCFN_NDFCJNAMFJG_OFFSET UNITYSDK_OFFSET(0x3C4DF10)
#define PDOOHMMHCFN_PEFLJDOKOIL_OFFSET UNITYSDK_OFFSET(0x3C4DEB0)

inline static constexpr unsigned int PDOOHMMHCFN_TypeDefinitionIndex = 6223;

	struct alignas(4) PDOOHMMHCFN
	{
		::System::Single CNAEHKPLENB; // 0x10
		::System::Single FBLHLHCGMKO; // 0x14
		::System::Single GNEIJHBGCHG; // 0x18
		::System::Single JNKMJKBDGPL; // 0x1C
		::System::Single MOMALPAJBAI; // 0x20
		::System::Single JPJIJDLDLJD; // 0x24
		::System::Single PEFLJDOKOIL(::System::Int32 a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PDOOHMMHCFN_PEFLJDOKOIL_OFFSET))(this, a1);
		}

		::System::Void NDFCJNAMFJG(::System::Int32 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + PDOOHMMHCFN_NDFCJNAMFJG_OFFSET))(this, a1, a2);
		}

	};
