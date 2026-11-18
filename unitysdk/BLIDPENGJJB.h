#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define BLIDPENGJJB_NMCDMHALHMA_OFFSET UNITYSDK_OFFSET(0x18DA58A0)

inline static constexpr unsigned int BLIDPENGJJB_TypeDefinitionIndex = 64155;

class BLIDPENGJJB : public ::System::Object
{
public:
	static ::System::Void NMCDMHALHMA(::System::Boolean DEBGKPLOPCG)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + BLIDPENGJJB_NMCDMHALHMA_OFFSET))(DEBGKPLOPCG);
	}
};
