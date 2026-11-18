#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DACAFMBDDAD.h"
#include "unitysdk/System/Object.h"

#define HPCONFEPCPD_MGCKCNJDHJN_CGFCGHPGAJL_OFFSET UNITYSDK_OFFSET(0x15E8F580)
#define HPCONFEPCPD_MGCKCNJDHJN_KAGAKFICBEO_OFFSET UNITYSDK_OFFSET(0x15E8F590)
#define HPCONFEPCPD_MGCKCNJDHJN_OKGKIBDGKNF_OFFSET UNITYSDK_OFFSET(0x15E8F5A0)
#define HPCONFEPCPD_MGCKCNJDHJN__CTOR_OFFSET UNITYSDK_OFFSET(0x15E8C6C0)

inline static constexpr unsigned int HPCONFEPCPD_MGCKCNJDHJN_TypeDefinitionIndex = 90920;

class HPCONFEPCPD_MGCKCNJDHJN : public ::System::Object
{
public:
	::DACAFMBDDAD MKEJJJHLHFD; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPCONFEPCPD_MGCKCNJDHJN__CTOR_OFFSET))(this);
	}

	::System::Single CGFCGHPGAJL()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + HPCONFEPCPD_MGCKCNJDHJN_CGFCGHPGAJL_OFFSET))(this);
	}

	::System::Single KAGAKFICBEO()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + HPCONFEPCPD_MGCKCNJDHJN_KAGAKFICBEO_OFFSET))(this);
	}

	::System::Single OKGKIBDGKNF()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + HPCONFEPCPD_MGCKCNJDHJN_OKGKIBDGKNF_OFFSET))(this);
	}
};
