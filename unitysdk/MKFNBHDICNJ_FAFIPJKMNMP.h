#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MKFNBHDICNJ;
namespace System { class Action; }

#define MKFNBHDICNJ_FAFIPJKMNMP_DJHCNICECIJ_OFFSET UNITYSDK_OFFSET(0x12D90C00)
#define MKFNBHDICNJ_FAFIPJKMNMP__CTOR_OFFSET UNITYSDK_OFFSET(0x12D90BF0)

inline static constexpr unsigned int MKFNBHDICNJ_FAFIPJKMNMP_TypeDefinitionIndex = 61348;

class MKFNBHDICNJ_FAFIPJKMNMP : public ::System::Object
{
public:
	::MKFNBHDICNJ* KLHPEBKNIFB; // 0x10
	::System::Action* EDNJGMKPFHG; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKFNBHDICNJ_FAFIPJKMNMP__CTOR_OFFSET))(this);
	}

	::System::Void DJHCNICECIJ(::System::UInt32 KPGCGEPJKHD)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MKFNBHDICNJ_FAFIPJKMNMP_DJHCNICECIJ_OFFSET))(this, KPGCGEPJKHD);
	}
};
