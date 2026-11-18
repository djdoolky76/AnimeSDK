#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIRidusGotBooPageController_KeyPosition.h"
#include "unitysdk/System/Object.h"

#define DNDMJGGEAFB_PKOGNPKCHHE_OFFSET UNITYSDK_OFFSET(0x16BC1CE0)
#define DNDMJGGEAFB__CTOR_OFFSET UNITYSDK_OFFSET(0x16BC1CA0)

inline static constexpr unsigned int DNDMJGGEAFB_TypeDefinitionIndex = 53624;

class DNDMJGGEAFB : public ::System::Object
{
public:
	::System::Single OJLNDNBCFMD; // 0x10
	::MoleMole::UIRidusGotBooPageController_KeyPosition OBGANGOPFHK; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNDMJGGEAFB__CTOR_OFFSET))(this);
	}

	::System::Void PKOGNPKCHHE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNDMJGGEAFB_PKOGNPKCHHE_OFFSET))(this);
	}
};
