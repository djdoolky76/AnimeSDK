#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BD4FBD8A8981BF41.h"

#define B1D6B904670033A3_BC03FEF9B8CD2206_OFFSET UNITYSDK_OFFSET(0x1B06E00)
#define B1D6B904670033A3__CTOR_OFFSET UNITYSDK_OFFSET(0x1B06DE0)

inline static constexpr unsigned int B1D6B904670033A3_TypeDefinitionIndex = 2049;

class B1D6B904670033A3 : public ::BD4FBD8A8981BF41
{
public:
	::System::UInt32 A76788F41232A94D; // 0x138

	::System::Void BC03FEF9B8CD2206(::System::UInt32 E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + B1D6B904670033A3_BC03FEF9B8CD2206_OFFSET))(this, E937D4885DAA1AE8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B1D6B904670033A3__CTOR_OFFSET))(this);
	}
};
