#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define PLCNOAKLOIH_LBDBEOMOAIA_AKCHANLLBHK_OFFSET UNITYSDK_OFFSET(0x1C6637E0)
#define PLCNOAKLOIH_LBDBEOMOAIA__CTOR_OFFSET UNITYSDK_OFFSET(0x1C6637D0)

inline static constexpr unsigned int PLCNOAKLOIH_LBDBEOMOAIA_TypeDefinitionIndex = 89224;

class PLCNOAKLOIH_LBDBEOMOAIA : public ::System::Object
{
public:
	::System::Action* EDNJGMKPFHG; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLCNOAKLOIH_LBDBEOMOAIA__CTOR_OFFSET))(this);
	}

	::System::Void AKCHANLLBHK(::OAEFGCLEHHO* NAPFALLANDL)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + PLCNOAKLOIH_LBDBEOMOAIA_AKCHANLLBHK_OFFSET))(this, NAPFALLANDL);
	}
};
