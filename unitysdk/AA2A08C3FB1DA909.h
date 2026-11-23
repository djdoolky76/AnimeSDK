#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define AA2A08C3FB1DA909_B996A70283B60FAC_OFFSET UNITYSDK_OFFSET(0x3B5A470)
#define AA2A08C3FB1DA909_FC3208D7B8C7EE04_OFFSET UNITYSDK_OFFSET(0x3D3A930)

inline static constexpr unsigned int AA2A08C3FB1DA909_TypeDefinitionIndex = 10945;

struct alignas(4) AA2A08C3FB1DA909
{
	::System::IntPtr F0D97047597CC6CA; // 0x10
	::System::IntPtr F0D3F87128A7C4CA; // 0x18
	::System::Int32 F1F04FD1B3F98D67; // 0x20
	::System::Int32 E2B801C5BD31263C; // 0x24

	::System::Int32 B996A70283B60FAC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AA2A08C3FB1DA909_B996A70283B60FAC_OFFSET))(this);
	}

	::System::Boolean FC3208D7B8C7EE04(::System::Object* E1B624472530B0E4)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AA2A08C3FB1DA909_FC3208D7B8C7EE04_OFFSET))(this, E1B624472530B0E4);
	}
};
