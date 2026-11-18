#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/EventArgs.h"

#define OIJKFAJFILL__CTOR_OFFSET UNITYSDK_OFFSET(0x16F7F180)

inline static constexpr unsigned int OIJKFAJFILL_TypeDefinitionIndex = 57718;

class OIJKFAJFILL : public ::System::EventArgs
{
public:
	::System::Int32 AFOIMMPBIFA; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIJKFAJFILL__CTOR_OFFSET))(this);
	}
};
