#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define BNFIIBMAMDO_CHDCPDOOFNA_JMHBNIGJOOA_OFFSET UNITYSDK_OFFSET(0x1692EAC0)
#define BNFIIBMAMDO_CHDCPDOOFNA__CTOR_OFFSET UNITYSDK_OFFSET(0x1692EAB0)

inline static constexpr unsigned int BNFIIBMAMDO_CHDCPDOOFNA_TypeDefinitionIndex = 80875;

class BNFIIBMAMDO_CHDCPDOOFNA : public ::System::Object
{
public:
	::System::Int32 DIEEDEBJCMP; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNFIIBMAMDO_CHDCPDOOFNA__CTOR_OFFSET))(this);
	}

	::System::Void JMHBNIGJOOA(::System::Boolean CAAFEGLOALC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BNFIIBMAMDO_CHDCPDOOFNA_JMHBNIGJOOA_OFFSET))(this, CAAFEGLOALC);
	}
};
