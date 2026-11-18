#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define GKFPLJMHDIA__CTOR_OFFSET UNITYSDK_OFFSET(0x1D989640)

inline static constexpr unsigned int GKFPLJMHDIA_TypeDefinitionIndex = 93832;

class GKFPLJMHDIA : public ::System::Object
{
public:
	::System::Int32 MPNGKLPNMJB; // 0x10
	::System::Int32 INCGAHLKDOJ; // 0x14
	::System::Int32 LKJPOEMAAJF; // 0x18
	::System::Int32 KIFJPFIOEEC; // 0x1C
	::System::Single JMLCPADPPNM; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKFPLJMHDIA__CTOR_OFFSET))(this);
	}
};
