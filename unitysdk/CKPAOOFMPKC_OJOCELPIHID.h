#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OCIAMHMOLOF;

#define CKPAOOFMPKC_OJOCELPIHID_BLDOPGHOALB_OFFSET UNITYSDK_OFFSET(0x147AA2E0)
#define CKPAOOFMPKC_OJOCELPIHID__CTOR_OFFSET UNITYSDK_OFFSET(0x147AA2D0)

inline static constexpr unsigned int CKPAOOFMPKC_OJOCELPIHID_TypeDefinitionIndex = 90504;

class CKPAOOFMPKC_OJOCELPIHID : public ::System::Object
{
public:
	::System::Int32 ABHBKFJKINO; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKPAOOFMPKC_OJOCELPIHID__CTOR_OFFSET))(this);
	}

	::System::Boolean BLDOPGHOALB(::OCIAMHMOLOF* FGNGBMKBOPO)
	{
		return ((::System::Boolean(*)(::PVOID, ::OCIAMHMOLOF*))((::PBYTE)hIl2Cpp + CKPAOOFMPKC_OJOCELPIHID_BLDOPGHOALB_OFFSET))(this, FGNGBMKBOPO);
	}
};
