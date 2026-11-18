#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/INJOPPPIGLO_NDMLLCPCJFG.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole { class VehicleSplinePath; }

#define OOFIJABOMCL_JDAPDDEOCEA_OFFSET UNITYSDK_OFFSET(0x6B87E0)
#define OOFIJABOMCL_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x6B87F0)

inline static constexpr unsigned int OOFIJABOMCL_TypeDefinitionIndex = 44566;

struct alignas(8) OOFIJABOMCL
{
	::MoleMole::VehicleSplinePath* CJBJONJDOLI; // 0x10
	::INJOPPPIGLO_NDMLLCPCJFG HGGJFCOFNBE; // 0x18
	::UnityEngine::Vector3 GHOOKKMIPJB; // 0x20
	::UnityEngine::Vector3 LKIIGKNHGIE; // 0x2C
	::System::Single FCNMEAHNNGA; // 0x38
	::System::Single MEHGINDPAEH; // 0x3C

	::System::Boolean JDAPDDEOCEA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OOFIJABOMCL_JDAPDDEOCEA_OFFSET))(this);
	}

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOFIJABOMCL_NPOLNFDBOOD_OFFSET))(this);
	}
};
