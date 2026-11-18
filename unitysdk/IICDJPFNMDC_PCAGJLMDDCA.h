#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MonoUITableScrollV2;

#define IICDJPFNMDC_PCAGJLMDDCA_COHIDGMLJGK_OFFSET UNITYSDK_OFFSET(0x1A46A830)
#define IICDJPFNMDC_PCAGJLMDDCA__CTOR_OFFSET UNITYSDK_OFFSET(0x1A46A820)

inline static constexpr unsigned int IICDJPFNMDC_PCAGJLMDDCA_TypeDefinitionIndex = 92147;

class IICDJPFNMDC_PCAGJLMDDCA : public ::System::Object
{
public:
	::MonoUITableScrollV2* LAOANOKHCAH; // 0x10
	::System::Int32 ABHBKFJKINO; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IICDJPFNMDC_PCAGJLMDDCA__CTOR_OFFSET))(this);
	}

	::System::Void COHIDGMLJGK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IICDJPFNMDC_PCAGJLMDDCA_COHIDGMLJGK_OFFSET))(this);
	}
};
