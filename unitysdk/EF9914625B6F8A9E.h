#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define EF9914625B6F8A9E_EA28CF291EBB2931_OFFSET UNITYSDK_OFFSET(0x3A50C50)

inline static constexpr unsigned int EF9914625B6F8A9E_TypeDefinitionIndex = 13021;

struct alignas(8) EF9914625B6F8A9E
{
	::System::String* ED9E2646E6374946; // 0x10
	::System::String* A1BAE8DA00165AEB; // 0x18
	::System::String* F25AAE32866D2B5F; // 0x20
	::System::String* BDFBF63CF547F81E; // 0x28
	::System::String* B50DFB6E67885EE5; // 0x30
	::System::UInt64 F0916DC157635DA7; // 0x38

	::System::String* EA28CF291EBB2931()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EF9914625B6F8A9E_EA28CF291EBB2931_OFFSET))(this);
	}
};
