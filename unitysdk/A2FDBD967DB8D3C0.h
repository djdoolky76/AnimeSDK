#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class FF8535960D737D0F;
namespace System { class Object; }

#define A2FDBD967DB8D3C0_B996A70283B60FAC_OFFSET UNITYSDK_OFFSET(0x3EC8630)
#define A2FDBD967DB8D3C0_FC3208D7B8C7EE04_OFFSET UNITYSDK_OFFSET(0x3EC8570)

inline static constexpr unsigned int A2FDBD967DB8D3C0_TypeDefinitionIndex = 15115;

struct alignas(8) A2FDBD967DB8D3C0
{
	::FF8535960D737D0F* BF3A584683910405; // 0x10
	::System::Int32 FFA31415EE024C7E; // 0x18

	::System::Boolean FC3208D7B8C7EE04(::System::Object* BD2A83A19DF5362C)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + A2FDBD967DB8D3C0_FC3208D7B8C7EE04_OFFSET))(this, BD2A83A19DF5362C);
	}

	::System::Int32 B996A70283B60FAC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + A2FDBD967DB8D3C0_B996A70283B60FAC_OFFSET))(this);
	}
};
