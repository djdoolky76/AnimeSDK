#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/OEPFGCNCGKD.h"

class HEKOPGNBKHF;
namespace MoleMole { class ServerListInfo; }

#define HEKOPGNBKHF_AMPLIENOFBE_DOEPJPEFFJO_OFFSET UNITYSDK_OFFSET(0x15DA34E0)
#define HEKOPGNBKHF_AMPLIENOFBE__CTOR_OFFSET UNITYSDK_OFFSET(0x15DA34D0)

inline static constexpr unsigned int HEKOPGNBKHF_AMPLIENOFBE_TypeDefinitionIndex = 85176;

class HEKOPGNBKHF_AMPLIENOFBE : public ::System::Object
{
public:
	::MoleMole::ServerListInfo* GFEHDJEOEIA; // 0x10
	::HEKOPGNBKHF* KLHPEBKNIFB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEKOPGNBKHF_AMPLIENOFBE__CTOR_OFFSET))(this);
	}

	::System::Void DOEPJPEFFJO(::OEPFGCNCGKD DJCNCELJPOM)
	{
		return ((::System::Void(*)(::PVOID, ::OEPFGCNCGKD))((::PBYTE)hIl2Cpp + HEKOPGNBKHF_AMPLIENOFBE_DOEPJPEFFJO_OFFSET))(this, DJCNCELJPOM);
	}
};
