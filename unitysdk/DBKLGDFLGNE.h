#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class KPNIFGIKELE;

#define DBKLGDFLGNE_HBGOOGALMJP_OFFSET UNITYSDK_OFFSET(0x1A1CEAD0)
#define DBKLGDFLGNE__CTOR_OFFSET UNITYSDK_OFFSET(0x3BCD30)

inline static constexpr unsigned int DBKLGDFLGNE_TypeDefinitionIndex = 57789;

struct alignas(4) DBKLGDFLGNE
{
	::System::Boolean AFLBLMOBOBM; // 0x10

	::System::Void _ctor(::System::Boolean AFLBLMOBOBM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DBKLGDFLGNE__CTOR_OFFSET))(this, AFLBLMOBOBM);
	}

	/*
	static ::DBKLGDFLGNE HBGOOGALMJP(::KPNIFGIKELE* IKHJEGECGJA)
	{
		return ((::DBKLGDFLGNE(*)(::KPNIFGIKELE*))((::PBYTE)hIl2Cpp + DBKLGDFLGNE_HBGOOGALMJP_OFFSET))(IKHJEGECGJA);
	}
	*/
};
