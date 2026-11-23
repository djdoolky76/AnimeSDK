#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/A8F73F74A274B55E.h"
#include "unitysdk/AD61077CFCBEFAEA.h"
#include "unitysdk/System/Nullable_1.h"

#define A8ECA7BC3EB9F6EA__CTOR_OFFSET UNITYSDK_OFFSET(0x16591D0)

inline static constexpr unsigned int A8ECA7BC3EB9F6EA_TypeDefinitionIndex = 1009;

class A8ECA7BC3EB9F6EA : public ::A8F73F74A274B55E
{
public:
	::System::Nullable_1<::AD61077CFCBEFAEA> BB20B12F70564FEC; // 0x18
	::System::Byte _padding0[0x8];
	::System::Nullable_1<::System::UInt32> F5B4397813D1EE72; // 0x28
	::System::Single B17B9B9C54637FC1; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A8ECA7BC3EB9F6EA__CTOR_OFFSET))(this);
	}
};
