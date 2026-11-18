#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class HKLPMEAJCLP_DAMJCLDJKNI;

#define HKLPMEAJCLP_IHCIGPALKBL__CTOR_OFFSET UNITYSDK_OFFSET(0x16CF8920)

inline static constexpr unsigned int HKLPMEAJCLP_IHCIGPALKBL_TypeDefinitionIndex = 91258;

class HKLPMEAJCLP_IHCIGPALKBL : public ::System::Object
{
public:
	::HKLPMEAJCLP_DAMJCLDJKNI* NGGNKKAMDGH; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKLPMEAJCLP_IHCIGPALKBL__CTOR_OFFSET))(this);
	}
};
