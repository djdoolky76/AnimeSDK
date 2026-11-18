#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BIHPBFHEOOA.h"

#define OAIBNHOCOGK__CTOR_OFFSET UNITYSDK_OFFSET(0x1F35BB10)

inline static constexpr unsigned int OAIBNHOCOGK_TypeDefinitionIndex = 28869;

class OAIBNHOCOGK : public ::BIHPBFHEOOA
{
public:
	::System::UInt32 HDGIELLOOEF; // 0x10
	::System::Byte _padding0[0x4];
	::System::UInt64 DMOBAILKKEG; // 0x18
	::System::UInt32 MKGLHHPNCMN; // 0x20
	::System::UInt32 KEGBFANEPBJ; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OAIBNHOCOGK__CTOR_OFFSET))(this);
	}
};
