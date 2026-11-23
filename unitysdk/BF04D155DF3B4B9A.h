#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class EAABAD2D537781FD;

#define BF04D155DF3B4B9A_E6A4EDFB781D1DCC_OFFSET UNITYSDK_OFFSET(0x3B99AE0)
#define BF04D155DF3B4B9A__CTOR_1_OFFSET UNITYSDK_OFFSET(0x3B99B70)
#define BF04D155DF3B4B9A__CTOR_OFFSET UNITYSDK_OFFSET(0x3B99BA0)

inline static constexpr unsigned int BF04D155DF3B4B9A_TypeDefinitionIndex = 11101;

class BF04D155DF3B4B9A : public ::System::Object
{
public:
	::EAABAD2D537781FD* A7394C7D37AB4545; // 0x10
	::System::Int32 FD64F5629A729313; // 0x18
	::System::Byte _padding0[0x4];
	::System::Int64 E7F23FC8E22063B8; // 0x20

	::System::Void E6A4EDFB781D1DCC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BF04D155DF3B4B9A_E6A4EDFB781D1DCC_OFFSET))(this);
	}

	::System::Void _ctor(::EAABAD2D537781FD* E8B633998087BED4, ::System::Int32 A96828B7EA422A92, ::System::Int64 F74A819D3F10B9E7)
	{
		return ((::System::Void(*)(::PVOID, ::EAABAD2D537781FD*, ::System::Int32, ::System::Int64))((::PBYTE)hIl2Cpp + BF04D155DF3B4B9A__CTOR_OFFSET))(this, E8B633998087BED4, A96828B7EA422A92, F74A819D3F10B9E7);
	}

	::System::Void _ctor_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BF04D155DF3B4B9A__CTOR_1_OFFSET))(this);
	}
};
