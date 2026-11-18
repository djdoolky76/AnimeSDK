#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class EDBDJENIDEO;

#define EDBDJENIDEO_CEDJHPKAJNA_EDLCLLNAAPL_OFFSET UNITYSDK_OFFSET(0xF9B9F20)
#define EDBDJENIDEO_CEDJHPKAJNA_GCPNBKFBAFP_OFFSET UNITYSDK_OFFSET(0xF9B9EE0)
#define EDBDJENIDEO_CEDJHPKAJNA_GONDAFHLLOE_OFFSET UNITYSDK_OFFSET(0xF9B9EF0)
#define EDBDJENIDEO_CEDJHPKAJNA_MBIMDLOFPDM_OFFSET UNITYSDK_OFFSET(0xF9B9F50)
#define EDBDJENIDEO_CEDJHPKAJNA__CTOR_OFFSET UNITYSDK_OFFSET(0xF9B9ED0)

inline static constexpr unsigned int EDBDJENIDEO_CEDJHPKAJNA_TypeDefinitionIndex = 90349;

class EDBDJENIDEO_CEDJHPKAJNA : public ::System::Object
{
public:
	::EDBDJENIDEO* KLHPEBKNIFB; // 0x10
	::System::Boolean BFLKFFHACFG; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDBDJENIDEO_CEDJHPKAJNA__CTOR_OFFSET))(this);
	}

	::System::Void GCPNBKFBAFP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDBDJENIDEO_CEDJHPKAJNA_GCPNBKFBAFP_OFFSET))(this);
	}

	::System::Boolean GONDAFHLLOE()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EDBDJENIDEO_CEDJHPKAJNA_GONDAFHLLOE_OFFSET))(this);
	}

	::System::Void EDLCLLNAAPL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDBDJENIDEO_CEDJHPKAJNA_EDLCLLNAAPL_OFFSET))(this);
	}

	::System::Boolean MBIMDLOFPDM()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EDBDJENIDEO_CEDJHPKAJNA_MBIMDLOFPDM_OFFSET))(this);
	}
};
