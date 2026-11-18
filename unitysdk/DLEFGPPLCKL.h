#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MELDNFKKBME.h"

#define DLEFGPPLCKL__CTOR_OFFSET UNITYSDK_OFFSET(0xFDC3BC0)

inline static constexpr unsigned int DLEFGPPLCKL_TypeDefinitionIndex = 82413;

class DLEFGPPLCKL : public ::MELDNFKKBME
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLEFGPPLCKL__CTOR_OFFSET))(this);
	}
};
