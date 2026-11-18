#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/EventArgs.h"

#define PHLNLDGLCFL__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2A77F0)

inline static constexpr unsigned int PHLNLDGLCFL_TypeDefinitionIndex = 91153;

class PHLNLDGLCFL : public ::System::EventArgs
{
public:
	::System::Int32 DMAKFNNEEGD; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHLNLDGLCFL__CTOR_OFFSET))(this);
	}
};
