#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/EventArgs.h"

#define LBINDNILEOL__CTOR_OFFSET UNITYSDK_OFFSET(0x158072F0)

inline static constexpr unsigned int LBINDNILEOL_TypeDefinitionIndex = 88747;

class LBINDNILEOL : public ::System::EventArgs
{
public:
	::System::Int32 ANNAENDJPBH; // 0x10
	::System::Int32 AFJDPODPBOF; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBINDNILEOL__CTOR_OFFSET))(this);
	}
};
