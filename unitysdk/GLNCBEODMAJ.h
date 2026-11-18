#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FFIBMFMEHGL.h"
#include "unitysdk/KNLHFLFKGMP.h"

#define GLNCBEODMAJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1DABF0D0)

inline static constexpr unsigned int GLNCBEODMAJ_TypeDefinitionIndex = 93438;

class GLNCBEODMAJ : public ::KNLHFLFKGMP
{
public:
	::FFIBMFMEHGL OCOJFKMOKMK; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLNCBEODMAJ__CTOR_OFFSET))(this);
	}
};
