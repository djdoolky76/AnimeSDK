#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define PLCNOAKLOIH_IGFGMNGKDGK_AFMBLKEFHKJ_OFFSET UNITYSDK_OFFSET(0x1A7F8EA0)
#define PLCNOAKLOIH_IGFGMNGKDGK__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7F8E90)

inline static constexpr unsigned int PLCNOAKLOIH_IGFGMNGKDGK_TypeDefinitionIndex = 89235;

class PLCNOAKLOIH_IGFGMNGKDGK : public ::System::Object
{
public:
	::System::Action* EDNJGMKPFHG; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLCNOAKLOIH_IGFGMNGKDGK__CTOR_OFFSET))(this);
	}

	::System::Void AFMBLKEFHKJ(::OAEFGCLEHHO* NAPFALLANDL)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + PLCNOAKLOIH_IGFGMNGKDGK_AFMBLKEFHKJ_OFFSET))(this, NAPFALLANDL);
	}
};
