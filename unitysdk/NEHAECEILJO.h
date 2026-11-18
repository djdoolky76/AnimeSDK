#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/COMMFDFJMHF.h"

class CCGKLCKJFPH;

#define NEHAECEILJO_DEJBOKDOGCD_OFFSET UNITYSDK_OFFSET(0x11F6FF10)
#define NEHAECEILJO_MKGBAENPFIK_OFFSET UNITYSDK_OFFSET(0x11F6FFB0)
#define NEHAECEILJO__CTOR_OFFSET UNITYSDK_OFFSET(0x11F6FFA0)

inline static constexpr unsigned int NEHAECEILJO_TypeDefinitionIndex = 40001;

class NEHAECEILJO : public ::COMMFDFJMHF
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEHAECEILJO__CTOR_OFFSET))(this);
	}

	::System::Void DEJBOKDOGCD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEHAECEILJO_DEJBOKDOGCD_OFFSET))(this);
	}

	::NEHAECEILJO* MKGBAENPFIK(::System::Int32 COMDNFILAIC, ::CCGKLCKJFPH* EBALKHIEICC)
	{
		return ((::NEHAECEILJO*(*)(::PVOID, ::System::Int32, ::CCGKLCKJFPH*))((::PBYTE)hIl2Cpp + NEHAECEILJO_MKGBAENPFIK_OFFSET))(this, COMDNFILAIC, EBALKHIEICC);
	}
};
