#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIZENKOVSEASONRANKWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x13BFCD30)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovSeasonRankWidgetController_Context_TypeDefinitionIndex = 40959;

	class UIZenkovSeasonRankWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 MedalID; // 0x28
		::System::Int32 LastMedalID; // 0x2C
		::System::Int32 Season; // 0x30
		::System::Boolean BindClick; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVSEASONRANKWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
