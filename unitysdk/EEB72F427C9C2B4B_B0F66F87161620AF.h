#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define EEB72F427C9C2B4B_B0F66F87161620AF_FA1AB4ADC44A18C2_OFFSET UNITYSDK_OFFSET(0x21F6020)
#define EEB72F427C9C2B4B_B0F66F87161620AF__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int EEB72F427C9C2B4B_B0F66F87161620AF_TypeDefinitionIndex = 9005;

class EEB72F427C9C2B4B_B0F66F87161620AF : public ::System::Object
{
public:
	::System::Int32 B2932404921600E9; // 0x10
	::System::Byte _padding0[0x4];
	::System::String* FAA648B75153A906; // 0x18
	::System::String* B6EB739A2A7A26A8; // 0x20
	::System::String* B07D4E30695915E8; // 0x28
	::System::String* E1A07505C2EAF1F6; // 0x30
	::System::String* BE4EDC33E5517DFC; // 0x38
	::System::String* B45E61F73289BD83; // 0x40
	::System::String* F626D9290C9C6A47; // 0x48
	::System::String* A5C653751F3AEC9A; // 0x50
	::System::String* F2AAEFD88AE23D07; // 0x58

	::System::String* FA1AB4ADC44A18C2()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EEB72F427C9C2B4B_B0F66F87161620AF_FA1AB4ADC44A18C2_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEB72F427C9C2B4B_B0F66F87161620AF__CTOR_OFFSET))(this);
	}
};
