#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NILAHGKDJNN.h"

#define KDGDCHFPKNB__CTOR_OFFSET UNITYSDK_OFFSET(0x1860A920)

inline static constexpr unsigned int KDGDCHFPKNB_TypeDefinitionIndex = 49232;

class KDGDCHFPKNB : public ::NILAHGKDJNN
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDGDCHFPKNB__CTOR_OFFSET))(this);
	}
};
