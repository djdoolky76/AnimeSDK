#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PDJNLGDBCEK.h"
#include "unitysdk/System/Object.h"

class FMHDMLBDIJC;
namespace System { class Action; }

#define DMHOLJNNCJA_FNJMIOFBAOE_PBKAMKPGDBL_OFFSET UNITYSDK_OFFSET(0x1834D5D0)
#define DMHOLJNNCJA_FNJMIOFBAOE__CTOR_OFFSET UNITYSDK_OFFSET(0x1834D5C0)

inline static constexpr unsigned int DMHOLJNNCJA_FNJMIOFBAOE_TypeDefinitionIndex = 46963;

class DMHOLJNNCJA_FNJMIOFBAOE : public ::System::Object
{
public:
	::FMHDMLBDIJC* PADJNMGMGHO; // 0x10
	::System::Action* OLBAKFLBNIG; // 0x18
	::System::Action* EDNJGMKPFHG; // 0x20
	::FMHDMLBDIJC* KDEHMPGOCEP; // 0x28
	::PDJNLGDBCEK GODLDEBCHGJ; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMHOLJNNCJA_FNJMIOFBAOE__CTOR_OFFSET))(this);
	}

	::System::Void PBKAMKPGDBL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMHOLJNNCJA_FNJMIOFBAOE_PBKAMKPGDBL_OFFSET))(this);
	}
};
