#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class PNCGCMHIOGN;

#define EKGAHGCJOAN_CCGDBNOHOJE_CFKLFNAFPPK_OFFSET UNITYSDK_OFFSET(0x16158690)
#define EKGAHGCJOAN_CCGDBNOHOJE__CTOR_OFFSET UNITYSDK_OFFSET(0x16158680)

inline static constexpr unsigned int EKGAHGCJOAN_CCGDBNOHOJE_TypeDefinitionIndex = 51235;

class EKGAHGCJOAN_CCGDBNOHOJE : public ::System::Object
{
public:
	::PNCGCMHIOGN* NOCCODBMGFP; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKGAHGCJOAN_CCGDBNOHOJE__CTOR_OFFSET))(this);
	}

	::System::Boolean CFKLFNAFPPK(::PNCGCMHIOGN* ALPANKAJAGK)
	{
		return ((::System::Boolean(*)(::PVOID, ::PNCGCMHIOGN*))((::PBYTE)hIl2Cpp + EKGAHGCJOAN_CCGDBNOHOJE_CFKLFNAFPPK_OFFSET))(this, ALPANKAJAGK);
	}
};
