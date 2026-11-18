#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/PIFHAHFCMEL.h"

class IJMEEDEBNCH;

#define IJMEEDEBNCH_INHKKBLJAMP_OLLNPJCGECN_OFFSET UNITYSDK_OFFSET(0x1ACB6E00)
#define IJMEEDEBNCH_INHKKBLJAMP__CTOR_OFFSET UNITYSDK_OFFSET(0x1ACB6DF0)

inline static constexpr unsigned int IJMEEDEBNCH_INHKKBLJAMP_TypeDefinitionIndex = 69896;

class IJMEEDEBNCH_INHKKBLJAMP : public ::System::Object
{
public:
	::IJMEEDEBNCH* KLHPEBKNIFB; // 0x10
	::System::Int32 CEFPFEHHJHB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJMEEDEBNCH_INHKKBLJAMP__CTOR_OFFSET))(this);
	}

	::System::Void OLLNPJCGECN(::PIFHAHFCMEL JKBLDFBGBPK)
	{
		return ((::System::Void(*)(::PVOID, ::PIFHAHFCMEL))((::PBYTE)hIl2Cpp + IJMEEDEBNCH_INHKKBLJAMP_OLLNPJCGECN_OFFSET))(this, JKBLDFBGBPK);
	}
};
