#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OMEHCMNBOBL;

#define AMMKBPDADNM_COCCMCPOMPH_PPGGILHBIPJ_OFFSET UNITYSDK_OFFSET(0x17EEA390)
#define AMMKBPDADNM_COCCMCPOMPH__CTOR_OFFSET UNITYSDK_OFFSET(0x17EEA380)

inline static constexpr unsigned int AMMKBPDADNM_COCCMCPOMPH_TypeDefinitionIndex = 16284;

class AMMKBPDADNM_COCCMCPOMPH : public ::System::Object
{
public:
	::System::Int32 DAGKBMAKPID; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMMKBPDADNM_COCCMCPOMPH__CTOR_OFFSET))(this);
	}

	::System::Boolean PPGGILHBIPJ(::OMEHCMNBOBL* HAAEBCOBKFF)
	{
		return ((::System::Boolean(*)(::PVOID, ::OMEHCMNBOBL*))((::PBYTE)hIl2Cpp + AMMKBPDADNM_COCCMCPOMPH_PPGGILHBIPJ_OFFSET))(this, HAAEBCOBKFF);
	}
};
