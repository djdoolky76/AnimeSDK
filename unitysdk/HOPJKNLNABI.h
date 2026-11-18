#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FOBKFEMNJBH.h"

#define HOPJKNLNABI_HFFLKDGFMML_OFFSET UNITYSDK_OFFSET(0x15BE4160)
#define HOPJKNLNABI_OLOLGJIEEPK_OFFSET UNITYSDK_OFFSET(0x15BE4110)
#define HOPJKNLNABI__CTOR_OFFSET UNITYSDK_OFFSET(0x15BE4150)

inline static constexpr unsigned int HOPJKNLNABI_TypeDefinitionIndex = 76319;

class HOPJKNLNABI : public ::FOBKFEMNJBH
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOPJKNLNABI__CTOR_OFFSET))(this);
	}

	::System::Boolean OLOLGJIEEPK()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOPJKNLNABI_OLOLGJIEEPK_OFFSET))(this);
	}

	::System::Boolean HFFLKDGFMML()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOPJKNLNABI_HFFLKDGFMML_OFFSET))(this);
	}
};
