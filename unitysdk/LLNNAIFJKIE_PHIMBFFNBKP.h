#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class LLNNAIFJKIE;
class LLNNAIFJKIE_JPGNGJCDCAM;

#define LLNNAIFJKIE_PHIMBFFNBKP_DHDAHCGJCML_OFFSET UNITYSDK_OFFSET(0x1A61EEB0)
#define LLNNAIFJKIE_PHIMBFFNBKP__CTOR_OFFSET UNITYSDK_OFFSET(0x1A61EEA0)

inline static constexpr unsigned int LLNNAIFJKIE_PHIMBFFNBKP_TypeDefinitionIndex = 62080;

class LLNNAIFJKIE_PHIMBFFNBKP : public ::System::Object
{
public:
	::LLNNAIFJKIE_JPGNGJCDCAM* EABCDAPLCCM; // 0x10
	::LLNNAIFJKIE* KLHPEBKNIFB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLNNAIFJKIE_PHIMBFFNBKP__CTOR_OFFSET))(this);
	}

	::System::Void DHDAHCGJCML()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLNNAIFJKIE_PHIMBFFNBKP_DHDAHCGJCML_OFFSET))(this);
	}
};
