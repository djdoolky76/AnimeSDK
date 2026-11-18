#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define MJDCEGKHJEG_FJLLJEIJCMG_LLMPLEJMANP_OFFSET UNITYSDK_OFFSET(0x12FF1540)
#define MJDCEGKHJEG_FJLLJEIJCMG_OPPFBBMHFEK_OFFSET UNITYSDK_OFFSET(0x12FF1530)
#define MJDCEGKHJEG_FJLLJEIJCMG__CTOR_OFFSET UNITYSDK_OFFSET(0x12FF1520)

inline static constexpr unsigned int MJDCEGKHJEG_FJLLJEIJCMG_TypeDefinitionIndex = 56403;

class MJDCEGKHJEG_FJLLJEIJCMG : public ::System::Object
{
public:
	::System::Action* EDNJGMKPFHG; // 0x10
	::System::Action* IFKOKLCPMNF; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJDCEGKHJEG_FJLLJEIJCMG__CTOR_OFFSET))(this);
	}

	::System::Void OPPFBBMHFEK(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + MJDCEGKHJEG_FJLLJEIJCMG_OPPFBBMHFEK_OFFSET))(this, BHDNBGLCNOM);
	}

	::System::Void LLMPLEJMANP(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + MJDCEGKHJEG_FJLLJEIJCMG_LLMPLEJMANP_OFFSET))(this, BHDNBGLCNOM);
	}
};
