#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CELCKMLEKAN.h"
#include "unitysdk/MoleMole/ConfigUICommon_Input_SceneType.h"

namespace MoleMole { class SystemSettingEntryBase; }

#define DNEFCIABGIP_GKFHGHHMOLN_OFFSET UNITYSDK_OFFSET(0x19D7DDD0)
#define DNEFCIABGIP__CTOR_OFFSET UNITYSDK_OFFSET(0x19D7DD90)

inline static constexpr unsigned int DNEFCIABGIP_TypeDefinitionIndex = 90703;

class DNEFCIABGIP : public ::CELCKMLEKAN
{
public:
	::System::Void _ctor(::MoleMole::SystemSettingEntryBase* BIPDGDLHLCI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SystemSettingEntryBase*))((::PBYTE)hIl2Cpp + DNEFCIABGIP__CTOR_OFFSET))(this, BIPDGDLHLCI);
	}

	::MoleMole::ConfigUICommon_Input_SceneType GKFHGHHMOLN()
	{
		return ((::MoleMole::ConfigUICommon_Input_SceneType(*)(::PVOID))((::PBYTE)hIl2Cpp + DNEFCIABGIP_GKFHGHHMOLN_OFFSET))(this);
	}
};
