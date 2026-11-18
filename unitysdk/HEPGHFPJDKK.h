#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define HEPGHFPJDKK__CTOR_OFFSET UNITYSDK_OFFSET(0x146F7630)

inline static constexpr unsigned int HEPGHFPJDKK_TypeDefinitionIndex = 82096;

class HEPGHFPJDKK : public ::System::Attribute
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEPGHFPJDKK__CTOR_OFFSET))(this);
	}
};
