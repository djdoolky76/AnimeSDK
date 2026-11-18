#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define ONNJLBKOEDN_BMFLJDABGAL_BJANDJKKNCD_OFFSET UNITYSDK_OFFSET(0x1B7AF120)
#define ONNJLBKOEDN_BMFLJDABGAL__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7AF110)

inline static constexpr unsigned int ONNJLBKOEDN_BMFLJDABGAL_TypeDefinitionIndex = 55547;

class ONNJLBKOEDN_BMFLJDABGAL : public ::System::Object
{
public:
	::System::Single LHLNCMNBGAG; // 0x10
	::System::Single PMNLNNGEIFM; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONNJLBKOEDN_BMFLJDABGAL__CTOR_OFFSET))(this);
	}

	::System::Void BJANDJKKNCD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONNJLBKOEDN_BMFLJDABGAL_BJANDJKKNCD_OFFSET))(this);
	}
};
