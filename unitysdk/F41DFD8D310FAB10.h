#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AB07E24B584983C1.h"
#include "unitysdk/E12F55A5FCCCF1EC.h"

#define F41DFD8D310FAB10_E46F0F16C063D636_OFFSET UNITYSDK_OFFSET(0x1D59B00)
#define F41DFD8D310FAB10__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int F41DFD8D310FAB10_TypeDefinitionIndex = 10062;

class F41DFD8D310FAB10 : public ::AB07E24B584983C1
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F41DFD8D310FAB10__CTOR_OFFSET))(this);
	}

	::System::Void E46F0F16C063D636(::E12F55A5FCCCF1EC EB5670302F34D4B7)
	{
		return ((::System::Void(*)(::PVOID, ::E12F55A5FCCCF1EC))((::PBYTE)hIl2Cpp + F41DFD8D310FAB10_E46F0F16C063D636_OFFSET))(this, EB5670302F34D4B7);
	}
};
