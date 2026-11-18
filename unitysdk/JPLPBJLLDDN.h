#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ELocalPlayType.h"
#include "unitysdk/System/Object.h"

#define JPLPBJLLDDN_GMCBKMPOOAK_OFFSET UNITYSDK_OFFSET(0x1C374A00)

inline static constexpr unsigned int JPLPBJLLDDN_TypeDefinitionIndex = 68457;

class JPLPBJLLDDN : public ::System::Object
{
public:
	static ::MoleMole::ELocalPlayType GMCBKMPOOAK()
	{
		return ((::MoleMole::ELocalPlayType(*)())((::PBYTE)hIl2Cpp + JPLPBJLLDDN_GMCBKMPOOAK_OFFSET))();
	}
};
