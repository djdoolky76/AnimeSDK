#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/EventArgs.h"

#define CEEGKMJLNFN__CTOR_OFFSET UNITYSDK_OFFSET(0x199FBA20)

inline static constexpr unsigned int CEEGKMJLNFN_TypeDefinitionIndex = 73504;

class CEEGKMJLNFN : public ::System::EventArgs
{
public:
	::System::Int32 NACGJJKHEJE; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEEGKMJLNFN__CTOR_OFFSET))(this);
	}
};
