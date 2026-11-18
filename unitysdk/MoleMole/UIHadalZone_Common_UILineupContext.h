#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class NOAHNKGLKKG;

#define MOLEMOLE_UIHADALZONE_COMMON_UILINEUPCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x19C3CDD0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHadalZone_Common_UILineupContext_TypeDefinitionIndex = 50981;

	class UIHadalZone_Common_UILineupContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::NOAHNKGLKKG* lineupZoneInfo; // 0x28
		::System::Boolean usePrevLayerHistory; // 0x30
		::System::Boolean isBattleResultChange; // 0x31

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_COMMON_UILINEUPCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
