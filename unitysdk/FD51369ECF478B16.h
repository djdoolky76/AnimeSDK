#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define FD51369ECF478B16_A88C5CFA71796B2B_OFFSET UNITYSDK_OFFSET(0x3BBFE80)
#define FD51369ECF478B16_A99604058CED76A6_OFFSET UNITYSDK_OFFSET(0x3BBFE30)

inline static constexpr unsigned int FD51369ECF478B16_TypeDefinitionIndex = 11159;

class FD51369ECF478B16 : public ::System::Object
{
public:
	static ::System::String* A99604058CED76A6(::System::Int32 A30F8FB91C509813)
	{
		return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + FD51369ECF478B16_A99604058CED76A6_OFFSET))(A30F8FB91C509813);
	}

	static ::System::Int32 A88C5CFA71796B2B(::System::Int32 B3F53603F39CD6A9)
	{
		return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + FD51369ECF478B16_A88C5CFA71796B2B_OFFSET))(B3F53603F39CD6A9);
	}
};
