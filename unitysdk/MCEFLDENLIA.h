#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CHJFODDFPJH.h"

#define MCEFLDENLIA__CTOR_OFFSET UNITYSDK_OFFSET(0x12D50500)

inline static constexpr unsigned int MCEFLDENLIA_TypeDefinitionIndex = 44481;

class MCEFLDENLIA : public ::CHJFODDFPJH
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCEFLDENLIA__CTOR_OFFSET))(this);
	}
};
