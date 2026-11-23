#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"
#include "unitysdk/E68AA4EB51923C98/FF0E56EEBA1A5A9E.h"

#define B1B100AD728D2B19__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int B1B100AD728D2B19_TypeDefinitionIndex = 343;

class B1B100AD728D2B19 : public ::E379DE61A548837D
{
public:
	::System::Boolean EE132DA2F8A47F04; // 0x38
	::System::Byte _padding0[0x3];
	::E68AA4EB51923C98::FF0E56EEBA1A5A9E E7ED2D5DE9AED651; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B1B100AD728D2B19__CTOR_OFFSET))(this);
	}
};
