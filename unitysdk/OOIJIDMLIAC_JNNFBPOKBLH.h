#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OOIJIDMLIAC_ILLEJLHKDPI;

#define OOIJIDMLIAC_JNNFBPOKBLH_AAELEKHOGGL_OFFSET UNITYSDK_OFFSET(0x178A4EE0)
#define OOIJIDMLIAC_JNNFBPOKBLH__CTOR_OFFSET UNITYSDK_OFFSET(0x178A4ED0)

inline static constexpr unsigned int OOIJIDMLIAC_JNNFBPOKBLH_TypeDefinitionIndex = 70898;

class OOIJIDMLIAC_JNNFBPOKBLH : public ::System::Object
{
public:
	::OOIJIDMLIAC_ILLEJLHKDPI* FGBNBFHOKAA; // 0x10
	::System::Int32 GLPGONDHMLI; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOIJIDMLIAC_JNNFBPOKBLH__CTOR_OFFSET))(this);
	}

	::System::Boolean AAELEKHOGGL()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OOIJIDMLIAC_JNNFBPOKBLH_AAELEKHOGGL_OFFSET))(this);
	}
};
