#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BIHPBFHEOOA.h"

#define JLEDOMABOFN__CTOR_OFFSET UNITYSDK_OFFSET(0x1F019E40)

inline static constexpr unsigned int JLEDOMABOFN_TypeDefinitionIndex = 36084;

class JLEDOMABOFN : public ::BIHPBFHEOOA
{
public:
	::System::UInt32 HDGIELLOOEF; // 0x10
	::System::Byte _padding0[0x4];
	::System::UInt64 MJCDFNFPHFC; // 0x18
	::System::UInt64 FBPMDMLPJHL; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLEDOMABOFN__CTOR_OFFSET))(this);
	}
};
