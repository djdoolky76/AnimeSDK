#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DACEDJLJOGK;
class DNKONAKNCOL;

#define RPG_CLIENT_B51RACING_B51RACINGDIYDECOPANELCONTROL___C__DISPLAYCLASS16_0_CTOR_OFFSET UNITYSDK_OFFSET(0xC7337E0)
#define RPG_CLIENT_B51RACING_B51RACINGDIYDECOPANELCONTROL___C__DISPLAYCLASS16_0___GETSELECTEDITEMINDEX_B__0_OFFSET UNITYSDK_OFFSET(0xC733F90)

namespace RPG::Client::B51Racing
{
	inline static constexpr unsigned int B51RacingDIYDecoPanelControl___c__DisplayClass16_0_TypeDefinitionIndex = 81773;

	class B51RacingDIYDecoPanelControl___c__DisplayClass16_0 : public ::System::Object
	{
	public:
		::DNKONAKNCOL* vm; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGDIYDECOPANELCONTROL___C__DISPLAYCLASS16_0_CTOR_OFFSET))(this);
		}

		::System::Boolean __GetSelectedItemIndex_b__0(::DACEDJLJOGK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DACEDJLJOGK*))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGDIYDECOPANELCONTROL___C__DISPLAYCLASS16_0___GETSELECTEDITEMINDEX_B__0_OFFSET))(this, a1);
		}

	};
}
