#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/InLevelPauseLevelTab.h"
#include "unitysdk/System/Object.h"

#define DHPGIJDKCHN__CTOR_OFFSET UNITYSDK_OFFSET(0x124123A0)

inline static constexpr unsigned int DHPGIJDKCHN_TypeDefinitionIndex = 80878;

class DHPGIJDKCHN : public ::System::Object
{
public:
	::MoleMole::InLevelPauseLevelTab JJOAEDMPLOK; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHPGIJDKCHN__CTOR_OFFSET))(this);
	}
};
