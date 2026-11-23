#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define B2E7478EB4BD4928__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int B2E7478EB4BD4928_TypeDefinitionIndex = 20142;

class B2E7478EB4BD4928 : public ::System::Object
{
public:
	::System::Int64 F2AD1361F0B596C5; // 0x10
	::System::Int32 FA97BCC8B0C3172A; // 0x18
	::System::Int32 E852C9848302E45A; // 0x1C
	::System::Int32 B778817A0B5D9D9B; // 0x20
	::System::Byte _padding0[0x4];
	::B2E7478EB4BD4928* B318CC7627FE11D4; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B2E7478EB4BD4928__CTOR_OFFSET))(this);
	}
};
