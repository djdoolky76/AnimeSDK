#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define AKFCOMPHBLJ_ANMNJPAHCAF_DBBAHNDHOOP_MDIGEPNKFOP_OFFSET UNITYSDK_OFFSET(0x134D7850)
#define AKFCOMPHBLJ_ANMNJPAHCAF_DBBAHNDHOOP_MHNPOKAJLDG_OFFSET UNITYSDK_OFFSET(0x134D7840)
#define AKFCOMPHBLJ_ANMNJPAHCAF_DBBAHNDHOOP__CTOR_OFFSET UNITYSDK_OFFSET(0x134D7830)

inline static constexpr unsigned int AKFCOMPHBLJ_ANMNJPAHCAF_DBBAHNDHOOP_TypeDefinitionIndex = 77047;

class AKFCOMPHBLJ_ANMNJPAHCAF_DBBAHNDHOOP : public ::System::Object
{
public:
	::System::Action_1<::System::Int32>* IFKOKLCPMNF; // 0x10
	::System::Action* EDNJGMKPFHG; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKFCOMPHBLJ_ANMNJPAHCAF_DBBAHNDHOOP__CTOR_OFFSET))(this);
	}

	::System::Void MHNPOKAJLDG(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + AKFCOMPHBLJ_ANMNJPAHCAF_DBBAHNDHOOP_MHNPOKAJLDG_OFFSET))(this, BHDNBGLCNOM);
	}

	::System::Void MDIGEPNKFOP(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + AKFCOMPHBLJ_ANMNJPAHCAF_DBBAHNDHOOP_MDIGEPNKFOP_OFFSET))(this, BHDNBGLCNOM);
	}
};
