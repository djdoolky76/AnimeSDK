#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/EventArgs.h"

#define KMEBAAKBAHD__CTOR_OFFSET UNITYSDK_OFFSET(0x157F9E10)

inline static constexpr unsigned int KMEBAAKBAHD_TypeDefinitionIndex = 69344;

class KMEBAAKBAHD : public ::System::EventArgs
{
public:
	::System::UInt32 NJNCGJLHLKC; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMEBAAKBAHD__CTOR_OFFSET))(this);
	}
};
