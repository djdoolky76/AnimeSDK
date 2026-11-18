#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class HGIDAMPAOGK;

#define BCIHENAADAA_JLFGHMHMPPI_KABOALKOKFC_OFFSET UNITYSDK_OFFSET(0x18226E80)
#define BCIHENAADAA_JLFGHMHMPPI__CTOR_OFFSET UNITYSDK_OFFSET(0x18226E70)

inline static constexpr unsigned int BCIHENAADAA_JLFGHMHMPPI_TypeDefinitionIndex = 84265;

class BCIHENAADAA_JLFGHMHMPPI : public ::System::Object
{
public:
	::System::Int32 MKDACCEAEGE; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCIHENAADAA_JLFGHMHMPPI__CTOR_OFFSET))(this);
	}

	::System::Boolean KABOALKOKFC(::HGIDAMPAOGK* DPGFPHIMDEL)
	{
		return ((::System::Boolean(*)(::PVOID, ::HGIDAMPAOGK*))((::PBYTE)hIl2Cpp + BCIHENAADAA_JLFGHMHMPPI_KABOALKOKFC_OFFSET))(this, DPGFPHIMDEL);
	}
};
