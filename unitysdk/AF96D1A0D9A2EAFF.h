#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/A8F73F74A274B55E.h"
#include "unitysdk/AD61077CFCBEFAEA.h"
#include "unitysdk/System/Nullable_1.h"

#define AF96D1A0D9A2EAFF__CTOR_OFFSET UNITYSDK_OFFSET(0x16591D0)

inline static constexpr unsigned int AF96D1A0D9A2EAFF_TypeDefinitionIndex = 76;

class AF96D1A0D9A2EAFF : public ::A8F73F74A274B55E
{
public:
	::System::Nullable_1<::AD61077CFCBEFAEA> BB20B12F70564FEC; // 0x18
	::System::Byte _padding0[0x8];
	::System::Nullable_1<::System::UInt32> F5B4397813D1EE72; // 0x28
	::System::Single B17B9B9C54637FC1; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AF96D1A0D9A2EAFF__CTOR_OFFSET))(this);
	}
};
