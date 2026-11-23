#pragma once
#include "unitysdk/unitysdk.h"

#define B856C4B233969463_BFCEE111278C4278_OFFSET UNITYSDK_OFFSET(0x1E2F820)
#define B856C4B233969463__CTOR_OFFSET UNITYSDK_OFFSET(0x1E2F9C0)

inline static constexpr unsigned int B856C4B233969463_TypeDefinitionIndex = 9501;

class B856C4B233969463
{
public:
	::System::Void BFCEE111278C4278(::System::Int32 E8723FA7A432E8B2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + B856C4B233969463_BFCEE111278C4278_OFFSET))(this, E8723FA7A432E8B2);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B856C4B233969463__CTOR_OFFSET))(this);
	}
};
