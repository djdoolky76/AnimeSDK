#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/System/Object.h"

class MDLKEKANMHL;

#define NEBAJBCKCDI_EEOOLEADNCE_NLBGIFHIOKC_OFFSET UNITYSDK_OFFSET(0x18FB1DD0)
#define NEBAJBCKCDI_EEOOLEADNCE__CTOR_OFFSET UNITYSDK_OFFSET(0x18FB1DC0)

inline static constexpr unsigned int NEBAJBCKCDI_EEOOLEADNCE_TypeDefinitionIndex = 55086;

class NEBAJBCKCDI_EEOOLEADNCE : public ::System::Object
{
public:
	::Foundation::ViewObject::ViewObjectHandle NBCLKPICOAD; // 0x10
	::System::UInt32 LJMPPBEMEPP; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEBAJBCKCDI_EEOOLEADNCE__CTOR_OFFSET))(this);
	}

	::System::Void NLBGIFHIOKC(::MDLKEKANMHL* BIPAPKLMFEL)
	{
		return ((::System::Void(*)(::PVOID, ::MDLKEKANMHL*))((::PBYTE)hIl2Cpp + NEBAJBCKCDI_EEOOLEADNCE_NLBGIFHIOKC_OFFSET))(this, BIPAPKLMFEL);
	}
};
