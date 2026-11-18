#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define HPGBIDMABJP_CLMNFGOFPPD_IGNPOFDHGDL_OFFSET UNITYSDK_OFFSET(0x1470F880)
#define HPGBIDMABJP_CLMNFGOFPPD__CTOR_OFFSET UNITYSDK_OFFSET(0x1470F870)

inline static constexpr unsigned int HPGBIDMABJP_CLMNFGOFPPD_TypeDefinitionIndex = 48808;

class HPGBIDMABJP_CLMNFGOFPPD : public ::System::Object
{
public:
	::System::Action* EDNJGMKPFHG; // 0x10
	::System::Action* MFEBNGPNPMA; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPGBIDMABJP_CLMNFGOFPPD__CTOR_OFFSET))(this);
	}

	::System::Void IGNPOFDHGDL(::OAEFGCLEHHO* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + HPGBIDMABJP_CLMNFGOFPPD_IGNPOFDHGDL_OFFSET))(this, GLAOEHCGCFO);
	}
};
