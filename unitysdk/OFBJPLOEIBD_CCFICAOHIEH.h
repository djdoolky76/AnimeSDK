#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class GGFIENDHNMB;

#define OFBJPLOEIBD_CCFICAOHIEH_PPGGILHBIPJ_OFFSET UNITYSDK_OFFSET(0x1CFF8BF0)
#define OFBJPLOEIBD_CCFICAOHIEH__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFF8BE0)

inline static constexpr unsigned int OFBJPLOEIBD_CCFICAOHIEH_TypeDefinitionIndex = 12601;

class OFBJPLOEIBD_CCFICAOHIEH : public ::System::Object
{
public:
	::System::Int32 DAGKBMAKPID; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFBJPLOEIBD_CCFICAOHIEH__CTOR_OFFSET))(this);
	}

	::System::Boolean PPGGILHBIPJ(::GGFIENDHNMB* HAAEBCOBKFF)
	{
		return ((::System::Boolean(*)(::PVOID, ::GGFIENDHNMB*))((::PBYTE)hIl2Cpp + OFBJPLOEIBD_CCFICAOHIEH_PPGGILHBIPJ_OFFSET))(this, HAAEBCOBKFF);
	}
};
