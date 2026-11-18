#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CIONLGJCPIA;
class OAEFGCLEHHO;

#define CIONLGJCPIA_DCGFEKGIENN_PBBCCIIMJPI_OFFSET UNITYSDK_OFFSET(0x193D7E70)
#define CIONLGJCPIA_DCGFEKGIENN__CTOR_OFFSET UNITYSDK_OFFSET(0x193D7E60)

inline static constexpr unsigned int CIONLGJCPIA_DCGFEKGIENN_TypeDefinitionIndex = 51256;

class CIONLGJCPIA_DCGFEKGIENN : public ::System::Object
{
public:
	::CIONLGJCPIA* KLHPEBKNIFB; // 0x10
	::System::Int32 PAAAECBCAFA; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIONLGJCPIA_DCGFEKGIENN__CTOR_OFFSET))(this);
	}

	::System::Void PBBCCIIMJPI(::OAEFGCLEHHO* CAAFEGLOALC)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + CIONLGJCPIA_DCGFEKGIENN_PBBCCIIMJPI_OFFSET))(this, CAAFEGLOALC);
	}
};
