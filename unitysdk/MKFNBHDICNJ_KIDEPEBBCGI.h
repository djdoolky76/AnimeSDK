#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FBHPDPBIGPK;

#define MKFNBHDICNJ_KIDEPEBBCGI_IBELLFCHAGO_OFFSET UNITYSDK_OFFSET(0x11F56FC0)
#define MKFNBHDICNJ_KIDEPEBBCGI__CTOR_OFFSET UNITYSDK_OFFSET(0x11F56FB0)

inline static constexpr unsigned int MKFNBHDICNJ_KIDEPEBBCGI_TypeDefinitionIndex = 61350;

class MKFNBHDICNJ_KIDEPEBBCGI : public ::System::Object
{
public:
	::System::UInt32 EBLLOAONOIP; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKFNBHDICNJ_KIDEPEBBCGI__CTOR_OFFSET))(this);
	}

	::System::Boolean IBELLFCHAGO(::FBHPDPBIGPK* PMLAACAFPDO)
	{
		return ((::System::Boolean(*)(::PVOID, ::FBHPDPBIGPK*))((::PBYTE)hIl2Cpp + MKFNBHDICNJ_KIDEPEBBCGI_IBELLFCHAGO_OFFSET))(this, PMLAACAFPDO);
	}
};
