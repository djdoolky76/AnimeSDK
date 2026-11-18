#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CBHALHKAKLC_DPIODKIFIME;

#define CBHALHKAKLC_GCPLLNDKKKN_NBOILHCAKCM_OFFSET UNITYSDK_OFFSET(0x14F13420)
#define CBHALHKAKLC_GCPLLNDKKKN__CTOR_OFFSET UNITYSDK_OFFSET(0x14F13410)

inline static constexpr unsigned int CBHALHKAKLC_GCPLLNDKKKN_TypeDefinitionIndex = 55879;

class CBHALHKAKLC_GCPLLNDKKKN : public ::System::Object
{
public:
	::CBHALHKAKLC_DPIODKIFIME* FGBNBFHOKAA; // 0x10
	::System::UInt32 KLCELHJKJNA; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBHALHKAKLC_GCPLLNDKKKN__CTOR_OFFSET))(this);
	}

	::System::Boolean NBOILHCAKCM()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CBHALHKAKLC_GCPLLNDKKKN_NBOILHCAKCM_OFFSET))(this);
	}
};
