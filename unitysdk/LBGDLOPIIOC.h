#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"

#define LBGDLOPIIOC_ANABLKFNCLC_OFFSET UNITYSDK_OFFSET(0x1793F3C0)
#define LBGDLOPIIOC_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x1793F2C0)
#define LBGDLOPIIOC_BCAGODNMMMB_OFFSET UNITYSDK_OFFSET(0x1793F450)
#define LBGDLOPIIOC_PNHPDOBPKKE_OFFSET UNITYSDK_OFFSET(0x1793F380)
#define LBGDLOPIIOC__CTOR_OFFSET UNITYSDK_OFFSET(0x1793F340)

inline static constexpr unsigned int LBGDLOPIIOC_TypeDefinitionIndex = 79844;

class LBGDLOPIIOC
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBGDLOPIIOC__CTOR_OFFSET))(this);
	}

	::System::Void BBOMJDBNHIC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBGDLOPIIOC_BBOMJDBNHIC_OFFSET))(this);
	}

	::System::Void PNHPDOBPKKE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBGDLOPIIOC_PNHPDOBPKKE_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask ANABLKFNCLC()
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + LBGDLOPIIOC_ANABLKFNCLC_OFFSET))(this);
	}

	::System::Boolean BCAGODNMMMB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LBGDLOPIIOC_BCAGODNMMMB_OFFSET))(this);
	}
};
