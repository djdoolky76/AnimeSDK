#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class MGBBDIIJPFJ;

#define MOLEMOLE_PINBALLSUBSYSTEM_BALLTARGETCONTACTINFO_GET_ISBOUNCEDHIT_OFFSET UNITYSDK_OFFSET(0x7D1D50)
#define MOLEMOLE_PINBALLSUBSYSTEM_BALLTARGETCONTACTINFO_GET_ISDIRECTHIT_OFFSET UNITYSDK_OFFSET(0x7D1D40)
#define MOLEMOLE_PINBALLSUBSYSTEM_BALLTARGETCONTACTINFO_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x7D1CE0)

namespace MoleMole
{
	inline static constexpr unsigned int PinballSubsystem_BallTargetContactInfo_TypeDefinitionIndex = 56753;

	struct alignas(8) PinballSubsystem_BallTargetContactInfo
	{
		::MGBBDIIJPFJ* Ball; // 0x10
		::MGBBDIIJPFJ* Target; // 0x18

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PINBALLSUBSYSTEM_BALLTARGETCONTACTINFO_GET_ISVALID_OFFSET))(this);
		}

		::System::Boolean get_IsDirectHit()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PINBALLSUBSYSTEM_BALLTARGETCONTACTINFO_GET_ISDIRECTHIT_OFFSET))(this);
		}

		::System::Boolean get_IsBouncedHit()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PINBALLSUBSYSTEM_BALLTARGETCONTACTINFO_GET_ISBOUNCEDHIT_OFFSET))(this);
		}
	};
}
