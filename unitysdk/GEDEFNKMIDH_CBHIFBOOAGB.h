#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/System/Object.h"

class GEDEFNKMIDH;
class JFDMCJMAIEA;
namespace System { class Action; }

#define GEDEFNKMIDH_CBHIFBOOAGB_EKCADKIENDM_OFFSET UNITYSDK_OFFSET(0x125C8930)
#define GEDEFNKMIDH_CBHIFBOOAGB_MCJACGHHCJB_OFFSET UNITYSDK_OFFSET(0x125C8850)
#define GEDEFNKMIDH_CBHIFBOOAGB__CTOR_OFFSET UNITYSDK_OFFSET(0x125C8840)

inline static constexpr unsigned int GEDEFNKMIDH_CBHIFBOOAGB_TypeDefinitionIndex = 54482;

class GEDEFNKMIDH_CBHIFBOOAGB : public ::System::Object
{
public:
	::JFDMCJMAIEA* LIABFCBNPCF; // 0x10
	::System::Action* DLMJCFBENGB; // 0x18
	::GEDEFNKMIDH* KLHPEBKNIFB; // 0x20
	::Foundation::Coroutine::CoroutineHandle PHHDHIBOCKA; // 0x28
	::System::Single CAOPDAMCNCN; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEDEFNKMIDH_CBHIFBOOAGB__CTOR_OFFSET))(this);
	}

	::System::Void MCJACGHHCJB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEDEFNKMIDH_CBHIFBOOAGB_MCJACGHHCJB_OFFSET))(this);
	}

	::System::Void EKCADKIENDM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEDEFNKMIDH_CBHIFBOOAGB_EKCADKIENDM_OFFSET))(this);
	}
};
