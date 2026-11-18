#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DJPEEJFNCHL;

#define CJLIAOJCHIH_BCGAAJFGGHB_IEHOEMIGBIN_OFFSET UNITYSDK_OFFSET(0x19A13550)
#define CJLIAOJCHIH_BCGAAJFGGHB__CTOR_OFFSET UNITYSDK_OFFSET(0x19A13540)

inline static constexpr unsigned int CJLIAOJCHIH_BCGAAJFGGHB_TypeDefinitionIndex = 51076;

class CJLIAOJCHIH_BCGAAJFGGHB : public ::System::Object
{
public:
	::System::Int32 AOCOIDIMLIH; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJLIAOJCHIH_BCGAAJFGGHB__CTOR_OFFSET))(this);
	}

	::System::Boolean IEHOEMIGBIN(::DJPEEJFNCHL* FGMNCNLGPAP)
	{
		return ((::System::Boolean(*)(::PVOID, ::DJPEEJFNCHL*))((::PBYTE)hIl2Cpp + CJLIAOJCHIH_BCGAAJFGGHB_IEHOEMIGBIN_OFFSET))(this, FGMNCNLGPAP);
	}
};
