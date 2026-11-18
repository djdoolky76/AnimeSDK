#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IPCLFJBIBEK.h"
#include "unitysdk/System/Object.h"

#define CDJNKEFHHDC_AAEAHAGDIOP_OFFSET UNITYSDK_OFFSET(0x1FF64FE0)
#define CDJNKEFHHDC_IPHFDIKBFGD_OFFSET UNITYSDK_OFFSET(0x1FF64FA0)
#define CDJNKEFHHDC__CTOR_OFFSET UNITYSDK_OFFSET(0x1FF64F90)

inline static constexpr unsigned int CDJNKEFHHDC_TypeDefinitionIndex = 29140;

class CDJNKEFHHDC : public ::System::Object
{
public:
	::System::Boolean MHIADOJACCA; // 0x10

	::System::Void _ctor(::System::Boolean MHIADOJACCA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CDJNKEFHHDC__CTOR_OFFSET))(this, MHIADOJACCA);
	}

	::IPCLFJBIBEK IPHFDIKBFGD()
	{
		return ((::IPCLFJBIBEK(*)(::PVOID))((::PBYTE)hIl2Cpp + CDJNKEFHHDC_IPHFDIKBFGD_OFFSET))(this);
	}

	::System::Boolean AAEAHAGDIOP()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CDJNKEFHHDC_AAEAHAGDIOP_OFFSET))(this);
	}
};
