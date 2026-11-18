#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BDGLEFMCJGO_NJKJOJGHMPN;
class BKGKJNHLCKC;

#define BDGLEFMCJGO_GFFKBPPNGPK_DGNBKPPOFMB_OFFSET UNITYSDK_OFFSET(0x13619930)
#define BDGLEFMCJGO_GFFKBPPNGPK__CTOR_OFFSET UNITYSDK_OFFSET(0x13619920)

inline static constexpr unsigned int BDGLEFMCJGO_GFFKBPPNGPK_TypeDefinitionIndex = 80408;

class BDGLEFMCJGO_GFFKBPPNGPK : public ::System::Object
{
public:
	::BDGLEFMCJGO_NJKJOJGHMPN* FGBNBFHOKAA; // 0x10
	::System::Int32 HBJOLKHGGDD; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDGLEFMCJGO_GFFKBPPNGPK__CTOR_OFFSET))(this);
	}

	::System::Boolean DGNBKPPOFMB(::BKGKJNHLCKC* PELAJIFDIPN)
	{
		return ((::System::Boolean(*)(::PVOID, ::BKGKJNHLCKC*))((::PBYTE)hIl2Cpp + BDGLEFMCJGO_GFFKBPPNGPK_DGNBKPPOFMB_OFFSET))(this, PELAJIFDIPN);
	}
};
