#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/B7B8795FB90C86A7.h"
#include "unitysdk/BD3E6890C9C82A9E.h"

namespace System { class String; }

#define A3EF9FDECB9E2A16_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x237F850)
#define A3EF9FDECB9E2A16__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int A3EF9FDECB9E2A16_TypeDefinitionIndex = 3444;

class A3EF9FDECB9E2A16 : public ::B7B8795FB90C86A7
{
public:
	::System::String* A96D4483E12B0BC4; // 0x10
	::System::Single FC2D4D29FF16DEBF; // 0x18
	::System::Byte _padding0[0x4];
	::System::String* BF40BF7ECDC2BE93; // 0x20
	::System::Single ED3215AB9CAA258A; // 0x28
	::System::Single FF0ACC030F5F47FC; // 0x2C
	::System::Single A35C2904B1F00BB7; // 0x30
	::System::Single E286AC578125D8B9; // 0x34
	::System::Single BB4FDA7347F4769F; // 0x38
	::System::Boolean A8DF79FC22E0BCFF; // 0x3C
	::System::Byte _padding1[0x3];
	::System::Single F920F521DB9B5E00; // 0x40
	::System::Boolean FBBDAB0EE33DBCE6; // 0x44
	::System::Boolean B42115D05845F9B6; // 0x45
	::System::Byte _padding2[0x2];
	::System::Single E93700DF58C8770B; // 0x48

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::A3EF9FDECB9E2A16*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::A3EF9FDECB9E2A16*&))((::PBYTE)hIl2Cpp + A3EF9FDECB9E2A16_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A3EF9FDECB9E2A16__CTOR_OFFSET))(this);
	}
};
