#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"

#define BDEF7DA5EE5756C5__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int BDEF7DA5EE5756C5_TypeDefinitionIndex = 1944;

class BDEF7DA5EE5756C5 : public ::E379DE61A548837D
{
public:
	::System::Boolean EA002D4CF421FB09; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDEF7DA5EE5756C5__CTOR_OFFSET))(this);
	}
};
