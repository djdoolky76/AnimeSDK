#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define PLFANKPBCJB__CTOR_OFFSET UNITYSDK_OFFSET(0x1371FC30)

inline static constexpr unsigned int PLFANKPBCJB_TypeDefinitionIndex = 49255;

class PLFANKPBCJB : public ::System::Object
{
public:
	::System::Int32 BOHMJNMLAKO; // 0x10
	::System::Int32 FHJEHEFFJAL; // 0x14
	::System::Int32 KMHGJDAJCDG; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLFANKPBCJB__CTOR_OFFSET))(this);
	}
};
