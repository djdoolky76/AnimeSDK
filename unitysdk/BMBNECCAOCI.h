#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CPPFKDCPPKM.h"

#define BMBNECCAOCI__CTOR_OFFSET UNITYSDK_OFFSET(0x128B2D30)

inline static constexpr unsigned int BMBNECCAOCI_TypeDefinitionIndex = 67401;

class BMBNECCAOCI : public ::CPPFKDCPPKM
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMBNECCAOCI__CTOR_OFFSET))(this);
	}
};
