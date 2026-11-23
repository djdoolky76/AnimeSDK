#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"

#define A2129105EF27CE24__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int A2129105EF27CE24_TypeDefinitionIndex = 727;

class A2129105EF27CE24 : public ::E379DE61A548837D
{
public:
	::System::UInt32 EF0122FCE8B57425; // 0x38
	::System::UInt32 E43E467F516F27D3; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A2129105EF27CE24__CTOR_OFFSET))(this);
	}
};
