#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define IFOKBBHAHIE_NCGDCPIOBNH_BAPEHNOGABE_OFFSET UNITYSDK_OFFSET(0x153A5A90)
#define IFOKBBHAHIE_NCGDCPIOBNH_BEAGIMOKECB_OFFSET UNITYSDK_OFFSET(0x153A5AA0)
#define IFOKBBHAHIE_NCGDCPIOBNH__CTOR_OFFSET UNITYSDK_OFFSET(0x153A5A80)

inline static constexpr unsigned int IFOKBBHAHIE_NCGDCPIOBNH_TypeDefinitionIndex = 67433;

class IFOKBBHAHIE_NCGDCPIOBNH : public ::System::Object
{
public:
	::System::Action* EJGDHCIBCJH; // 0x10
	::System::Action* NKGCDDCMBCF; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFOKBBHAHIE_NCGDCPIOBNH__CTOR_OFFSET))(this);
	}

	::System::Void BAPEHNOGABE(::OAEFGCLEHHO* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + IFOKBBHAHIE_NCGDCPIOBNH_BAPEHNOGABE_OFFSET))(this, GLAOEHCGCFO);
	}

	::System::Void BEAGIMOKECB(::OAEFGCLEHHO* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + IFOKBBHAHIE_NCGDCPIOBNH_BEAGIMOKECB_OFFSET))(this, GLAOEHCGCFO);
	}
};
