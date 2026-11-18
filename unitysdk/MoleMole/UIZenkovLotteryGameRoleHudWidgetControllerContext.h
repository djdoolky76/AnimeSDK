#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIZENKOVLOTTERYGAMEROLEHUDWIDGETCONTROLLERCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x13BFA770)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovLotteryGameRoleHudWidgetControllerContext_TypeDefinitionIndex = 66353;

	class UIZenkovLotteryGameRoleHudWidgetControllerContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Foundation::AssetPath HeadIconPath; // 0x28
		::System::Single ReduceHpPercent; // 0x38
		::System::Single ShaderCurHpPercent; // 0x3C
		::System::Single MaxHpReductionPercent; // 0x40
		::System::Boolean IsEmpty; // 0x44
		::System::Boolean IsAlive; // 0x45
		::System::Byte _padding0[0x2];
		::System::Single CurHpPercent; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVLOTTERYGAMEROLEHUDWIDGETCONTROLLERCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
