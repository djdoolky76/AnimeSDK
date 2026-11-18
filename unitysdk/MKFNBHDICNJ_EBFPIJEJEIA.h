#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MKFNBHDICNJ;
namespace System { class Action; }

#define MKFNBHDICNJ_EBFPIJEJEIA_IGNKLOEBLFM_OFFSET UNITYSDK_OFFSET(0x11F56B90)
#define MKFNBHDICNJ_EBFPIJEJEIA__CTOR_OFFSET UNITYSDK_OFFSET(0x11F56B80)

inline static constexpr unsigned int MKFNBHDICNJ_EBFPIJEJEIA_TypeDefinitionIndex = 61408;

class MKFNBHDICNJ_EBFPIJEJEIA : public ::System::Object
{
public:
	::MKFNBHDICNJ* KLHPEBKNIFB; // 0x10
	::System::Action* EDNJGMKPFHG; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKFNBHDICNJ_EBFPIJEJEIA__CTOR_OFFSET))(this);
	}

	::System::Void IGNKLOEBLFM(::System::Boolean PJLLCJPOKII)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MKFNBHDICNJ_EBFPIJEJEIA_IGNKLOEBLFM_OFFSET))(this, PJLLCJPOKII);
	}
};
