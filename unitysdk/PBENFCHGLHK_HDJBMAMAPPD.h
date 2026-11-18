#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CJIEIHEDMME;

#define PBENFCHGLHK_HDJBMAMAPPD_IDMCLKNFCJC_OFFSET UNITYSDK_OFFSET(0x13A830D0)
#define PBENFCHGLHK_HDJBMAMAPPD__CTOR_OFFSET UNITYSDK_OFFSET(0x13A830C0)

inline static constexpr unsigned int PBENFCHGLHK_HDJBMAMAPPD_TypeDefinitionIndex = 42453;

class PBENFCHGLHK_HDJBMAMAPPD : public ::System::Object
{
public:
	::CJIEIHEDMME* LADPIPOMBJM; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBENFCHGLHK_HDJBMAMAPPD__CTOR_OFFSET))(this);
	}

	::System::Void IDMCLKNFCJC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBENFCHGLHK_HDJBMAMAPPD_IDMCLKNFCJC_OFFSET))(this);
	}
};
