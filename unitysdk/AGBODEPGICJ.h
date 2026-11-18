#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BIPEGPGHAJI.h"
#include "unitysdk/HIFPJDPDICG.h"

#define AGBODEPGICJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1D686110)

inline static constexpr unsigned int AGBODEPGICJ_TypeDefinitionIndex = 94191;

class AGBODEPGICJ : public ::BIPEGPGHAJI
{
public:
	::HIFPJDPDICG ELKICNLJCAM; // 0x20
	::System::UInt64 EFJNBAPPLFB; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGBODEPGICJ__CTOR_OFFSET))(this);
	}
};
