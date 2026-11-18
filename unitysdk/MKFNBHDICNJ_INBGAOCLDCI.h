#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MKFNBHDICNJ;
namespace System { class Action; }

#define MKFNBHDICNJ_INBGAOCLDCI_NCLJFJIEBBE_OFFSET UNITYSDK_OFFSET(0x14DEF610)
#define MKFNBHDICNJ_INBGAOCLDCI__CTOR_OFFSET UNITYSDK_OFFSET(0x14DEF600)

inline static constexpr unsigned int MKFNBHDICNJ_INBGAOCLDCI_TypeDefinitionIndex = 61380;

class MKFNBHDICNJ_INBGAOCLDCI : public ::System::Object
{
public:
	::MKFNBHDICNJ* KLHPEBKNIFB; // 0x10
	::System::Action* EDNJGMKPFHG; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKFNBHDICNJ_INBGAOCLDCI__CTOR_OFFSET))(this);
	}

	::System::Void NCLJFJIEBBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKFNBHDICNJ_INBGAOCLDCI_NCLJFJIEBBE_OFFSET))(this);
	}
};
