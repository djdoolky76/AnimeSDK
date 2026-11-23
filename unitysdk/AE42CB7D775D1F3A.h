#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/B39AAAD1233537D7/FAA21042FB3840BE.h"
#include "unitysdk/E379DE61A548837D.h"

#define AE42CB7D775D1F3A__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int AE42CB7D775D1F3A_TypeDefinitionIndex = 1321;

class AE42CB7D775D1F3A : public ::E379DE61A548837D
{
public:
	::B39AAAD1233537D7::FAA21042FB3840BE AD13B6156463D5F4; // 0x38
	::System::Boolean A5107AFC5256BD7E; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AE42CB7D775D1F3A__CTOR_OFFSET))(this);
	}
};
