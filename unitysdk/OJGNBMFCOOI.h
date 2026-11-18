#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BIHPBFHEOOA.h"

class GOHMGCMIACH;

#define OJGNBMFCOOI__CTOR_OFFSET UNITYSDK_OFFSET(0x1CBCE790)

inline static constexpr unsigned int OJGNBMFCOOI_TypeDefinitionIndex = 94115;

class OJGNBMFCOOI : public ::BIHPBFHEOOA
{
public:
	::GOHMGCMIACH* JLIIPCAFIMH; // 0x10
	::System::UInt32 MKGLHHPNCMN; // 0x18
	::System::UInt32 KKMENMCMMBN; // 0x1C
	::System::UInt32 KEGBFANEPBJ; // 0x20
	::System::UInt32 HDGIELLOOEF; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJGNBMFCOOI__CTOR_OFFSET))(this);
	}
};
