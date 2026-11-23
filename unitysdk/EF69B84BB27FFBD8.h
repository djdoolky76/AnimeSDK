#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/A9A4285156E8A2A9.h"
#include "unitysdk/AD41610DAE684581.h"
#include "unitysdk/E379DE61A548837D.h"

class AB642D1382756991;
class FA14EE9263C422FF;

#define EF69B84BB27FFBD8__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int EF69B84BB27FFBD8_TypeDefinitionIndex = 4250;

class EF69B84BB27FFBD8 : public ::E379DE61A548837D
{
public:
	::AB642D1382756991* E927034E06260979; // 0x38
	::FA14EE9263C422FF* E917F0654AF94996; // 0x40
	::AD41610DAE684581 EE8B505B9D2B1840; // 0x48
	::A9A4285156E8A2A9 A0FE9BD88AEBF8D9; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EF69B84BB27FFBD8__CTOR_OFFSET))(this);
	}
};
