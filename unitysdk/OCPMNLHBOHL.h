#pragma once
#include "unitysdk/unitysdk.h"

#define OCPMNLHBOHL_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x13A4BA50)
#define OCPMNLHBOHL_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x13A4BBF0)
#define OCPMNLHBOHL__CTOR_OFFSET UNITYSDK_OFFSET(0x13A4BB90)

inline static constexpr unsigned int OCPMNLHBOHL_TypeDefinitionIndex = 56087;

class OCPMNLHBOHL
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCPMNLHBOHL__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCPMNLHBOHL_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCPMNLHBOHL_GDEOPIBNOIN_OFFSET))(this);
	}
};
