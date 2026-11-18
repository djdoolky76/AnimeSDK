#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class NCEHIHGHAFH;

#define MGJLJHECMFL_FCDPDNMOHKE_EDKAHEAIHAK_OFFSET UNITYSDK_OFFSET(0x11F49830)
#define MGJLJHECMFL_FCDPDNMOHKE__CTOR_OFFSET UNITYSDK_OFFSET(0x11F49820)

inline static constexpr unsigned int MGJLJHECMFL_FCDPDNMOHKE_TypeDefinitionIndex = 80052;

class MGJLJHECMFL_FCDPDNMOHKE : public ::System::Object
{
public:
	::NCEHIHGHAFH* PMLAACAFPDO; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGJLJHECMFL_FCDPDNMOHKE__CTOR_OFFSET))(this);
	}

	::System::Boolean EDKAHEAIHAK(::NCEHIHGHAFH* DLJPLHKELCO)
	{
		return ((::System::Boolean(*)(::PVOID, ::NCEHIHGHAFH*))((::PBYTE)hIl2Cpp + MGJLJHECMFL_FCDPDNMOHKE_EDKAHEAIHAK_OFFSET))(this, DLJPLHKELCO);
	}
};
