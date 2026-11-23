#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define EAB7565C06CA4D06__CTOR_OFFSET UNITYSDK_OFFSET(0x43E6DC0)

inline static constexpr unsigned int EAB7565C06CA4D06_TypeDefinitionIndex = 19397;

class EAB7565C06CA4D06 : public ::System::Object
{
public:
	::System::Int32 AB5DECEBD76014D6; // 0x10
	::System::Single F3DC7972E503B49D; // 0x14
	::System::Single BFB24304AC1DE250; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EAB7565C06CA4D06__CTOR_OFFSET))(this);
	}
};
