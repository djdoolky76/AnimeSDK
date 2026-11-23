#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AD41610DAE684581.h"
#include "unitysdk/E379DE61A548837D.h"

class AB642D1382756991;

#define A76C2406379B1E24__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int A76C2406379B1E24_TypeDefinitionIndex = 9851;

class A76C2406379B1E24 : public ::E379DE61A548837D
{
public:
	::AB642D1382756991* A76513460B029719; // 0x38
	::AD41610DAE684581 EF5E788F79595BE7; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A76C2406379B1E24__CTOR_OFFSET))(this);
	}
};
