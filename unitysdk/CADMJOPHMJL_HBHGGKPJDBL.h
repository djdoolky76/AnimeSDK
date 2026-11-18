#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FOKKECBAINL.h"
#include "unitysdk/System/Object.h"

class AOCCBECFDKA;
class CADMJOPHMJL;
namespace System { class Action; }

#define CADMJOPHMJL_HBHGGKPJDBL_CECEHDMALAK_OFFSET UNITYSDK_OFFSET(0x11419C60)
#define CADMJOPHMJL_HBHGGKPJDBL__CTOR_OFFSET UNITYSDK_OFFSET(0x11419C50)

inline static constexpr unsigned int CADMJOPHMJL_HBHGGKPJDBL_TypeDefinitionIndex = 41225;

class CADMJOPHMJL_HBHGGKPJDBL : public ::System::Object
{
public:
	::CADMJOPHMJL* KLHPEBKNIFB; // 0x10
	::System::Action* EDNJGMKPFHG; // 0x18
	::System::UInt32 KNNGDMLFCHG; // 0x20
	::FOKKECBAINL NIOOLPJAFNI; // 0x24
	::System::UInt32 FHEIMLOCHJJ; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CADMJOPHMJL_HBHGGKPJDBL__CTOR_OFFSET))(this);
	}

	::System::Void CECEHDMALAK(::AOCCBECFDKA* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::AOCCBECFDKA*))((::PBYTE)hIl2Cpp + CADMJOPHMJL_HBHGGKPJDBL_CECEHDMALAK_OFFSET))(this, GLAOEHCGCFO);
	}
};
