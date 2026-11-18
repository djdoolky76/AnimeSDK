#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define MOLEMOLE_ZNET_MOUSEORBIT_AKPILIPLHHJ__CTOR_OFFSET UNITYSDK_OFFSET(0x6069B0)

namespace MoleMole::ZNet
{
	inline static constexpr unsigned int MouseOrbit_AKPILIPLHHJ_TypeDefinitionIndex = 69738;

	struct alignas(4) MouseOrbit_AKPILIPLHHJ
	{
		::System::Single ONGKNJDGBLJ; // 0x10
		::System::Single JOGJHDBEDPN; // 0x14
		::System::Single PFPNPKNBNFI; // 0x18

		::System::Void _ctor(::System::Single HAAEBCOBKFF, ::System::Single BFMMEICFNCD, ::System::Single BDEDDEGJFKL)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_ZNET_MOUSEORBIT_AKPILIPLHHJ__CTOR_OFFSET))(this, HAAEBCOBKFF, BFMMEICFNCD, BDEDDEGJFKL);
		}
	};
}
