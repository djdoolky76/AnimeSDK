#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JFMPPNFGHPD.h"

#define KKEJBAMMLEA__CTOR_OFFSET UNITYSDK_OFFSET(0x1E1CC320)

inline static constexpr unsigned int KKEJBAMMLEA_TypeDefinitionIndex = 93498;

class KKEJBAMMLEA : public ::JFMPPNFGHPD
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKEJBAMMLEA__CTOR_OFFSET))(this);
	}
};
