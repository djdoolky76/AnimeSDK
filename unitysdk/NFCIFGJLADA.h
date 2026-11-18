#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MPHPFDEODIG.h"

#define NFCIFGJLADA__CTOR_OFFSET UNITYSDK_OFFSET(0x18FB5060)

inline static constexpr unsigned int NFCIFGJLADA_TypeDefinitionIndex = 83120;

class NFCIFGJLADA : public ::MPHPFDEODIG
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFCIFGJLADA__CTOR_OFFSET))(this);
	}
};
