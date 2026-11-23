#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"

#define BBC300E4AE32A165__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int BBC300E4AE32A165_TypeDefinitionIndex = 360;

class BBC300E4AE32A165 : public ::E379DE61A548837D
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBC300E4AE32A165__CTOR_OFFSET))(this);
	}
};
