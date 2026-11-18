#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define AFHHLFALJJN__CTOR_OFFSET UNITYSDK_OFFSET(0x144D6510)

inline static constexpr unsigned int AFHHLFALJJN_TypeDefinitionIndex = 83070;

class AFHHLFALJJN : public ::System::Object
{
public:
	::System::Int32 NFACFCMFNEC; // 0x10
	::System::Boolean PPONNGLGDIG; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFHHLFALJJN__CTOR_OFFSET))(this);
	}
};
