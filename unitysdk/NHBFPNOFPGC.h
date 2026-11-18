#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define NHBFPNOFPGC__CTOR_OFFSET UNITYSDK_OFFSET(0x13147440)

inline static constexpr unsigned int NHBFPNOFPGC_TypeDefinitionIndex = 48565;

class NHBFPNOFPGC : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHBFPNOFPGC__CTOR_OFFSET))(this);
	}
};
