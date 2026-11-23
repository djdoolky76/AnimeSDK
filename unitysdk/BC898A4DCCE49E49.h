#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"

#define BC898A4DCCE49E49__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int BC898A4DCCE49E49_TypeDefinitionIndex = 4862;

class BC898A4DCCE49E49 : public ::E379DE61A548837D
{
public:
	::System::UInt32 F611050E875A2C49; // 0x38
	::System::Boolean B4C639C5FA574CA0; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BC898A4DCCE49E49__CTOR_OFFSET))(this);
	}
};
