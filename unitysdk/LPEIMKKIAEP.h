#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define LPEIMKKIAEP_DKKIMAHIPED_OFFSET UNITYSDK_OFFSET(0x1567ABC0)
#define LPEIMKKIAEP_NOINIGMMOBE_OFFSET UNITYSDK_OFFSET(0x1567AC00)
#define LPEIMKKIAEP__CTOR_OFFSET UNITYSDK_OFFSET(0x1567AC40)

inline static constexpr unsigned int LPEIMKKIAEP_TypeDefinitionIndex = 49614;

class LPEIMKKIAEP : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPEIMKKIAEP__CTOR_OFFSET))(this);
	}

	::System::Void DKKIMAHIPED()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPEIMKKIAEP_DKKIMAHIPED_OFFSET))(this);
	}

	::System::Void NOINIGMMOBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPEIMKKIAEP_NOINIGMMOBE_OFFSET))(this);
	}
};
