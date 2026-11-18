#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGGLJLECNJM.h"

namespace System { class String; }

#define ADMDCPALIJD__CTOR_OFFSET UNITYSDK_OFFSET(0x1ED3CA40)

inline static constexpr unsigned int ADMDCPALIJD_TypeDefinitionIndex = 94645;

class ADMDCPALIJD : public ::CGGLJLECNJM
{
public:
	::System::String* FDCDHPGECCC; // 0x20
	::System::UInt32 BKLGNCBNEGM; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADMDCPALIJD__CTOR_OFFSET))(this);
	}
};
