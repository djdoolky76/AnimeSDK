#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/KNKLMAIENDF.h"

#define MKHEOBMHDII_FGBLILBNEHG_OFFSET UNITYSDK_OFFSET(0x17D46020)

inline static constexpr unsigned int MKHEOBMHDII_TypeDefinitionIndex = 63379;

class MKHEOBMHDII : public ::System::Object
{
public:
	static ::System::Void FGBLILBNEHG(::KNKLMAIENDF& BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::KNKLMAIENDF&))((::PBYTE)hIl2Cpp + MKHEOBMHDII_FGBLILBNEHG_OFFSET))(BHDNBGLCNOM);
	}
};
