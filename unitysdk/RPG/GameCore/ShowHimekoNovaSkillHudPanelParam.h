#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_GAMECORE_SHOWHIMEKONOVASKILLHUDPANELPARAM_CTOR_OFFSET UNITYSDK_OFFSET(0xF250250)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowHimekoNovaSkillHudPanelParam_TypeDefinitionIndex = 59932;

	class ShowHimekoNovaSkillHudPanelParam : public ::System::Object
	{
	public:
		::System::Single Duration; // 0x10
		::System::Boolean IsResetFireCD; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWHIMEKONOVASKILLHUDPANELPARAM_CTOR_OFFSET))(this);
		}

	};
}
