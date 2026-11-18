#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MFFFDDHPBJC;

#define MFFFDDHPBJC_APIBJLJKDIK_PCEEIPENJKB_OFFSET UNITYSDK_OFFSET(0x15E2A980)
#define MFFFDDHPBJC_APIBJLJKDIK__CTOR_OFFSET UNITYSDK_OFFSET(0x15E2A970)

inline static constexpr unsigned int MFFFDDHPBJC_APIBJLJKDIK_TypeDefinitionIndex = 59582;

class MFFFDDHPBJC_APIBJLJKDIK : public ::System::Object
{
public:
	::MFFFDDHPBJC* KLHPEBKNIFB; // 0x10
	::System::Int32 ABHBKFJKINO; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFFFDDHPBJC_APIBJLJKDIK__CTOR_OFFSET))(this);
	}

	::System::Void PCEEIPENJKB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFFFDDHPBJC_APIBJLJKDIK_PCEEIPENJKB_OFFSET))(this);
	}
};
