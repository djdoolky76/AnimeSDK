#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class JOCCCDLFOPJ;

#define DJGNOCOMNKN_EHOPCGKNOJN_OFFSET UNITYSDK_OFFSET(0x134484B0)
#define DJGNOCOMNKN_OCAGHENHOPL_OFFSET UNITYSDK_OFFSET(0x13448540)
#define DJGNOCOMNKN__CTOR_OFFSET UNITYSDK_OFFSET(0x13448640)

inline static constexpr unsigned int DJGNOCOMNKN_TypeDefinitionIndex = 38320;

class DJGNOCOMNKN : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJGNOCOMNKN__CTOR_OFFSET))(this);
	}

	::JOCCCDLFOPJ* EHOPCGKNOJN()
	{
		return ((::JOCCCDLFOPJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + DJGNOCOMNKN_EHOPCGKNOJN_OFFSET))(this);
	}

	::System::Void OCAGHENHOPL(::JOCCCDLFOPJ* BOBIKBDKFCK)
	{
		return ((::System::Void(*)(::PVOID, ::JOCCCDLFOPJ*))((::PBYTE)hIl2Cpp + DJGNOCOMNKN_OCAGHENHOPL_OFFSET))(this, BOBIKBDKFCK);
	}
};
