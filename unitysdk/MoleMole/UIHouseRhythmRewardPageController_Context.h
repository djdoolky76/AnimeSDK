#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class CKKHNHHDMPN;

#define MOLEMOLE_UIHOUSERHYTHMREWARDPAGECONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x187D6B40)

namespace MoleMole
{
	inline static constexpr unsigned int UIHouseRhythmRewardPageController_Context_TypeDefinitionIndex = 46189;

	class UIHouseRhythmRewardPageController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::CKKHNHHDMPN* HouseRhythmData; // 0x28
		::System::Boolean ShowGetBtn; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUSERHYTHMREWARDPAGECONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
