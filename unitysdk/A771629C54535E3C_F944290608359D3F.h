#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define A771629C54535E3C_F944290608359D3F_EA28CF291EBB2931_OFFSET UNITYSDK_OFFSET(0x38E4360)

inline static constexpr unsigned int A771629C54535E3C_F944290608359D3F_TypeDefinitionIndex = 11800;

struct alignas(8) A771629C54535E3C_F944290608359D3F
{
	::System::String* ED9E2646E6374946; // 0x10
	::System::String* A1BAE8DA00165AEB; // 0x18
	::System::String* F25AAE32866D2B5F; // 0x20
	::System::String* BDFBF63CF547F81E; // 0x28
	::System::String* B50DFB6E67885EE5; // 0x30
	::System::UInt64 F0916DC157635DA7; // 0x38

	::System::String* EA28CF291EBB2931()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + A771629C54535E3C_F944290608359D3F_EA28CF291EBB2931_OFFSET))(this);
	}
};
