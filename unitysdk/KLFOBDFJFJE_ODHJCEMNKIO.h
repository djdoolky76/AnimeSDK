#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BMBMBLDFBID.h"

class KLFOBDFJFJE;
namespace System { class Action; }

#define KLFOBDFJFJE_ODHJCEMNKIO_AOLFHIMBDLB_OFFSET UNITYSDK_OFFSET(0x15169390)
#define KLFOBDFJFJE_ODHJCEMNKIO_BAGGFEMDDAH_OFFSET UNITYSDK_OFFSET(0x15169350)
#define KLFOBDFJFJE_ODHJCEMNKIO_MLBLNFGCMOG_OFFSET UNITYSDK_OFFSET(0x151693D0)
#define KLFOBDFJFJE_ODHJCEMNKIO__CTOR_OFFSET UNITYSDK_OFFSET(0x15169340)

inline static constexpr unsigned int KLFOBDFJFJE_ODHJCEMNKIO_TypeDefinitionIndex = 58479;

class KLFOBDFJFJE_ODHJCEMNKIO : public ::System::Object
{
public:
	::KLFOBDFJFJE* KLHPEBKNIFB; // 0x10
	::System::Action* CPCOHPHKOGA; // 0x18
	::System::Action* MKLPLBFGGAD; // 0x20
	::System::Boolean LHFDEPKACLK; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLFOBDFJFJE_ODHJCEMNKIO__CTOR_OFFSET))(this);
	}

	::System::Void BAGGFEMDDAH(::BMBMBLDFBID DMIAICJPPDL)
	{
		return ((::System::Void(*)(::PVOID, ::BMBMBLDFBID))((::PBYTE)hIl2Cpp + KLFOBDFJFJE_ODHJCEMNKIO_BAGGFEMDDAH_OFFSET))(this, DMIAICJPPDL);
	}

	::System::Void AOLFHIMBDLB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLFOBDFJFJE_ODHJCEMNKIO_AOLFHIMBDLB_OFFSET))(this);
	}

	::System::Void MLBLNFGCMOG(::BMBMBLDFBID DMIAICJPPDL)
	{
		return ((::System::Void(*)(::PVOID, ::BMBMBLDFBID))((::PBYTE)hIl2Cpp + KLFOBDFJFJE_ODHJCEMNKIO_MLBLNFGCMOG_OFFSET))(this, DMIAICJPPDL);
	}
};
