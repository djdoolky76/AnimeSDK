#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define PEPHNICCFOL__CTOR_OFFSET UNITYSDK_OFFSET(0x1949C2A0)

inline static constexpr unsigned int PEPHNICCFOL_TypeDefinitionIndex = 49591;

class PEPHNICCFOL : public ::System::Object
{
public:
	::System::Int32 FHJNDPECNMD; // 0x10
	::System::Int32 NFACFCMFNEC; // 0x14
	::System::Int32 OFHNBLNFMNI; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEPHNICCFOL__CTOR_OFFSET))(this);
	}
};
