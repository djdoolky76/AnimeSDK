#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class KACKDABLHCM;

#define KCBPBDPBCCG_CJHJLHNHOKN_EBIDPEOOOMI_OFFSET UNITYSDK_OFFSET(0x14FCC410)
#define KCBPBDPBCCG_CJHJLHNHOKN__CTOR_OFFSET UNITYSDK_OFFSET(0x14FCC400)

inline static constexpr unsigned int KCBPBDPBCCG_CJHJLHNHOKN_TypeDefinitionIndex = 42249;

class KCBPBDPBCCG_CJHJLHNHOKN : public ::System::Object
{
public:
	::KACKDABLHCM* IKAFIFLPLGP; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCBPBDPBCCG_CJHJLHNHOKN__CTOR_OFFSET))(this);
	}

	::System::Boolean EBIDPEOOOMI(::KACKDABLHCM* HAAEBCOBKFF)
	{
		return ((::System::Boolean(*)(::PVOID, ::KACKDABLHCM*))((::PBYTE)hIl2Cpp + KCBPBDPBCCG_CJHJLHNHOKN_EBIDPEOOOMI_OFFSET))(this, HAAEBCOBKFF);
	}
};
