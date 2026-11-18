#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AOCCBECFDKA;
class CADMJOPHMJL;
namespace System { class Action; }
namespace System { class String; }

#define CADMJOPHMJL_MOAOJEDKBJG_ACNBKKKNMGP_OFFSET UNITYSDK_OFFSET(0x14772110)
#define CADMJOPHMJL_MOAOJEDKBJG__CTOR_OFFSET UNITYSDK_OFFSET(0x14772100)

inline static constexpr unsigned int CADMJOPHMJL_MOAOJEDKBJG_TypeDefinitionIndex = 41233;

class CADMJOPHMJL_MOAOJEDKBJG : public ::System::Object
{
public:
	::System::Action* EDNJGMKPFHG; // 0x10
	::CADMJOPHMJL* KLHPEBKNIFB; // 0x18
	::System::String* ONOAGAPJNCG; // 0x20
	::System::UInt32 KNNGDMLFCHG; // 0x28
	::System::UInt32 FHEIMLOCHJJ; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CADMJOPHMJL_MOAOJEDKBJG__CTOR_OFFSET))(this);
	}

	::System::Void ACNBKKKNMGP(::AOCCBECFDKA* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::AOCCBECFDKA*))((::PBYTE)hIl2Cpp + CADMJOPHMJL_MOAOJEDKBJG_ACNBKKKNMGP_OFFSET))(this, GLAOEHCGCFO);
	}
};
