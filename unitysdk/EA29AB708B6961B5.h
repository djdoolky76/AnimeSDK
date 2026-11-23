#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FA670AB06D97F213.h"
#include "unitysdk/E12F55A5FCCCF1EC.h"

#define EA29AB708B6961B5_BAF1A5AD9A18D2CF_OFFSET UNITYSDK_OFFSET(0x17C7430)
#define EA29AB708B6961B5__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int EA29AB708B6961B5_TypeDefinitionIndex = 963;

class EA29AB708B6961B5 : public ::FA670AB06D97F213
{
public:
	::System::Void BAF1A5AD9A18D2CF(::E12F55A5FCCCF1EC F2BFEBDE1D46CE00)
	{
		return ((::System::Void(*)(::PVOID, ::E12F55A5FCCCF1EC))((::PBYTE)hIl2Cpp + EA29AB708B6961B5_BAF1A5AD9A18D2CF_OFFSET))(this, F2BFEBDE1D46CE00);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EA29AB708B6961B5__CTOR_OFFSET))(this);
	}
};
